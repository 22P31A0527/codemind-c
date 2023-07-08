#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",&s);
    int i,sum=0,x,y;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='1'||s[i]=='2'||s[i]=='3'||
        s[i]=='4'||s[i]=='5'||s[i]=='6'||
        s[i]=='7'||s[i]=='8'||s[i]=='9')
        {
            x=s[i];
            y=x-48;
            sum=sum+y;
        }
    }
    printf("%d",sum);
}