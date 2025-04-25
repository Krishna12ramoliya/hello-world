#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter value is n:");
	scanf("%d",&n);
	
	i=0;
	while(i<=n)
	{
		printf("%d ",i);
		i+=2;
		sum=sum+i;
		
		
	}
	printf("the  total:%d",sum);
}
/*output:
enter value is n:15
0 2 4 6 8 10 12 14 the  total:72
*/