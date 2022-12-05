#include<stdio.h>
int main()
{
    int d,y,z,w;
    scanf("%d",&d);
    y=d/365;
    z=d%365;
    w=z/7;
    printf("%d
%d
",y,w);
}