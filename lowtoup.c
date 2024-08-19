#include<ctype.h>
#include<stdio.h>
int main()
{
char ch;
printf("Enter any lower case Character:");
scanf("%c",&ch);
printf("%c in UPPER CASE is represented as %c", ch, toupper(ch));
return 0;
}
