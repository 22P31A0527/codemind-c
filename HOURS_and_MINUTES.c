#include<stdio.h>
int main()
{
    int n,r,d;
    scanf("%d",&n);
    r=n%60;
    d=n/60;
    printf("%d Hour(s) %d Minute(s)",d,r);
}