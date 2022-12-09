#include<stdio.h>
int main()
{
    int a,b,c,d,e,x;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=(a+b+c+d+e)/5;
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }
    else if(x>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}