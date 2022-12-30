#include<stdio.h>
int main()
{
    int n,x,y,s=0,r,q,t=0;
    scanf("%d",&n);
    x=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    y=s*s;
    while(y!=0)
    {
        q=y%10;
        t=t*10+q;
        y=y/10;
    }
    if(x==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}