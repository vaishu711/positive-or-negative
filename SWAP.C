#include<stdio.h>
int main()
{
int x,y,Temp;
printf("Enter the value of x: ");
scanf("%d", &x);
printf("Enter the value of y: ");
scanf("%d",&y);
Temp=x;
x =y;
y =Temp;
printf("\nAfter swapping,a =%.2d\n",x);
printf("\nAfter swapping,b= %.2d\n",y);
return 0;
}
