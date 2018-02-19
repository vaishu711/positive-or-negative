#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i=0,l=0;
printf("Enter any string\n");
scanf("%d",&str);
for(i = 0;str[i]!='\0';i++)
{
l=l+1;
}
printf("The number of characters in the given string are %d\n",l);
return 0;
}
	
