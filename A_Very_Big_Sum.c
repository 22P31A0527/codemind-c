#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%lld",sum);
}