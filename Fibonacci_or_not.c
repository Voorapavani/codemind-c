#include<stdio.h>
int main()
{
    int n,i,a,b,c,cnt=0;
    scanf("%d",&n);
    a=0,b=1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            cnt++;
            break;
        }
        a=b;
        b=c;
    }
    if(cnt==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}