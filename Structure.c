#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cars
{
    char carName[20];
    int Year;
    char Model[20];
    double Rating;
};

void printCarDetails(struct Cars car) {
    printf("Name: %s\n", car.carName);
    printf("Model: %s\n", car.Model);
    printf("Year: %d\n", car.Year);
    printf("Rating: %.lf\n\n", car.Rating);
}

int main()
{
    struct Cars cars[] = {
        {"Mercedes", 2024, "S Class", 4.8},
        {"BMW", 2024, "M Class", 4.0},
        {"Lamborghini", 2022, "Urus", 4.3},
        {"Porsche", 2020, "911 GTR", 4.5},
        {"Tesla", 2021, "Model S", 3.0}
    };

    int numCars = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < numCars; i++) {
        printCarDetails(cars[i]);
    }

    return 0;
}


/*
#include <stdio.h>
#include <string.h>

// Define the structure
struct Car {
    char carName[20];
    int Year;
    char Model[20];
    double Rating;
};

// Function to print car details
void printCarDetails(struct Car car) {
    printf("Name: %s\n", car.carName);
    printf("Model: %s\n", car.Model);
    printf("Year: %d\n", car.Year);
    printf("Rating: %.1f\n\n", car.Rating);
}

int main() {
    // Initialize structure instances
    struct Car car1;
    strcpy(car1.carName, "Mercedes");
    strcpy(car1.Model, "S Class");
    car1.Year = 2024;
    car1.Rating = 4.8;

    struct Car car2;
    strcpy(car2.carName, "BMW");
    strcpy(car2.Model, "M Class");
    car2.Year = 2024;
    car2.Rating = 4.0;

    // Print details using a function
    printCarDetails(car1);
    printCarDetails(car2);

    return 0;
}
*/