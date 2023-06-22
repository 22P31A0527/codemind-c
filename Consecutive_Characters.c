#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int c,i,j,max=0;
    for(i=0;i<strlen(s);i++)
    {
        c=0;
        for(j=i;j<strlen(s);j++)
        {
            if(s[j]==s[i])
            {
                c++;
            }
            else{
                break;
            }
        }
        if(c>max) max=c;
    }
    printf("%d",max);
}