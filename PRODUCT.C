#include<stdio.h>
int main()
{
int n,k,sum;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the value of k:");
scanf("%d",&k);
sum=n+k;
printf("\nThe product of %d and %d",n,k,sum);
if(n%2!=0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
