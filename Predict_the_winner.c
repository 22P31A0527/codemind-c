#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0) s1=s1+a[i];
        else s2=s2+a[i];
    }
    int t;
    if(s1>s2) t=s1-s2;
    else t=s2-s1;
    if(t%4==0) printf("X");
    else printf("Y");
}