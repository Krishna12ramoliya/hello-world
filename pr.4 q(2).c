#include<stdio.h>

int main()
{
	int i,j,count=11;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		    printf("%d",count);
		    count++;
		}printf("\n");
	}
}
/* 
11
1213
141516
17181920
+++++*/