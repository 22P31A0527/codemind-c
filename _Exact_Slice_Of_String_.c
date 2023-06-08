#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",&s);
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        printf("%c",s[i]);
    }
}