#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    char d[100];
    int x=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            d[x++]='[';
            d[x++]=s[i];
            d[x++]=']';
        }
        else
        {
            d[x++]=s[i];
        }
    }
    printf("%s",d);
}