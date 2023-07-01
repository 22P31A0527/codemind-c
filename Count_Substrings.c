#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int n;
        scanf("%d",&n);
        char s[100];
        scanf("%s",&s);
        int i,j,c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                for(j=i;j<n;j++)
                {
                    if(s[i]==s[j]) c++;
                }
            }
        }
        printf("%d
",c);
    }
}