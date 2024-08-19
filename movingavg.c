#include<stdio.h>
int main()
{
int n,k,i,a[100];
printf("Enter the number sequence to which average to be calculated\n");
scanf("%d",&k);
printf("Enter the array limit max.limit is 100\n");
scanf("%d",&n);
printf("Enter the values one by one and enter -1 to terminate");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
float sum=0;
float movavg=0;
for(int i=0;i<=(n-k);i++)
{
sum=0;
for(int j=i;j<i+k;j++)
{
sum+=a[j];
}
movavg=sum/k;
printf("simple moving average: %.2f\n",movavg);
}
return 0;
}

