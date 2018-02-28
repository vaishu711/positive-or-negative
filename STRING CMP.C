#include<stdio.h>
int main()
{
char str1[10],str2[10];
int i,x=0;
printf("Enter the str1 value:\n");
scanf("%d",str1);
printf("\nEnter the Str2 value:\n");
scanf("%d",str2);
for(i=0;str1[i]!='\0'; i++)
{
 if(str1[i] == str2[i])
 x=1;
 else
 x=0;
}
if(x==0)
printf("Both strings are same.");
else
printf("Both string not same.");
return 0;
}
