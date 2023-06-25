#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=0,c;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=0;
            for(j=i;j<n;j++)
            {
                if(a[j]==a[i])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if(c>s)
            {
                s=c;
            }
        }
    }
    printf("%d",s);
}