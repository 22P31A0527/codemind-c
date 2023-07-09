#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a[n-1]=a[n-1]+1;
    if(a[n-1]<10){
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        int x=0;
        for(i=n-1;i>=0;i--)
        {
            a[i]=a[i]+x;
            x=a[i]/10;
            if(a[i]>9){
                a[i]=a[i]%10;
            }
        }
        if(x!=0)
        {
            printf("%d ",x);
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
}