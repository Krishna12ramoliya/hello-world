

#include<stdio.h>

int main()
{
	int i,j;
	for(i=10;i>=6;i--)
	{
		for(j=6;j<=i;j++)
		{
		    printf("%d ",i*i);
		}printf("\n");
	}
}
/*
100 100 100 100 100
81 81 81 81
64 64 64
49 49
36

*/
