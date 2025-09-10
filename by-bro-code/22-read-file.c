#include <stdio.h>

int main() {

    FILE *pFile = fopen("Desktop//output.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL) {
        printf("Error opening file");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}