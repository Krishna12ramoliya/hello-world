#include<stdio.h>
 
 int main()
 {
 	int arr[5],i;
 	
 	
 	for(int i=0;i<5;i++) 
 	{
 		printf("enter element arr[%d]:",i);
 		scanf("%d",& arr[i]);
 	
 	}
 	    for (i<0;i<5;i++)
		 {
 	   	if (arr[i]<0)
 		{
 			printf("the nagative element array:%d",arr[i]);
		 }printf("\n");
      
	}
		 
 	  
 }
 /*
 enter element arr[0]:2
enter element arr[1]:-4
enter element arr[2]:1
enter element arr[3]:-3
enter element arr[4]:-5

the nagative element array:-4
the nagative element array:-3
the nagative element array:-5

 
 
 
 */