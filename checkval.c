//Check whether the input value is an alphabet, digit or special character
#include <stdio.h>
int main()
{
char chr;
printf("Enter a character: ");
scanf("%c", &chr);
// logic to check whether it is an alphabet
if((chr >= 'a' && chr<='z') || (chr>='A' && chr<='Z')){
printf("It is an alphabet.\n");
}
else if(chr>='0' && chr<='9'){
printf("It is a digit.\n");}
else {
printf("It is a special character.\n");
}
return 0;
}

