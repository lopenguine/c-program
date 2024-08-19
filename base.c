#include<stdio.h>
#include<stdlib.h>
int main(){
int a[10],n,i;
printf("Enter the number to convert: ");
scanf("%d",&n);
if (n==0) 
{
printf("\nBinary of Given Number is=0");
}
else
{
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
//printing the converted number
printf("\nBinary of Given Number is=");
//stop when base has been changed
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}}
return 0;
}
