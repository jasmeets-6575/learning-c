#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // printf("%d", rand());

    srand(time(NULL));
    printf("%d", rand());
    
    srand(time(NULL));
    int random = (rand() % 2) + 1;
    
    return 0;
}