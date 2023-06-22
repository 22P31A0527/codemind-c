#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,j,d=0,c;
    for(i=0;i<strlen(s);i++)
    {
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==s[i]) c++;
        }
        if(c!=1)
        {
            d=1;
            printf("Not Unique Number");
            break;
        }
    }
    if(d==0) printf("Unique Number");
}