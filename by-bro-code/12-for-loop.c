#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {

    for ( int i = 0; i < 10; i++){
        sleep(1000);
        printf("%d\n", i);
    }
    return 0;
}