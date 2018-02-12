#include<stdio.h>
int time=0;
int minutes=0;
int hours=0;
int main()
{
time=52;
minutes=time%60;
hours=(time-minutes)/60;
printf("Total minutes %d = %d hours and %d minutes\n",time,hours,minutes);
return 0;
}
