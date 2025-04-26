#include <stdio.h>
int main()
{
	char i;
	
	
    i='a';
	
	do{
		printf(" %c",i);
		i+=4;

	}while(i<='z');

}
/* output:
a e i m q u y
*/