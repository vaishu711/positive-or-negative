#include <stdio.h>
int main()
{
char str[50];
char*s =&str;
int numeric value;
numeric value=0;
printf("Enter any string : ");
scanf("%s",str);
while(*s)
{
if(*s>='0' && *s<='9')
numeric value ++;
}
printf("numeic value = %d\n", digits);
return 0;
}
