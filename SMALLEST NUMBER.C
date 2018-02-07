#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("Enter the values of n1,n2,n3\n");
scanf("5d%d%d,&n1,&n2,&n3);
printf("n1=%d\tn2=%d\tn3=%d\n",n1,n2,n3);
if(n1<n2)
{
if(n1<n3)
{
printf("n1 is the smallest among three number\n");
}
else
{
printf("n3 is the smallest among three number\n");
}
elseif(n2<n3)
printf("n2 is the smallest among three number\n");
else
printf("n3 is the smallest among three number\n");
}
