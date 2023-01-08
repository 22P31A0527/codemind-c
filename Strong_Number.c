#include<stdio.h>
int main()
{
    int nu,n,i,r,s=0,p;
    scanf("%d",&nu);
    n=nu;
    while(n!=0)
    {
        r=n%10;
        p=1;
        for(i=1;i<=r;i++)
        {
            p=p*i;
        }
        s=s+p;
        n=n/10;
    }
    if(s==nu)
    printf("The number %d is a strong number",nu);
    else
    printf("The number %d is not a strong number",nu);
}