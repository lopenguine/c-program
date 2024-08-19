#include<stdio.h>
#include<math.h>
float simplint();
float compoint();
int main()
{
float p,n,r,si,ci;
printf("Enter principalamount; rate; & time; :");
printf("%f %f %f",&p,&n,&r);
si=simplint(p,n,r);
ci=compoint(p,n,r);
printf("Simple interest = %f\n",si);
printf("Compound interest = %f\n",ci);
return 0;
}

float simplint(float p,float n,float r)
{
float si;
si=p*n*r/100;
return si;
}
float compoint(float p,float n,float r)
{
float ci;
ci=p*(pow(1+r/100,n)-1);
return ci;
}

