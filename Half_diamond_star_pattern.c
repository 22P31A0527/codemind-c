#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(3<=n && n<=100)
    {
        int i,j,k;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=n-1;i>0;i--)
        {
            for(j=i;j>0;j--)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else{
        printf("The pattern is not possible");
    }
}