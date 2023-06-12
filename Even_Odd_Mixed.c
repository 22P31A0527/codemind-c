#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int e=0,o=0;
    int r;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0) e++;
        else o++;
    }
    if(e>0 && o>0) printf("Mixed");
    else if(e>0) printf("Even");
    else printf("Odd");
}