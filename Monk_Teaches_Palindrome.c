#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        char s1[100];
        scanf("%s",&s1);
        char s2[100];
        int j=0,i;
        for(i=strlen(s1)-1;i>=0;i--)
        {
            s2[j++]=s1[i];
        }
        int l=1;
        for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]!=s2[i])
            {
                l=0;
                break;
            }
        }
        if(l==1)
        {
            printf("YES ");
            if(strlen(s1)%2==0)
            {
                printf("EVEN
");
            }
            else
            {
                printf("ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
    }
}