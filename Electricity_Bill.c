#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float cu,b,s,t;
    if(u<=199)
    cu=1.2;
    else if(u>=200&&u<400)
    cu=1.4;
    else if(u>=400&&u<600)
    cu=1.6;
    else if(u>=600&&u<800)
    cu=1.8;
    else
    cu=2.0;
    b=cu*u;
    if(b>400)
    s=b*0.15;
    t=b+s;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,cu,b,s,t);
}