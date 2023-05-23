#include<stdio.h>
int main()
{
    int n,i,s=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2!=0){
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            m=m+a[i];
        }
    }
   int k=m-s;
   printf("%d",k);
}