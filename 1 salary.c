#include<stdio.h>

int main()
{
	int salary,HRA,DA,TA,totalsalary;
	
	printf("enter value is:");
	scanf("%d",&salary);
	
	HRA = (salary * 10) / 100;
	DA = (salary * 5) / 100;
	TA = (salary * 8) / 100;
	
	totalsalary = salary + HRA + DA + TA;
	printf("Total Salary is: %d",totalsalary);
	
	
}