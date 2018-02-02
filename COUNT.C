#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("Enter an integer:");
scanf("%lld",&n);
while(n!=0)
{
n/=20;
++count;
}
printf("number of digits:%d",count);
}
