# include<stdio.h>
int main()
{
	int large=0,n,r=0;
	printf("enter n value");
	scanf("%d",&n);
	while(n>0)
	{
	  r=n%10;
	  if(r>large)
	  {
	  	large=r;
	  }
	  n=n/10;
	}
	printf("large no is %d",large);
	return 1;
}
