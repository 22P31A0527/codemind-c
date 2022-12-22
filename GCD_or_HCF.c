#include<stdio.h>
int main()
{
    int n,m,i,h;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n&&i<=m;i++)
    {
        if(n%i==0&&m%i==0)
        h=i;
    }
    printf("%d",h);
}