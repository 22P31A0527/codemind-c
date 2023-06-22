#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0,i;
    for(i=1;i<=n;i++)
    {
        char s[10];
        scanf("%s",&s);
        if(s[0]=='+' && s[1]=='+') x++;
        else if(s[1]=='+' && s[2]=='+') x++;
        else if(s[0]=='-' && s[1]=='-') x--;
        else if(s[1]=='-' && s[2]=='-') x--;
    }
    printf("%d",x);
}