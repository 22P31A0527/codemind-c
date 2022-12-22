#include<stdio.h>
int main()
{
    int n,s=0,r,x,i;
    scanf("%d",&n);
    x=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    int p,t=0,y;
    y=s*s;
    while(y>0)
    {
        p=y%10;
        t=t*10+p;
        y=y/10;
    }
    if(t==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}