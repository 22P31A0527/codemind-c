#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int m=n;
    if(n%5==0)
    {
        x=m/10;  //5
        if(x*10==n) printf("%d",x);
        else printf("%d",x+1);
    }
    else printf("-1");
}