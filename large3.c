#include<stdio.h>
int main(){
int a,b,c;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);
if(a>=b && a>=c){
printf("%d is the biggest of three numbers!!",a);}
if(b>=a && b>=c){
printf("%d is the greatest of all three number!!",b);}
if(c>=a && c>=b){
printf("%d is the greatest of all three number!!",c);}
return 0;
}
