#include<stdio.h>
int main()
{
    int n,i,s=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
        d=d+i;
    }
    printf("%d",d*d-s);
}