#include<stdio.h>
int main()
{
int a=2,b=1,c=3;
if(b>a&&a>c||c>a&&a>b)
{
printf("a is a median value");
}
if(a>b&&b>c||c>b&&b>a)
{
printf("b is a median value");
}
if(a>c&&c>b||b>c&&c>a)
{
printf("c is a median value");
}
return 0;
}
