#include<stdio.h>

int main()
{
	int salary,HRA,DA,TA,total;
	
	printf("enter value is salary:");
	scanf("%d",&salary);
	
	printf("enter value is HRA:");
	scanf("%d",&HRA);
	
	printf("enter value is DA:");
	scanf("%d",&DA);
	
	printf("enter value is TA:");
	scanf("%d",&TA);
	
	total= salary+HRA+DA+TA;
	printf("%d",total);
	
}
