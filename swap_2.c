#include <stdio.h>
int main()
{
int a,b; 
printf("Enter two variables before swapping\n");
printf("a:");
scanf("%d",&a);
printf("b:");
scanf("%d",&b);
printf("Values stored in a:%d and b:%d",a,b) ;
a=a+b;
b=a-b;
a=a-b;
printf("\n Values after swapping a=%d and b=%d", a,b);
}

