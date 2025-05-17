#include<stdio.h>

int main()
{
	char arr[100]={"hello world"};
	char *ptr=arr;
	
	int length=0;
	while (*ptr!='\0')
	{
		length++;
		ptr++;
	}
	printf("lenth of array '%s': %d\n",arr,length);
	return 0;
}
/*
lenth of array 'hello world': 11

--------------------------------
*/