#include<stdio.h>
int main()
{
    int a,i,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(a=1;a<=i;a++)
        printf("*");
        printf("
");
    }
}