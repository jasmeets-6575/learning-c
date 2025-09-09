#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

int main() {
    Car cars[] = {
        {"Mustang", 2025, 32000},
        {"Corvette", 2026, 68000},
        {"Challenger", 2024, 29000}
    };

    int size = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < size; i++) {
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%d\n", cars[i].price);
    }

    return 0;
}
