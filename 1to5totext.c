#include<stdio.h>
int main ()
{
int number;
printf("Enter a number:");
scanf("%d",&number);
switch(number)
{
case 1 :printf("One\n");
break;
case 2 :printf("Two\n");
break;
case 3 :printf("Three\n");
break;
case 4 :printf("Four\n");
break;
case 5 :printf("Five\n");
break;
default :printf("Invalid Number\n" );
}
return 0;
}
