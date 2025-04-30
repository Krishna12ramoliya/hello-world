#include<stdio.h>

int main()
{
	int i,j,k,m;
	    for(i=5;i>=0;i--)
	    {
	for(j=1;j<=5-i;j++)
	    	{
		printf("%d ",j);
		}
		for(k=1;k<=2*i;k++)
	    {
	    	printf("  ");
	    }
	
	 for (m=5-i;m>=1;m--)
	{
		printf("%d ",m);
		}
		printf("\n");
    }
}
/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1




*/