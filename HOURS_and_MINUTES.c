#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int h,m;
    h=t/60;
    m=t%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}