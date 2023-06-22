#include<stdio.h>
#include<string.h>
int main()
{
    int k,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int n;
        scanf("%d",&n);
        char s[100];
        scanf("%s",&s);
        int i,j,c,so=0;
        char m;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(s[j]==s[i]) c++;
            }
            if(c==1)
            {
                so=1;
                printf("%c
",s[i]);
                break;
            }
        }
        if(so==0) printf("-1
");
    }
}