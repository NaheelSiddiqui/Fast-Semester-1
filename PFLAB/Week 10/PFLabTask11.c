#include <stdio.h>
#define METER_TO_KILOMETER 0.001
float convertToKilometers(float meters) {
    static int callCount = 0;
    callCount++;
    printf("Function called %d times.\n", callCount);
    return meters * METER_TO_KILOMETER;
}
int main() {
    int n;
    printf("Enter the number of distances: ");
    scanf("%d", &n);
    float meters;
    for (int i = 0; i < n; i++) {
        printf("Enter distance in meters: ");
        scanf("%f", &meters);
        printf("Distance in kilometers: %.3f km\n", convertToKilometers(meters));
    }
    return 0;
}
