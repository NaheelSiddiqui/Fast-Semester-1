#include <stdio.h>
#include <string.h>
typedef struct {
    char make[30];
    char model[30];
    int year;
    float price;
    float mileage;
} Car;
void addCar(Car cars[], int *count) {
    printf("Enter make: ");
    scanf(" %[^\n]", cars[*count].make);
    printf("Enter model: ");
    scanf(" %[^\n]", cars[*count].model);
    printf("Enter year: ");
    scanf("%d", &cars[*count].year);
    printf("Enter price: ");
    scanf("%f", &cars[*count].price);
    printf("Enter mileage: ");
    scanf("%f", &cars[*count].mileage);
    (*count)++;
}
void searchCarByMakeOrModel(Car cars[], int count, char query[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(cars[i].make, query) == 0 || strcmp(cars[i].model, query) == 0) {
            printf("Make: %s, Model: %s, Year: %d, Price: %.2f, Mileage: %.2f\n",
                   cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
            found = 1;
        }
    }
    if (!found)
        printf("No cars found matching '%s'.\n", query);
}
void displayAllCars(Car cars[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Make: %s, Model: %s, Year: %d, Price: %.2f, Mileage: %.2f\n",
               cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
    }
}
int main() {
    Car cars[100];
    int count = 0, option;
    char query[30];
    while (1) {
        printf("\n1. Add Car\n2. Search by Make or Model\n3. Display All Cars\n4. Exit\nEnter choice: ");
        scanf("%d", &option);
        switch (option) {
        case 1:
            addCar(cars, &count);
            break;
        case 2:
            printf("Enter make or model to search: ");
            scanf(" %[^\n]", query);
            searchCarByMakeOrModel(cars, count, query);
            break;
        case 3:
            displayAllCars(cars, count);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}
