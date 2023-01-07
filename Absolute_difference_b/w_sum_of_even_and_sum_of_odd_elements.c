#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[n],se=0,so=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        se=se+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        so=so+a[i];
    }
    s=abs(se-so);
    printf("%d",s);
}