#include <stdio.h>



int add(int num1, int num2);
int subtract(int num1, int num2);
int  multiply(int num1, int num2);
int divide(int num1, int num2);
int modulo(int num1, int num2);

int main() {
    char choice;
   int num1, num2;

   
    while (1) {
        printf("\nMenu:\n");
        printf("1. Add +\n");
        printf("2. Subtract -\n");
        printf("3. Multiply *\n");
        printf("4. Divide /\n");
        printf("5. Modulo %\n");
        printf("9. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) 
		{
            case '1':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result: %d\n", add(num1, num2));
                break;
            case '2':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result: %d\n", subtract(num1, num2));
                break;
            case '3':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result: %d\n", multiply(num1, num2));
                break;
            case '4':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    printf("Result: %d\n", divide(num1, num2));
                }
                break;
            case '5':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    
                printf("Result: %d\n", modulo(num1, num2));
            }
                break;
            case '6':
                printf("Exiting...\n");
                return 0; 
            default:
                printf("Invalid choice, Please try again.\n");
        }
    }

    return 0;
}


 int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {

int modulo(int num1, int num2) {
    return (int)((int)num1 % (int)num2);

}
}