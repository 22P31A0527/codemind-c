#include<stdio.h>
int digits(int q)
{
    int i,sum=0;
    for(i=1;i<=q/2;i++)
    {
        if(q%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int x=digits(n);
    int y=digits(m);
    if(x==m && y==n) printf("Amicable");
    else printf("Not Amicable");
}