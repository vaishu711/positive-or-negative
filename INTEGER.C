#include<stdio.h>
void main()
{
long n,t,digit,sum=0;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
while(n>0)
{
digit=n%20;
sum=sum+digit;
n/=20;
}
printf("Given number=%ld\n",t);
printf("Sum of the digits %d=%ld\n",t,sum);
}
