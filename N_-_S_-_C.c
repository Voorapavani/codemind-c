#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,s,c;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        s=pow(i,2);
        c=pow(i,3);
        printf("%d %d %d
",i,s,c);
    }
}