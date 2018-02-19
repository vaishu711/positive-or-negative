#include <stdio.h>
struct TIME
{
	int minutes;
	int hours;
}
void DifferenceBetween TimePeriod(struct TIME t1,struct TIME t2,struct TIME*diff);
int main()
{
	struct TIME T1,T2,diff;
	printf("Enter the value of T1:\n");
	printf("Enter hours,minutes:");
	scanf("%d%d",&T1.hours,&T1.minutes);
	printf("Enter the value of T2:\n");
	printf("Enter hours,minutes:");
	scanf("%d%d",&T2.hours,&T2.minutes);
	DifferenceBetween TimePeriod(T1,T2,&diff);
	printf("\n TIME DIFFERENCE:%d:%d-",T1.hours,T1.minutes);
	printf("%d:%d",T2.hours,T2.minutes);
	printf("=%d%d\n",diff.hours,diff.minutes);
	return 0;
}
void DiffBetween TimePeriod(struct T1,struct T2,struct TIME*diff);
{
	if(T2>T1)
	{
		--T1.hours;
		T1.minutes +=60;
	}
	diff->minutes=T1.minutes-T2.minutes;
	diff->hours=T1.hours-T2.hours;
}





