#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 10;
    int year = 2025;

    printf("your age is %d \n", age);
    printf("the current year is %d \n", year);
    
    float gpa = 3.5;
    float balance = 9.99;
    printf("the current gpa is %f \n", gpa);
    printf("the current balance is $%f \n", balance);

    double pi = 3.14159265359;
    // lf = long float
    // default value to display 6 digits
    printf("The value if pi is %15lf \n", pi);

    char grade = 'A';
    printf("Your grade is %c \n", grade);

    char name[] = "John Doe";
    printf("hey %s\n", name);

    bool isOnline = false;
    
    if(isOnline) {
        printf("the user is online ");
    } else {
        printf("the user is offline ");
    }

    return 0;
}