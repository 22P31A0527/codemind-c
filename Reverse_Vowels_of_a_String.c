#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    char d[100];
    int x=-1,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||
        s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||
        s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            d[++x]=s[i];
        }
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||
        s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||
        s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            s[i]=d[x--];
        }
    }
    printf("%s",s);
}