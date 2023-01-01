#include<stdio.h>
int main()
{
    int n,q,i,s=0;
    scanf("%d",&n);
    q=n;
    for(i=1;i<n;i++)
    {
        if(q%i==0)
        {
            s=s+i;
        }
    }
    if(s==q)
    printf("PERFECT");
    else if(s<n)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}