#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i;
    char s1[100],j=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||
        s[i]=='o'||s[i]=='u')
        {
            if(j==0)
            {
                s1[j++]='V';
            }
            else if(s1[strlen(s1)-1]!='V')
            {
                s1[j++]='V';
            }
        }
        else
        {
            if(j==0)
            {
                s1[j++]='C';
            }
            else if(s1[strlen(s1)-1]!='C')
            {
                s1[j++]='C';
            }
        }
    }
    printf("%s",s1);
}