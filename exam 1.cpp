#include <stdio.h>

int main() 
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  switch (num > 0) {
    case 1:
      printf("The number is positive.\n");
      break;
   case 0:
        switch (num < 0) {
            case 1:
                printf("The number is negative.\n");
                break;
            case 0 :
                printf("The number is zero.\n");
                break;
                
        }
     
  }

  }
  /*
Enter a number: -89
The number is negative.

Enter a number: 56
The number is positive.

Enter a number: 000
The number is zero.

*/


