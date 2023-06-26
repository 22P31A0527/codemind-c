#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    if(strlen(s)==10 && s[0]!='0')
        printf("Valid");
    else if(strlen(s)==11 && s[0]=='0')
        printf("Valid");
    else 
        printf("Invalid");
}