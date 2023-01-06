#include<stdio.h>
int main()
{
    int n,t,q;
    scanf("%d",&n);
    while(n>=9)
    {
        q=0;
        while(n!=0)
        {
            t=n%10;
            q=q+t;
            n=n/10;
        }
        n=q;
    }
    printf("%d",n);
}