#include<stdio.h>
int main()
{
int x=150;
int y=160;
printf("THE VALUE OF X=%d Y=%d before swapping",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("THE VALUE OF X=%d Y=%d after swapping",x,y);
return 0;
}
