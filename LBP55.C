# include<stdio.h>
int main()
{
	int n,sum,r;
	printf("enter n value");
	scanf("%d",&n);
	sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum=%d",sum);
	return 1;
}
