#include<stdio.h>
int max(int *a,int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ex;
    scanf("%d",&ex);
    int x,s;
    for(i=0;i<n;i++)
    {
        x=a[i];
        a[i]=a[i]+ex;
        s=max(a,n);
        if(s==a[i])
        {
           printf("True ");
        }
        else
        {
            printf("False ");
        }
        a[i]=x;
    }
}