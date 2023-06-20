#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int s=1;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%5==0)
        {
            n=n/5;
        }
        else
        {
            s=0;
            break;
        }
    }
    if(s==1) printf("Ugly Number");
    else printf("Not Ugly Number");
}