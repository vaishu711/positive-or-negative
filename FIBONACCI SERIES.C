#include <stdio.h>
int main()
{
int i, N, X = 0, Y = 1, Z;
printf("Enter the number of terms: ");
scanf("%d", &N);
printf("Fibonacci Series of a given number is: ");
for (i = 1; i <= N; ++i)
{
printf("%d, ",X);
Z =X+Y;
X=Y;
Y=Z;
}
return 0;
}
