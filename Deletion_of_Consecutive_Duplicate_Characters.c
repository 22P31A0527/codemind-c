#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        char s[100];
        scanf("%s",&s);
        int i;
        char s1[100];
        int j=0,c=0;
        for(i=0;i<strlen(s);i++)
        {
            if(j==0)
            {
                s1[j++]=s[i];
            }
            else if(s1[j-1]!=s[i])
            {
                s1[j++]=s[i];
            }
            else
            {
                c++;
            }
        }
       printf("%d
",c);
    }
}