#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0 && 2<=n<=5)
    {
        printf("not weird");
    }
    else if(n%2!=0)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}