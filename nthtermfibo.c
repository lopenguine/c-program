#include<stdio.h>
int fibo(int);
void main()
{
int n,f;
printf("Enter the value of n\n");
scanf("%d",&n);
f=fibo(n);
printf("%d",f);
}
int fibo(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return fibo(n-1)+fibo(n-2);
}
}

