// C program to demonstrate Lower to Upper
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>
int main(){
int j = 0;
char str[] = "have a good day\n";
char ch;
while (str[j]) {
ch = str[j];
putchar(toupper(ch));
j++;
}
return 0;
}
