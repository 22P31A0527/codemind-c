#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float c,b;
    if(n<200)
    {
        c=n*1.20;
    }
    else if(200<=n&&n<400)
    {
        c=n*1.50;
    }
    else if(400<=n&&n<600)
    {
        c=n*1.80;
    }
    else
    {
        c=n*2.00;
    }
 
    if(c>400)
    {
        b=c+(c*0.15);
    }
    else
    {
        b=c+100;
    }
    printf("%.2f",b);
}