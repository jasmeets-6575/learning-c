#include <stdio.h>
#include <stdbool.h>  
#include <string.h>  

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

int main() {
    Student student1 = {"Spongebob", 30, 2.5, true};
    strcpy(student1.name, " sandy");

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Full Time: %s\n", student1.isFullTime ? "Yes" : "No");

    return 0;
}
