//C program to print ASCII values of A to Z characters.
#include<stdio.h>
int main()
{int i;
printf("ASCII Value:Its character\n");
printf("=========================\n");
for(i=33; i<=126; i++)
{
printf(" %d = %c \n", i, i);
}
return 0;
}
