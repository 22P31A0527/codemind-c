#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int i,j,a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}