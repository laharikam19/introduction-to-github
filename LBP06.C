# include<stdio.h>
# include<math.h>
int main()
{
	int a,b,c;
	printf("enter two nos:");
	scanf("%d%d",&a,&b);
	c=sqrt(a*a+b*b);
	printf("length of the hypothenus =%2d\n",c);
	return 1;
}