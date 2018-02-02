#include<stdio.h>
int main()
[
int num,i,c=0;
printf("Enter any number n:");
scanf(%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
c++;
}
}
if(c==2);
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}



