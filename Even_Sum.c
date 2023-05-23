#include<stdio.h>
int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            m=m+a[i];
        }
    }
   printf("%d",m);
}