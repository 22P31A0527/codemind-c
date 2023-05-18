#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d
",n+m);
    }
}