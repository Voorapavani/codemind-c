#include<stdio.h>
int main()
{
    int n,i,k=0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);
        k=k+i;
    }
    k=(k*k)-s;
    printf("%d",k);
}