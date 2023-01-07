#include<stdio.h>
int main()
{
    int n,i,s=0,c=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        c++;
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}