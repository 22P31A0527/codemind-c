#include<stdio.h>
int check(int *b,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i]==k) return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n],k=0,x;
    for(i=0;i<n;i++)
    {
        if(k==0)
        {
            b[k++]=a[i];
        }
        else
        {
            x=check(b,k,a[i]);
            if(x==1)
            {
                b[k++]=a[i];
            }
        }
    }
    int j;
    for(j=0;j<k;j++)
    {
        printf("%d ",b[j]);
    }
}