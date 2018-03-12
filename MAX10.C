#include<stdio.h>
int main()
{
int n[10],max,i=0,j=1;
printf("\nEnter 10 numbers below:");
for(i=0;i<10;i++,j++)
{
printf("\nEnter a number %d:",j);
scanf("%d",&n[i]);
}
max=n[0];
i=0,j=1;
for(;i<9;i++)
{
if(max<n[i+1])
{
max=n[i+1];
}
}
printf("\n The maximum among 10 number is:",max);
return 0;
}
