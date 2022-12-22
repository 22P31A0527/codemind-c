#include<stdio.h>
int main()
{
    int n,x=0,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r>x)
        {
            x=r;
        }
        n=n/10;
    }
    printf("%d",x);
}