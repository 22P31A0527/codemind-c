#include<stdio.h>
int check(int k,int *b,int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(b[i]==k) return 0;
    }
    return 1;
}
int count(int *a,int n,int k)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n],l=0,j,s=0,c;
    for(i=0;i<n;i++)
    {
        if(l==0) 
        {
            b[l++]=a[i];
            c=count(a,n,a[i]);
            s=s+c/2;
        }
        else
        {
            if(check(a[i],b,l)==1)
            {
                b[l++]=a[i];
                c=count(a,n,a[i]);
                s=s+c/2;
            }
        }
    }
    printf("%d",s);
}