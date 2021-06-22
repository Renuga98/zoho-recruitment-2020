#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int i,j,n,c;
    
    printf("enter the string:");
    scanf("%[^\n]%*c", str);
    n=strlen(str);
    c=n/2;
    for(i=0;i<n;i++)
    {
    for(j=n-1;j>i;j--)
    {
       printf(" ");
    }
    for(j=c;j<=c+i&&j<n;j++)
    {
       printf("%c",str[j]);
    }
    if(i>c)
    {
        for(j=0;j<i-c;j++)
        {
           printf("%c",str[j]);
        }
    }
    printf("\n");
    }
    
}
