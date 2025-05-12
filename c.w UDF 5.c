#include<stdio.h>


void marks()
{
		int maths,eng,acc,total;
    	float per;
	
	printf("enter value maths:");
	scanf("%d",&maths);
	
	printf("enter value eng:");
	scanf("%d",&eng);
	
	printf("enter value acc:");
	scanf("%d",&acc);
	
	
	total=maths+eng+acc;
	printf("%d",total);
	
	per=(total/3);
	printf("%f",per);
	
}

int main()

{
	marks();

}