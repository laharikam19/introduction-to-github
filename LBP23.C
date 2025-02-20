# include <stdio.h>
int main()
{
  int n,t;
  printf("enter n value");
  scanf("%d",&n);
  if (n>0)
  {
  t= n+n/6;
  printf("the total no. of cups %d",t);
  }
  else
  printf("invalid");
  return 1;
}
  
  