#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc() = A fucntion in C that dynamically allocates a specified number of bytes in memory

    int number = 0;

    printf(" Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));
    // int size = sizeof(grades) / sizeof(grades[0]);

    if(grades == NULL) {
        printf("Memory allocations failed");
        return 1;
    }

    for (int i = 0; i < number; i++){
        printf("Enter grade #%d", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++){
        printf("%c ", &grades[i]);
    }

    free(grades); // returning 'rented' space back to the operating sysytem
    grades = NULL; // avoids dangling pointers

    return 0;
}