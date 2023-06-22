#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,j,m1=0,m2=0,c;
    for(i=0;i<strlen(s);i++)
    {
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==s[i]) c++;
        }
        if(c>m1)
        {
            m1=c;
        }
    }
    char d;
    for(i=0;i<strlen(s);i++)
    {
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==s[i]) c++;
        }
        if(c>m2 && c<m1)
        {
            m2=c;
            d=s[i];
        }
    }
    if(m2!=0) printf("%c",d);
    else printf("-1");
}