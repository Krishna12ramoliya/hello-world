#include<stdio.h>


void tempintocelcius()
{

    int celcuis,F;
	
	printf("enter value in celcuis:");
	scanf("%d",&celcuis);
	
	F=(1.8*celcuis)+32;
	printf("%d",F);
	
}
int main()
{
	tempintocelcius();

}
/*
enter value in celcuis:10
50
--------------------------------
*/