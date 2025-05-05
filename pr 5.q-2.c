#include<stdio.h>
 
 int main()
 {
 	int i,j,arr[3][3];
 	for(int i=0;i<3;i++)
 	{
 		for(int j=0;j<3;j++){
 			printf("a[%d][%d]:",i,j);
 			scanf("%d",&arr[i][j]);
 		}
 	}printf("\n");
 	
 	int largest=arr[0][0];
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			if (arr[i][j]>largest){
 				largest=arr[i][j];
			 }
		 }
	 }
 	  printf("the largest element in the array is :%d\n",largest);
 }
 /*
 a[0][0]:1
a[0][1]:2
a[0][2]:3
a[1][0]:4
a[1][1]:5
a[1][2]:6
a[2][0]:7
a[2][1]:8
a[2][2]:9

the largest element in the array is :9
 
 */