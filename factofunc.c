#include<stdio.h>
int fact(int n);
int main()
{
int num,f;
printf("Enter a number: ");
scanf("%d",&num);
f=fact(num);
printf("Factorial of %d is %d.\n",num,f);
return 0;
}
int fact(int n)
{
if(n==0)
return 1;
if(n==1)
return 1;
else
return n*fact(n-1);
}

