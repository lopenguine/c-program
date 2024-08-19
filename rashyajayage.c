#include <stdio.h>
void main()
{
int ram,sham,ajay;
printf("Enter the Three Ages of Ram,Sham and Ajay\n");
scanf("%d%d%d",&ram,&sham,&ajay);
if(ram < sham && ram <ajay){
printf("Ram is Youngest");
}
else if (sham<ram && sham<ajay){
printf("Sham is Youngest");}
 else if (ajay<sham && ajay<ram){
printf("Ajay is Youngest");}
else {
printf("ATLEAST TWO OF THEM are of the same Age");}
}
