#include <stdio.h>

int main() 
{
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_numbers.txt", "w");
    oddFile = fopen("odd_numbers.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i);
        } else {
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers written to files successfully.\n");

}

/*


even
50
52
54
56
58
60
62
64
66
68
70
odd
51
53
55
57
59
61
63
65
67
69
*/