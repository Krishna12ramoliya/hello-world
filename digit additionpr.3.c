#include<stdio.h>
int main()
{
	int num,sum=0,remfirst,remlast;
	
	printf("enter number:");
	scanf("%d",&num);
	remlast=num%10;
	
	while(num>=10)
	{
		num=num/10;
	}
	    remfirst=num;
		sum=remfirst +remlast;
		
		
		
		
	printf("\n total num:%d",sum);
}
/* output:
enter number:1365

 total num:6
 */