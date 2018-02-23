#include <stdio.h>
int main()
{
int x,y,Temp;
printf("Enter the value of x: ");
scanf("%lf", &x);
printf("Enter the value of y: ");
scanf("%lf",&y);
Temp=x;
x =y;
y =Temp;
printf("\nAfter swapping, a = %.2lf\n",x);
printf("After swapping, secondNumber = %.2lf",y);
return 0;
}
