#include<stdio.h>
int main()
{
	int i,n,count=0;
	
	  printf("enter value is n:");
	  scanf("%d ",&n);
	  
	  for(i=1;i<=n;i++)
	  {
	  	printf("%d",i);
	  	count=i;
	  	
	  }
	  printf("\ntotal digit:%d ",count);
	
	
}

/* output: 
1 2 3 4 5 6 7 8 9 10
total digit:10
*/