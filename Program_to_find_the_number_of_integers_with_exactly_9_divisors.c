#include<stdio.h>
int fun(int n)
{
    int i,c=2;
    for(i=2;i<n;i++)
    {
        if(n%i==0) c++;
    }
    if(c==9) return 1;
    else return 0;
}
int main()
{
    int i,x,n,t=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        x=fun(i);
        if(x==1)
        {
            printf("%d ",i);
            t++;
        }
    }
    printf("
Total=%d",t);
}