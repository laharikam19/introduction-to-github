# include<stdio.h>
int main()
{
	int a,b,h,A;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter b and h values");
	scanf("%d%d",&b,&h);
	A=((a+b)/2)*h;
	printf("area of trapezoid = %d",A);
               return 1;
}