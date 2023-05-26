#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,j,c=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%10==2 || j%10==3 ||j%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}