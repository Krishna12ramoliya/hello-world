#include<stdio.h>

int main()
{
	int a=34,b=6,choice;
	
	printf(" press 1. english\n");
	printf("press 2.hindi\n");
	printf("press 3. gujarati\n");
	printf("press 4. chines\n");
	printf("enter your choise:\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case1:
			printf("english");
			break;
		case 2:
		    printf("hindi");
		    break;
		case 3:
		    printf("gujarati");
		    break;
		case 4:
		    printf("chines");
		    break;
			default :
			   printf("wrong choice!!!");
			   break;			
	}
}