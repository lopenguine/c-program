#include<stdio.h>
int main(){
int i,a,rem,b=0;
printf("Enter a number to be reversed: ");
scanf("%d",&a);
while(a!=0){
rem=a%10;
b=b*10+rem;
a/=10;}
printf("The number after reversing: %d",b);
return 0;}

