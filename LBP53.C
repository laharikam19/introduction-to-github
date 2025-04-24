# include<stdio.h>
int main()
{
   float speed ,time,distance;
	printf("enter speed value");
	scanf("%f",&speed);
	printf("enter time value ");
	scanf("%f",&time);
	distance=speed*time;
	printf("distance is %f",distance);
	return 1;
}
