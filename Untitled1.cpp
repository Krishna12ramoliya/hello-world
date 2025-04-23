#include <stdio.h>
 
 int main()
 {
 	int score,choice;
 	printf("score of student:");
 	scanf("%d",&score);
 	
 	score>90?printf("grade A"):
 	75<score && score<90 ?printf("grade B"):
 
      60<score && score<75?printf("grade C"):
      
      45<score && score<60?printf("grade D"):
      
      35<score && score<45 ?printf("grade E"): printf("grade F\n");
      
      

	
	printf(" press 1. exellent job!!\n");
	printf(" press 2. well done!!\n");
	printf(" press 3. good job!!\n");
	printf(" press 4. you passed,but you could do better!!\n");
	printf(" press 5. passed!!\n");
	printf(" press 6. sorry,you failed\n");
	printf("enter your comment:");
	scanf("%d",&choice);
    
 	
	 
	  
      switch (choice)
      
 {
 	case 1:
 		printf("grade A.exellent job!!" );
 	break;
 	
 	case 2: 
 	    printf("grade B.well done!!");
 	break;
 	
 	 case 3:
 	    printf("grade C.good job!!");
 	break;
 	
 	case 4:
 	    printf("grade D.you passed,but you could do better!!");
 	break;
 	
 	case 5:
 	    printf("grade E.passed!!");
 	break;
 	
 	case 6:
 	    printf("grade F.sorry, you failed!!");
 	break;
	 
	 			
				 
				 
 }
 
 
 
 }
     