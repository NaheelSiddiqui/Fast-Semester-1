#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>

#define GRAVITY 9.81 // Acceleration due to gravity (m/s^2)
#define PI 3.14159 // constant for PI

void calculateFromVelocityAngle(float velocity, float angle);
void calculateFromHeightTime(float height, float time);
void calculateFromRangeHeight(float range, float height);
void calculateFromTimeAngle(float time, float angle);

int main() {
    printf("Projectile Motion Calculator\n");
    printf("Select what you want to enter:\n");
    printf("1. Initial velocity and initial angle\n");
    printf("2. Maximum height and time period\n");
    printf("3. Maximum range and maximum height\n");
    printf("4. Time period and initial angle\n");
    printf("5. Exit Program\n");
    printf("Enter your choice (1-5): ");
    char choice = '\0';

    while (1) {
        if (_kbhit()) {
            choice = _getch();
        }
        switch(choice) {
            case '1': {
                float velocity, angle;
                printf("\nEnter the initial velocity (m/s): ");
                scanf("%f", &velocity);
                printf("Enter the initial angle (degrees): ");
                scanf("%f", &angle);
                calculateFromVelocityAngle(velocity, angle);
                choice = '\0';
                printf("Enter your choice (1-5): ");
                break;
            }
            case '2': {
                float height, time;
                printf("\nEnter the maximum height (m): ");
                scanf("%f", &height);
                printf("Enter the time period (seconds): ");
                scanf("%f", &time);
                calculateFromHeightTime(height, time);
                choice = '\0';
                printf("Enter your choice (1-5): ");
                break;
            }
            case '3': {
                float range, height;
                printf("\nEnter the maximum range (m): ");
                scanf("%f", &range);
                printf("Enter the maximum height (m): ");
                scanf("%f", &height);
                calculateFromRangeHeight(range, height);
                choice = '\0';
                printf("Enter your choice (1-5): ");
                break;
            }
            case '4': {
                float time, angle;
                printf("\nEnter the time period (seconds): ");
                scanf("%f", &time);
                printf("Enter the initial angle (degrees): ");
                scanf("%f", &angle);
                calculateFromTimeAngle(time, angle);
                choice = '\0';
                printf("Enter your choice (1-5): ");
                break;
            }
            case '5':
                printf("\nExiting program...");
                sleep(2);
                return 0;
                break;
            default:
                break;
        }
    }
    return 0;
}

void calculateFromVelocityAngle(float velocity, float angle) {
    float angleRad = angle * (PI / 180); // Convert angle to radians
    float range = (velocity * velocity * sin(2 * angleRad)) / GRAVITY;
    float maxHeight = (velocity * velocity * sin(angleRad) * sin(angleRad)) / (2 * GRAVITY);
    float timeOfFlight = (2 * velocity * sin(angleRad)) / GRAVITY;

    printf("\nCalculated results:\n");
    printf("Range (m): %.2f\n", range);
    printf("Maximum Height (m): %.2f\n", maxHeight);
    printf("Time of Flight (s): %.2f\n", timeOfFlight);
    return;
}

void calculateFromHeightTime(float height, float time) {
    float velocity = sqrt(2 * GRAVITY * height);
    float angle = asin(velocity * time / (2 * height)) * (180 / PI);
    float range = velocity * time * cos(angle * (PI / 180));
    
    printf("\nCalculated results:\n");
    printf("Initial velocity (m/s): %.2f\n", velocity);
    printf("Initial angle (degrees): %.2f\n", angle);
    printf("Range (m): %.2f\n", range);
    return;
}

void calculateFromRangeHeight(float range, float height) {
    float velocity = sqrt(range * GRAVITY / (sin(2 * height)));
    float angle = asin(velocity * sqrt(2 * height / GRAVITY)) * (180 / PI);
    float time = (2 * velocity * sin(angle * (PI / 180))) / GRAVITY;
    
    printf("\nCalculated results:\n");
    printf("Initial velocity (m/s): %.2f\n", velocity);
    printf("Initial angle (degrees): %.2f\n", angle);
    printf("Time of flight (s): %.2f\n", time);
    return;
}

void calculateFromTimeAngle(float time, float angle) {
    float velocity = (GRAVITY * time) / (2 * sin(angle * (PI / 180)));
    float range = velocity * time * cos(angle * (PI / 180));
    float maxHeight = (velocity * velocity * sin(angle * (PI / 180)) * sin(angle * (PI / 180))) / (2 * GRAVITY);

    printf("\nCalculated results:\n");
    printf("Initial velocity (m/s): %.2f\n", velocity);
    printf("Range (m): %.2f\n", range);
    printf("Maximum height (m): %.2f\n", maxHeight);
    return;
}