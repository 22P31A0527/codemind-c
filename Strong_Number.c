#include<stdio.h>
int fun(int n){
    int j,p=1;
    for(j=1;j<=n;j++)
    {
        p=p*j;
    }
    return p;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,i,x;
        scanf("%d",&m);
        int q=m,r,s=0;
        while(q!=0)
        {
            r=q%10;
            x=fun(r);
            s=s+x;
            q=q/10;
        }
        if(s==m) printf("Strong
");
        else printf("Not Strong
");
    }
}