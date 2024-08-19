#include<stdio.h>
int x;
void autostorageclass()
{
printf("Demonstrating auto class\n\n");
auto int a=32;
printf("Value of the variable 'a' declared as auto: %d\n=================================================\n",a);
}
void registerstorageclass()
{
printf("\nDemonstrating register class\n\n");
register char b='G';
printf("Value of variable 'b' declared as register: %d\n=================================================\n",b);
}
void externstorageclass()
{
printf("Demonstrating extern class\n\n");
extern int x;
printf("Value of the variable 'x' declared as extern: %d\n=================================================\n",x);

}
void staticstorageclass()
{
printf("Demonstrating static class\n\n");
static int i=0;
printf("Declaring 'y' as static inside the loop.\nBut this declaration will occur only once as 'y' is static.\nIf not,then every time the value of 'y' will be the declared value 5 as in the case of variable 'p'\n");
printf("Loop started.\n");
for(i=1;i<5;i++)
{
static int y=5;
int p=10;
y++;
p++;
printf("\nThe value of 'y',declared as static in %d iteration is %d\n",i,y);
printf("The value of non-static variable'p',in %d iteration is %d\n",i,p);  
}
printf("Loop ended");
}
int main()
{
autostorageclass();
registerstorageclass();
externstorageclass();
staticstorageclass();
return 0;
}

