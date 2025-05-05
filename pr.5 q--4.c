#include<stdio.h>
int main()
{
	int arr[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<3; i++)   
    {
        int rowsum=0;
        for(int j=0; j<3; j++)
        {
            rowsum = rowsum + arr[i][j] ;
        }
        printf( " \n Sum of  row %d is %d \n ", i, rowsum);
    }
    
    for( int i=0; i<3; i++ )
    {
        int colsum=0;
        for( int j=0; j<3; j++ )
        {
            colsum = colsum+arr[j][i] ;
        }
        printf( " \n  sum of column %d is %d\n ", i, colsum );
    }
    
}
/*
arr[0][0]=2
arr[0][1]=7
arr[0][2]=1
arr[1][0]=3
arr[1][1]=5
arr[1][2]=4
arr[2][0]=8
arr[2][1]=9
arr[2][2]=6

 Sum of  row 0 is 10

 Sum of  row 1 is 12

 Sum of  row 2 is 23

  sum of column 0 is 13

  sum of column 1 is 21

  sum of column 2 is 11

*/