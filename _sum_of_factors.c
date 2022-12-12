#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    r=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            r=r+i;
        }
    }
    printf("%d",r);
}