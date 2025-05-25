#include <stdio.h>


int main() {
char data [100];
    FILE *p;
    p=fopen("exam.6.txt","a");
	if(p==NULL){
		printf("file cant open!!!");
		
	}else{
		printf("file open___");
	}  

	fgets (data ,"%d",p);{
	printf("%d",data);
	}

    fclose(p);
       
}