#include<stdio.h>
int main()
{
    int b;
    float d,h,g;
    scanf("%d",&b);
    if(b<=10000)
    {
       d=b/100*80;
       h=b/100*20;
    }
    else if(b<=20000)
    {
        d=b/100*90;
        h=b/100*25;
    }
    else
    {
        d=b/100*95;
        h=b/100*30;
    }
    g=b+d+h;
    printf("%0.2f",g);
}