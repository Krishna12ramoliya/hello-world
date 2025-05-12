#include<stdio.h>

void feetintoinches()
{
	int feet,inches;
	printf(" Enter value in feet:");
	scanf("%d",&feet);
    inches=feet*12;
	printf(" inches:%d",inches);
	

}

int main()
{
  feetintoinches();
}
/*
 Enter value in feet:6
 inches:72
--------------------------------
*/