# include<stdio.h>
int main()
{
	float per,om,tm;
	printf("enter tm value");
	scanf("%f",&tm);
	printf("enter om value");
	scanf("%f",&om);
	per=(om/tm)*100;
	printf("per is %f",per);
	return 1;
	}