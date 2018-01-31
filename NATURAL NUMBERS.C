#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter an integer\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum of first %d natural numbers=%d\n",n,sum);
}
