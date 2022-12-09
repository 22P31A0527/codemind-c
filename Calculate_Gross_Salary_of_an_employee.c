#include<stdio.h>
int main()
{
    float b,h,d;
    scanf("%f%f%f",&b,&h,&d);
    float p,g;
    p=b*0.12;
    g=p+b+h+d;
    printf("%0.2f
%0.2f",p,g);
}