#include <stdio.h>
#include <string.h>


int main() {

    int age;
    float gpa;
    char grade;
    char name[40] = "";

    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your gpa\n");
    scanf(" %f", &gpa);
    printf("Enter your grade\n");
    scanf(" %c", &grade);
    printf("Enter your name\n");
    fgets(name, sizeof(name), stdin);

    name[strlen(name) - 1] = "\0";

    getchar();

    return 0;
}