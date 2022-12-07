#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x,y,z,m;
    x=a/3600;
    y=a%3600;
    z=y/60;
    m=y%60;
    printf("H:M:S-%d:%d:%d",x,z,m);
}