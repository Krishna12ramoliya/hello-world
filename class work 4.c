#include<stdio.h>
int main()
{
	int i,n,count=0,digit;
	
	  printf("enter value is n:");
	  scanf("%d ",&n);
	  
	  for(i=1;i<=n;i++)
	  {
	  	printf("%d",i);
	  	count=i;
	  	count+=digit;
	  	
	  }
	  printf("\ntotal digit:%d ",count);
	
	
}