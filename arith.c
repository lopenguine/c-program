#include <stdio.h>

int main()
{
int a, b, res;
printf("Enter a:\n");
scanf("%d", &a);
printf("Enter b:\n");
scanf("%d", &b);

res = a + b; // addition
printf("a + b is %d\n", res);

res = a - b; // subtraction
printf("a - b is %d\n", res);

res = a * b; // multiplication
printf("a * b is %d\n", res);

res = a / b; // division
printf("a / b is %d\n", res);

res = a % b; // modulus
printf("a %% b is %d\n", res);

return 0;
}
