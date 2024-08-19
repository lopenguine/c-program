#include<stdio.h>
void main()
{
int eng,math,com,sci,ss,total;
float per;
printf("Enter Five Subjects Marks\n");scanf("%d%d%d%d%d",&eng,&math,&com,&sci,&ss);
total = eng + math + com + sci + ss ;
printf("Total Marks obtained : %d",total);
per = total * 100.00 / 500;
printf("\n Percentage : %f", per);
if(per >= 60)
{
printf("\n 1st Division");
}
else if(per >= 50)
{
printf("\n 2nd Division");
}
else if(per >= 40)
{
printf("\n 3rd Division");
}
else
{
printf("\n Sorry Fail");
}}
