#include <stdio.h>
int main()
{
int a, b, temp;
printf("\nEnter the value of a and b");
scanf("%d%d",&a,&b);
printf("\nBefore Swapping a=%d\n b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After Swapping\na = %d\nb = %d\n",a,b);
return 0;
}
