#include<stdio.h>
int main()
{
int a[20],N,i,highest,smallest;
printf("\nEnter the value of N:");
scanf("%d",&N);
printf("\nEnter %d array elements:",N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);
highest=a[0];
for(i=1;i<N;i++)
{
if(highest<a[i])
highest=a[i];
}
printf("Highest Number is:%d",highest);
smallest=a[0];
for(i=1;i<N;i++)
{
if(smallest>a[i])
smallest=a[i];
}
printf("Smallest Number is:%d",smallest);
return 0;
}
