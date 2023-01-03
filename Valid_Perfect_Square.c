#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s;
        s=sqrt(a[i]);
        if(s*s==a[i])
        printf("True
");
        else
        printf("False
");
    }
}