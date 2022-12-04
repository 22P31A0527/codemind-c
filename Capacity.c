#include<stdio.h>
int main()
{
    int c,s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    c=(2*s*t*b*512)/1024;
    printf("%dkb",c);
}