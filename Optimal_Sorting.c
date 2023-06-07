#include<stdio.h>
int fun(int n,int *a)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(fun(n,a)==1)
        {
            printf("0");
        }
        else
        {
            int max=0,min=100;
            for(i=0;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
                if(a[i]<min)
                {
                    min=a[i];
                }
            }
            printf("%d
",max-min);
        }
    }
}