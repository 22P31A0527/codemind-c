#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n*n,r1,r2,s=1;
    while(n!=0)
    {
        r1=n%10;
        r2=m%10;
        if(r1!=r2)
        {
            s=0;
            break;
        }
        n=n/10;
        m=m/10;
    }
    if(s==1) printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}