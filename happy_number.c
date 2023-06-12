#include<stdio.h>
int rec(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
    }
    if(s<=9) return s;
    rec(s);
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=rec(n);
    if(x==1 ||  x==7) printf("True");
    else printf("False");
}