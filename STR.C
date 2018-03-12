#include <stdio.h>
#include <string.h>
int main()
{
char s[100];
int k;
int count =0,i;
printf("Enter the value of k \n");
scanf("%d",k);
printf("enter the string\n");
scanf("%[^\n]s", s);
for (i = 0;s[i] != 'k';i++)
{
if (s[i] == ' ')
count++;    
}
printf("number of words in given string are: %d\n", count + 1);
}
