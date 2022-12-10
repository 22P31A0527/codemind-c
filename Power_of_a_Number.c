#include<stdio.h>
#include<math.h>
int main()
{
    int p,q,r,x,y;
    scanf("%d%d%d",&p,&q,&r);
    x=pow(p,q);
    y=x%r;
    printf("%d",y);
}