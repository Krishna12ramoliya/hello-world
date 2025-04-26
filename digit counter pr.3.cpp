#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	
	printf("enter number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		printf("rem:%d",rem);
		num=num/10;
		sum++;
		
		
	}printf("\n total num:%d",rem);
}
/*output:
enter number:4658
rem:8rem:5rem:6rem:4
 total num:4
 */