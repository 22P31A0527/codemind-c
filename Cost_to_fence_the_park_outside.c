#include<stdio.h>
int main()
{
    int l,b,w,c,a,ct;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l+2*w)*(b+2*w)-(l*b);
    ct=c*a;
    printf("%d",ct);
}