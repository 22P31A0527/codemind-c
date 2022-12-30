#include<stdio.h>
int main()
{
    int q,r,s=0,n;
    scanf("%d",&q);
    n=q;   //number is q
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(q==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}