#include<stdio.h>


int main()
{
	int arr[5];
	int small;
	for(int i=0;i<5;i++) 
	{
		printf("enter element arr[%d]:",i);
		scanf("%d",& arr[i]);
	}
	
      
      if (arr[0]<arr[1]){
      
             printf("%d is  small arr[0]:",arr[0]);
  }else if(arr[1]<arr[2]){
  	printf("%d is  small arr[1]",arr[1]);
  	
  }else if (arr[2]<arr[3])
  {
  	printf("%d is small arr[2]",arr[2]);
  }else if (arr[3]<arr[4])
  {
  	printf("%d id small arr[3]",arr[3]);
  	
  }else if (arr[4]<arr[5]){
  	printf("%d is small arr[4]",arr[4]);
  }else if(arr[5]<arr[6])
  {
  	printf("%d is small arr[5]",arr[5]);
  }
  
}
/*
enter element arr[0]:1
enter element arr[1]:2
enter element arr[2]:3
enter element arr[3]:4
enter element arr[4]:5
1 is  small arr[0]:
*/