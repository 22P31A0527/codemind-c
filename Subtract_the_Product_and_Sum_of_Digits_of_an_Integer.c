#include<stdio.h>
int main()
{
    int n,s,r,pr=1,sm=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        pr=pr*r;  //product
        sm=sm+r;   //sum
    }
    printf("%d",pr-sm);  //result
}