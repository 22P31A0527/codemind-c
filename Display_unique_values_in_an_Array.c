#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,c,k,l=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c++;
                if(i==j) k=j;
            }
        }
        //printf("%d ",c);
        if(c==1 && i==k)
        {
            l++;  // to check how many numbers
            printf("%d ",a[i]);
        }
    }
    if(l==0) printf("-1");
}