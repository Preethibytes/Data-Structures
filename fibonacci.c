#include<stdio.h>
int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
        return fib(n-2)+fib(n-1);
    }
    void main()
    {
        int n,i;
        printf("Enter the linit:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        printf("%d\t",fib(i));
    }
