#include <stdio.h>

int main()
{
	int score,choice,gradeA,gradeB,gradeC,gradeD,gradeE,gradeF;
	printf("score of student:");
	scanf("%d",&score);
	
	score>90?printf("grade A"):
	75<score && score<90 ?printf("grade B"):

     60<score && score<75?printf("grade C"):
     
     45<score && score<60?printf("grade D"):
     
     35<score && score<45 ?printf("grade E"): printf("grade F");
     
     
     printf("grade A");
	 printf("grade B");
	 printf("grade C");
	 printf("grade D");
	 printf("grade E");
	 printf("grade F");
	 scanf("%d",&choice);
	 
     switch (choice)
     
{
	case 1:
		printf("exellent job!!",gradeA );
	break;
	
	case 2: 
	    printf("well done!!",gradeB);
	break;
	
	case 2:
	    printf("good job!!",gradeC);
	break;
	
	case 3:
	    printf("you passed,but you could do better!!",gradeD);
	break;
	
	case 4:
	    printf("passed!!",gradeE);
	break;
	
	case 5:
	    printf("sorry, you failed");
	break;			
}
     
    
	 
	
	}