#include<stdio.h>
int isNumericString(unsigned char*n)
{
int i=0;
while(*(n+i))
{
if(*(n+i)>'0'&&*(n+i)<='9')
i++;
else
return 0;
}
return 1;
}
int main()
{
int ret=0;
unsigned char str[]="123";
ret=isNumericString(str);
if(ret)
printf("YES");
else
printf("No");
return 0;
}

