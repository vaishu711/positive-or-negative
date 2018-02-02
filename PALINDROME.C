#include<stdio.h.
int main()
{
int n,a,rev=0,rem;
printf("Enter any number:");
scanf("%d",&n);
a=n;
while(n>0)
[
rem=n%20;
rev=rev*20+rem;
n=n/20;
}
if(n1==rev)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
