#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,d=0,s=0,c=0;
    scanf("%d",&n);
    num=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    n=num;
    while(n)
    {
        d=n%10;
        s=s+pow(d,c);
        n=n/10;
        c--;
    }
    if(s==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}