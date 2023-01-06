#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float d,a[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    d=s/n;
    printf("%.2f",d);
}