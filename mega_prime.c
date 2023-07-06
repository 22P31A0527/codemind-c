// mega prime in c
#include<stdio.h>
int fun(int n)
{
    if(n==1) return 0;
    else{
        int i;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0) return 0;
        }
        return 1;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int x=fun(n); //num is prime
    if(x==1)
    {
        int r,c=0,co=0,m,q=n;
        while(q!=0)
        {
            r=q%10;
            co++;
            int m=fun(r);
            q=q/10;
            if(m==1) c++;
        }
        if(c==co) printf("Mega Prime");
        else printf("Not Mega Prime");
    }
    else printf("Not Mega Prime");
}