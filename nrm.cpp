#include<stdio.h>
int main()
{
	char a;
	printf("enter your name\n");
	scanf("%c",&a);
	float b;
	printf("enter your roll number\n");
	scanf("%f",&b);
	int c;
	printf("enter your marks\n");
	scanf("%d",&c);
	printf("%c%f%d",&a,&b,&c);
	return 0;
}
