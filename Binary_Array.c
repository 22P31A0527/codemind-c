#include<stdio.h>
int main()
{
    int n,i,a[n],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            s=1;
        }
        else
        {
            s=0;
            break;
        }
    }
    if(s==1) printf("True");
    else printf("False");
}