#include <stdio.h>
int main()
{
inta,b,c
printf("Enter first number: ");
scanf("%lf", &a);
printf("Enter second number: ");
scanf("%lf",&b);
c =a;
a=b;
b=c;
printf("\nAfter swapping,a = %.2lf\n",a);
printf("After swapping,b = %.2lf\n", b);
return 0;
}
