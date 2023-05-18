#include<stdio.h>
int main()
{
    int q,r;
    scanf("%d",&q);
    int s=0;
    int n=q*q;
    while(n>0){
       r=n%10;
       s=s+r;
       n=n/10;
    }
    if(s==q){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}