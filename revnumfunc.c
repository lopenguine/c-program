#include<stdio.h>
int sum=0,rem;
int rev_fn(int num)
{
if(num)
{
rem=num%10;
sum=sum*10+rem;
rev_fn(num/10);
}
else
{
return sum;}
return sum;
}
int main(){
int num,rev_num;
printf("Enter any number: ");
scanf("%d",&num);
rev_num=rev_fn(num);
printf("The reversed of entered number is %d",rev_num);
return 0;
}
