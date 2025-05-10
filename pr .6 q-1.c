#include<stdio.h>
int main()
{
	char arr[100];
	int a=1,length;
	printf("enter value any string:");
	gets(arr);
	
	length =strlen(arr);
	
	for (int i=0;i<length/2;i++)
	{
		if (arr [i]!=arr[length- i - 1])
		{
			a=0;
		}
	}
	if(a)
	{
		printf(" the given string is palinndrome\n");
	}else
	{
		printf("the given string is not palindrome\n");
	}
}
/*
enter value any string:nayan
 the given string is palinndrome

--------------------------------

*/