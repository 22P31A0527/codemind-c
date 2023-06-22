#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,j,max=0,c;
    for(i=0;i<strlen(s);i++)
    {
        c=0;
        for(j=i;j<strlen(s);j++)
        {
            if(s[j]=='a'||s[j]=='e'||
             s[j]=='i'||s[j]=='o'||s[j]=='u')
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