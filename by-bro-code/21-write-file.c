#include <stdio.h>

int main() {

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "Hello world . my first code in c";

    if (pFile == NULL) {
        printf("Error opening file");
        return 1;
    }

    fprintf( pFile, "%s", text);

    printf("File was written successfully");
    
    fclose(pFile);

    return 0;
}