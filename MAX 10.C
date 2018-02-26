#include<stdio.h>
int main()
{
int a[10];
int i;
int maxnumber;
printf("Enter ten values:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
maxnumber=a[0];
for(i=0;i<10;i++)
{
if(a[i]>maxnumber)
{
maxnumber=a[i];
}
}
printf("The maximum among ten number is %d",maxnumber);
return 0;
}

