#include <stdio.h>
void main()
{
int i=1,n,sum=0;
printf("Input the number of terms : ");
scanf("%d",&n);printf("\nThe square natural upto %d terms are :\n",n);
while(i<=n){
printf("%d\t",i*i);
sum+=i*i;
i++;
}
printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
}
