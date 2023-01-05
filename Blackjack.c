#include<stdio.h>
int main()
{
    int x,y,z,s;
    scanf("%d%d",&x,&y);
    z=21-(x+y);
    if(1<=z&&z<=10)
    {
        s=z;
    }
    else
    {
        s=-1;
    }
    printf("%d",s);
}