#include <stdio.h>
int main()
{
int N,T,Digit,sum = 0;
printf("Enter the number \n");
scanf("%d", &N);
T=N;
while(N> 0)
{
Digit =N%10;
sum=sum+Digit;
N/= 10;
}
printf("Given number = %d\n",T);
printf("Sum of the digits %d = %d\n",T,sum);
}
