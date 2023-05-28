#include<stdio.h>
int fun(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int a,b,i,x;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        x=fun(i);
        if(x==1) printf("%d
",i);
    }
}