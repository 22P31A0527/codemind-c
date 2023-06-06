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
    int q,r,c;
    for(i=0;i<n;i++)
    {
        c=0;
        q=a[i];
        if(q==0) c++;
        else
        {
            while(q!=0)
            {
                r=q%10;
                c++;
                q=q/10;
            }
        }
        printf("%d ",c);
    }
}