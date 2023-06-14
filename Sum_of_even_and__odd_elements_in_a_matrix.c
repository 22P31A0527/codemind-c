#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int se=0,so=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==0)
            {
                se=se+a[i][j];
            }
            else
            {
                so=so+a[i][j];
            }
        }
    }
    printf("%d %d",se,so);
}