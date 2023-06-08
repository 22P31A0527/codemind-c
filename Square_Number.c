#include<stdio.h>
int main()
{
    int n,i,j,x,y,s=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            x=i*i;
            y=j*j;
            if(x+y==n)
            {
                s=1;
                break;
            }
        }
    }
    if(s==0) printf("False");
    else printf("True");
}