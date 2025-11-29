#include <stdio.h>
int main()
{
	int t,h,e,m,s,total;
	float avg;
	printf("enter t,h,e,m,s values");
	scanf("%d%d%d%d%d",&t,&h,&e,&m,&s);
	total=t+h+e+m+s;
	avg=total/5*100;
	printf("total is %d",total);
	printf("avg is %f",avg);
	return 0;
}
