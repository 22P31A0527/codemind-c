#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,c,j,t=0;
    for(i=0;i<strlen(s);i++)
    {
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==s[i]) c++;
        }
        if(c==1) 
        {
            printf("%d",i);
            t=1;
            break;
        }
    }
    if(t==0)  printf("-1");
}