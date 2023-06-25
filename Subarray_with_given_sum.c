#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int i,j,a[n],s;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int c=0;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=i;j<n;j++)
            {
                s=s+a[j];
                if(s==m)
                {
                    c=1;
                    printf("%d %d
",i+1,j+1);
                    break;
                }
            }
            if(c==1) break;
        }
        if(c==0) printf("-1
");
    }
}