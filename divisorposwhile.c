#include <stdio.h>
int main()
{
int n;
printf("Enter the number :--> ");
scanf("%d", &n);
int div = 2; //divisor
printf("All the divisors of %d are : ", n);
while(div < n)
{
if(n % div == 0){
printf("%d ",div);
}
div++;
}
return 0;
}
