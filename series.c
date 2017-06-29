#include<stdio.h>
void main()
{
    int i,n,fib=0,a=0,b=1;
    printf("\n enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fib=fib+a;
        a=b;
        b=fib;
        printf("\n%d",fib);
    }
}
    
