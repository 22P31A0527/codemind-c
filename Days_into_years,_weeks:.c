#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p1,p2;
    p1=n/365;
    p2=(n%365)/7;
    printf("%d
%d",p1,p2);
}