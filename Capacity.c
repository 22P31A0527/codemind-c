#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("%d KB",2*x*y*z*512/1024);
}