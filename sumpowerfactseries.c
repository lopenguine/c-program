#include <stdio.h>
void main()
{
float x,sum,no_row;
int i,n;
printf("Input the value of x :");
scanf("%f",&x);
printf("Input number of terms : ");scanf("%d",&n);
sum =1; no_row = 1;
for (i=1;i<n;i++)
{
no_row = no_row*x/(float)i;
printf("%f\t",no_row);
sum =sum+ no_row;
printf("%f\t",sum);
}
printf("\nThe sum is : %f\n",sum);
}
