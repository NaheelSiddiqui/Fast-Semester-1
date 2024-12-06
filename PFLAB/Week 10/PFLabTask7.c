#include <stdio.h>
#define MAX_TEMP 35.0
void checkTemperature(float temp) {
    static int exceedCount = 0;
    if (temp > MAX_TEMP) {
        exceedCount++;
        printf("Temperature %.2f exceeds the limit! Count: %d\n", temp, exceedCount);
    } else {
        printf("Temperature %.2f is within the limit.\n", temp);
    }
}
int main() {
    int n;
    printf("Enter the number of temperature readings: ");
    scanf("%d", &n);
    float temperatures[n];
    printf("Enter %d temperature readings: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &temperatures[i]);
    }
    for (int i = 0; i < n; i++) {
        checkTemperature(temperatures[i]);
    }
    return 0;
}
