#include<stdio.h>
void fun(int n)
{
    int r,s=0,q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n) printf("%d ",n);
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        fun(i);
    }
}