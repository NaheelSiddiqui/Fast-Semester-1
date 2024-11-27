#include <stdio.h>
#include <string.h>

// Structure to hold flight information
typedef struct {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
} Flight;

// Function to display flight details
void displayFlightDetails(Flight flight) {
    printf("\nFlight Number: %d\n", flight.flightNumber);
    printf("Departure City: %s\n", flight.departureCity);
    printf("Destination City: %s\n", flight.destinationCity);
    printf("Date: %s\n", flight.date);
    printf("Available Seats: %d\n", flight.availableSeats);
}

// Function to book a seat
void bookSeat(Flight *flight) {
    if (flight->availableSeats > 0) {
        flight->availableSeats--;
        printf("\nSeat successfully booked! Remaining seats: %d\n", flight->availableSeats);
    } else {
        printf("\nNo seats available on this flight.\n");
    }
}

int main() {
    // Create a sample flight
    Flight flight = {12345, "Karachi", "Islamabad", "2024-11-20", 100};

    int choice;

    do {
        printf("\n--- Flight Management System ---");
        printf("\n1. Display Flight Details");
        printf("\n2. Book a Seat");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayFlightDetails(flight);
                break;
            case 2:
                bookSeat(&flight);
                break;
            case 3:
                printf("\nExiting the program. Have a nice day!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

