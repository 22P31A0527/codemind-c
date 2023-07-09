#include<stdio.h>
#include<string.h>
void sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}
int main()
{
    char s1[100],s2[100];
    scanf("%s%s",&s1,&s2);
    int a[strlen(s1)+strlen(s2)];
    int k=0,i,x;
    for(i=0;i<strlen(s1);i++)
    {
        x=s1[i];
        a[k++]=x;
    }
    for(i=0;i<strlen(s2);i++)
    {
        x=s2[i];
        a[k++]=x;
    }
    sort(a,strlen(s1)+strlen(s2));
}