#include<stdio.h>
int fun(int n)
{
    int r,q=n;
    while(q!=0)
    {
        r=q%10;
        if(r==0) return 0;
        else if(n%r!=0) return 0;
        q=q/10;
    }
    return 1;
}
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(fun(i)==1){
            printf("%d ",i);
        }
    }
}