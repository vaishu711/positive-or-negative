#include<stdio.h>
int main()
{
int a;
printf("Enter the integer:");
scanf("%d",&a);
if(a%4==0)
printf("%d It is an even number",a);
else
printf("%d It is an odd number",a);
return 0;
}
