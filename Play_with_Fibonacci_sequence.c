#include<stdio.h>
int main()
{
    int n,i,cu=0;
    scanf("%d",&n);
    int a=0,b=1,c;
    while(cu<n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        cu++;
    }
}