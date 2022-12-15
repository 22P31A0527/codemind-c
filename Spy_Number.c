#include<stdio.h>
int main()
{
    int n,r,s=0,d=1;
    scanf("%d",&n);
    while(n!=0)
    {
      r=n%10;
      n=n/10;
      s=r+s;
      d=d*r;
    }
    if(d==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}