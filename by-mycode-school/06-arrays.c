#include <stdio.h>

int main() {
    int A[5] = {1,2,3,4,5};
    
    // Address - &A[i] or (A + i)
    // value - A[i] or *(A + i)

    printf("one %d \n",A); // Address
    printf("two %d \n",&A[0]); // Address
    printf("three %d \n",A[0]); // value
    printf("four %d \n",*A); // value

    return 0;
}