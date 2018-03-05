#include <stdio.h>
int main()
{
int a,b,c,sum;
float average;
printf("Enter the value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
average=(a+b+c)/3;
printf("\nThe sum of %d and %d and %d is=%d",a,b,c,sum);
printf("\n average of %d and %d and %d is=%f",a,b,c,average);
return 0;
}

