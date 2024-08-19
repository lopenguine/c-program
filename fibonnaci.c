#include <stdio.h>
int main()
{
int i, n, n1 = 0, n2 = 1;
int sum = n1 + n2;
printf("Enter the number of terms you want: ");
scanf("%d", &n);
printf("Fibonacci Series: %d, %d, ", n1, n2);
for (i = 2; i < n; ++i)
{
printf("%d, ", sum);
n1 = n2;
n2 = sum;
sum= n1 + n2;
}
return 0;
}
