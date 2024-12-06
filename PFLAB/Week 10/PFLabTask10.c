#include <stdio.h>
#include <string.h>
typedef struct {
    char packageName[50];
    char destination[50];
    int duration;
    float cost;
    int seatsAvailable;
} Package;
void bookPackage(Package *pkg) {
    if (pkg->seatsAvailable > 0) {
        pkg->seatsAvailable--;
        printf("Booking successful! Seats left: %d\n", pkg->seatsAvailable);
    } else {
        printf("No seats available for this package.\n");
    }
}
void displayPackages(Package packages[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Package: %s, Destination: %s, Duration: %d days, Cost: %.2f, Seats: %d\n",
               packages[i].packageName, packages[i].destination, packages[i].duration,
               packages[i].cost, packages[i].seatsAvailable);
    }
}
int main() {
    Package packages[100];
    int count = 0, option;
    while (1) {
        printf("\n1. Add Package\n2. Book Package\n3. Display Packages\n4. Exit\nEnter choice: ");
        scanf("%d", &option);
        switch (option) {
        case 1:
            printf("Enter package name: ");
            scanf(" %[^\n]", packages[count].packageName);
            printf("Enter destination: ");
            scanf(" %[^\n]", packages[count].destination);
            printf("Enter duration (in days): ");
            scanf("%d", &packages[count].duration);
            printf("Enter cost: ");
            scanf("%f", &packages[count].cost);
            printf("Enter seats available: ");
            scanf("%d", &packages[count].seatsAvailable);
            count++;
            break;
        case 2:
            printf("Enter package number to book (1 to %d): ", count);
            int packageNumber;
            scanf("%d", &packageNumber);
            if (packageNumber > 0 && packageNumber <= count) {
                bookPackage(&packages[packageNumber - 1]);
            } else {
                printf("Invalid package number.\n");
            }
            break;
        case 3:
            displayPackages(packages, count);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}
