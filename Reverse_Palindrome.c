#include<stdio.h>
int fox(int n)
{
    int r,s=0;
    while(n!=0)
   {
       r=n%10;
       s=s*10+r;
       n=n/10;
   }
   return s;
}
int fun(int n)
{
   int sm=n+fox(n);
   int ds=fox(sm);
   if(ds==sm)
   {
       return ds;
   }
   else
   {
       fun(ds);
   }
   
}
int main()
{
    int n;
    scanf("%d",&n);
    int t=fun(n);
    printf("%d",t);
}