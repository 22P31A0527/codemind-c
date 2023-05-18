#include<stdio.h>
int main()
{
    int n,sum=0,r;
    
    scanf("%d",&n);
    int q=n;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=q;
    if(sum==n) printf("True");
    else printf("False");
}