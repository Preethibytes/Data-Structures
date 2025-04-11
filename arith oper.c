#include<stdio.h>
int add(int a,int b);
{
    return a+b;
}
int sub(int a,int b);
{
    return a-b;
}
int mul(int a,int b);
{
    return a*b;
}
int div(int a,int b)
{
    return (float)a/b;
}
int mod(int a,int b);
{
    return a%b;
}
void main()
{
    int x,y;
    printf("Enter the values:");
    scanf("%d%d",&x,&y);
    printf("add=%d\n",add(x,y));
    printf("sub=%d\n",sub(x,y));
    printf("mul=%d\n",mul(x,y));
    printf("div=%d\n",div(x,y));
    printf("mod=%d\n",mod(x,y));
}