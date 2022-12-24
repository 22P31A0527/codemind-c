#include<stdio.h>
int main()
{
    int n,sq,p=0,r;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sq=sq/10;
        p=p+r;
    }
    if(p==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}