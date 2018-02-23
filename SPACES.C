#include<stdio.h>
int main()
{
char str[70];
int i,count=0;
printf("\nEnter any string : ");
scanf("%s",&str);
for(i=0;str[i];i++)
if(str[i] == ' ')
count++;
printf("\nTotal blank spaces : %d",count);
return 0;
}
