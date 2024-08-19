#include<stdio.h>
int fact(int);
int main(){
int a,x;
printf("Enter the number for which the factorial is needed: ");
scanf("%d",&a);
x=fact(a);

printf("the factorial of %d is %d",a,x);
return 0;
}
int fact(int a){
int i,f=1;
for(i=1;i<=a;i++){
f*=i;}

return (f);}
