#include<stdio.h>



int cube(int *num)
{
   return(*num) * (*num) * (*num);
}
	
	
int main()
{
    int arr[2][2];
	int rows;
	int cols;
	
	
	for(int i=0;i<2;i++) 
	{
		for(int j=0;j<2;j++)
		{
		
		printf("enter element arr[%d]:",i);
		scanf("%d",& arr[i][j]);
	}
    } 
	
	
	printf("\ncubes of all elements:\n");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf("\t%d",cube (&arr[i][j]));
		}
		printf("\n");
}
   return 0;
}
/*
enter element arr[0]:3
enter element arr[0]:2
enter element arr[1]:5
enter element arr[1]:4

cubes of all elements:
        27      8
        125     64

--------------------------------
*/