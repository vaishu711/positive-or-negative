#include<stdio.h>
int main()
{
int n,t,d,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
t=n;
while(n>0)
{
d=n%10;
sum=sum+d;
n%=10;
}
printf("Given number= %1d \n",t);
printf("Sum of the digits %d =% 1d \n",t,sum);
return 0;
}

