#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float a;
    a=(x+y)*0.5;
    printf("Average of %d and %d is: %.2f",x,y,a);
}