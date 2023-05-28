#include<stdio.h>
int fun(int n)
{
    int i,r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
    }
    if(s<=9) return s;
    fun(s);
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=fun(n);
    if(m==1 || m==7) printf("True");
    else printf("False");
}