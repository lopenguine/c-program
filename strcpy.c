#include<stdio.h>
void main()
{ int i,j,l,ls;
char a[80],b[80];
clrscr();
printf("\nEnter main string:-\n");
gets(b);
ls=strlen(b);
for(i=0,j=0;j<=ls-1;i++,j++)
a[i]=b[j];
printf("\n\ncopied string is %s ",a);
}
