#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],d[100];
    scanf("%[^
]s",&s);
    int i,x=0;
    for(i=strlen(s)-1;i>=0;i--)
    {
        d[x++]=s[i];
    }
    printf("%s",d);
}