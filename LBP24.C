   # include<stdio.h>
   int main()
   {
   	int n,d,r,count=0;
   	printf("enter n value");
   	scanf("%d",&n);
   	printf("searching digit");
   	scanf("%d",&d);
               while(n!=0)
               {
               	r=n%10;
               	if(r==d)
               	count++;
               	n=n/10;  
	}
	printf("no. of occurence is %d",count);
	return 1;
}