#include <stdio.h>
#include <string.h>
typedef struct {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
} Flight;
void displayFlightDetails(Flight flight) {
    printf("Flight Number: %d\n", flight.flightNumber);
    printf("Departure: %s\n", flight.departureCity);
    printf("Destination: %s\n", flight.destinationCity);
    printf("Date: %s\n", flight.date);
    printf("Available Seats: %d\n", flight.availableSeats);
}
void bookSeat(Flight *flight) {
    if (flight->availableSeats > 0) {
        flight->availableSeats--;
        printf("Seat booked successfully!\n");
    } else {
        printf("No seats available.\n");
    }
}
int main() {
    Flight flight;
    printf("Enter flight number: ");
    scanf("%d", &flight.flightNumber);
    printf("Enter departure city: ");
    scanf(" %[^\n]", flight.departureCity);
    printf("Enter destination city: ");
    scanf(" %[^\n]", flight.destinationCity);
    printf("Enter date (YYYY-MM-DD): ");
    scanf(" %[^\n]", flight.date);
    printf("Enter available seats: ");
    scanf("%d", &flight.availableSeats);
    displayFlightDetails(flight);
    char option;
    printf("Do you want to book a seat? (y/n): ");
    scanf(" %c", &option);
    if (option == 'y') {
        bookSeat(&flight);
        displayFlightDetails(flight);
    }
    return 0;
}
