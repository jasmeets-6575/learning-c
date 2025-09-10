#include <stdio.h>
#include <stdbool.h>

int main() {

    int x = 2;
    int y = 3;
    int z = 4;

    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    z = x % y;

    printf("%d", z);

    return 0;
}