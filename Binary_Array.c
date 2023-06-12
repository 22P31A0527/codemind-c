#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i]!=1)
        {
            s=0;
            break;
        }
    }
    if(s==0) printf("False");
    else printf("True");
}