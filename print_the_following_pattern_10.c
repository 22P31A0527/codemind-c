#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(l=n-1;l>i;l--)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        for(k=0;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}