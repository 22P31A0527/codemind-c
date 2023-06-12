#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || j==n-1 ||i==0 ||i==n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}
