#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,p=0,q=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='z')
        {
            p++;
        }
        if(s[i]=='o')
        {
            q++;
        }
    }
    if(2*p==q) printf("Yes");
    else printf("No");
}