#include<stdio.h>
int main()
{
int n1;
printf("\nEnter The Number");
scanf("%d",n1);
n1=123;
if(n1%2==0)
{
n1=n1+2;
printf("\nThe nearest number is:");
}
else
{ 
n1=n1+3;
printf("\nThe number is:");
}
return 0;
}
