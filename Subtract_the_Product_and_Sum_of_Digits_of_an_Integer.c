#include<stdio.h>
int main()
{
    int n,r,s=0,p=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    d=p-s;
    printf("%d",d);
}