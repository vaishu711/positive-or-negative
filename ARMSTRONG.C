#include<stdio.h>
int main()
{
int num,original num,remainder,result=0;
printf("Enter a three digit integer:");
scanf("%d",&num);
original num=num;
while(original num!=0)
{
remainder=original num%10;
result+=remainder*remainder*remainder;
original num/=10;
}
if(result==num)
printf("%d is an armstrong number.",num);
else
printf("%d is not an armstrong number.",num);
return 0;
}
