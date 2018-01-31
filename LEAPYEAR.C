#include<stdio.h>
void main()
{
int a;
printf("Enter a year \n");
scanf("%d",&year);
if((year%400)==0)
printf("%d is a leap year\n",year);
elseif((year%100)==0)
printf("%d is a leap year\n",year);
else
printf("%d is not a leap year\n",year);
}
