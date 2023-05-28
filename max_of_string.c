#include<stdio.h>
#include<string.h>
int main()
{
    int x,max=0,i;
    char s[100];
    scanf("%[^
]",&s);
    for(i=0;i<strlen(s);i++)
    {
        x=s[i];
        if(x>max){
            max=x;
        }
    }
    printf("%c",max);
}