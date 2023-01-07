#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n],x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        c++;
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}