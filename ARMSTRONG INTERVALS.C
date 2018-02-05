#include<stdio.h.
int main()
{
int num1,num2,i,temp,num,rem;
printf("Enter the numbers:");
scanf("%d%d",&num1,&num2);
printf("armstrong number between %d and %d are",num1,num2);
for(i=num1+1;i<num2;++i)
{
temp=i;
num=;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
if(i==num)
{
printf("%d",i);
}
return 0;
}
