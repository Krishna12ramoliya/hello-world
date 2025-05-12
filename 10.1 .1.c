#include<stdio.h>

void cube()
{
	int num,cube;
	printf(" Enter any number:");
	scanf("%d",&num);
	cube=num*num*num;
	printf(" cube :%d",cube);
	
}

int main()
{
	cube();
}
/*
Enter any number:5
 cube :125
--------------------------------
*/