#include <stdio.h>


int main() {

    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} ;

    printf("%d ", numbers[0][0]);
    printf("%d ", numbers[0][1]);
    printf("%d\n", numbers[0][2]);

    return 0;
}