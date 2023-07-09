#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int e=0,o=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0) e++;
        else o++;
    }
    printf("%d %d",e,o);
}