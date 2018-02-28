#include<stdio.h>
int main()
{
char str1[15],str2[15];
int i=0,j=0;
printf("\nEnter String1 value:");
scanf("%d",str1);
printf("\nEnter String2 value:");
scanf("%d",str2);
while(str1[i]!='\0')
i++;
while(str2[j]!='\0')
{
str1[i]=str2[j];
j++;
i++;
}
str1[i]='\0';
printf("\nConcatenated String is %s",str1);
}
