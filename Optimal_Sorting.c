#include<stdio.h>
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
        int p=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                p=1;
                break;
            }
        }
        if(p==0) printf("0");
        else
        {
            int max=0,min=100;
            for(i=0;i<n;i++)
            {
                if(a[i]>max) max=a[i];
                if(a[i]<min) min=a[i];
            }
            printf("%d
",max-min);
        }
    }
}
