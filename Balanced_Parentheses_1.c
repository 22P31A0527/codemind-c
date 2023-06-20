#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int n=strlen(s);
    int a=0,b=0,c=0,d=0,e=0,f=0,i;
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            a++;
        }
        else if(s[i]==')')
        {
            b++;
        }
        else if(s[i]=='[')
        {
            c++;
        }
        else if(s[i]==']')
        {
            d++;
        }
        else if(s[i]=='{')
        {
            e++;
        }
        else if(s[i]=='}')
        {
            f++;
        }
    }
    if(a==b && c==d && e==f)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}