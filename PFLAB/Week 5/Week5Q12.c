#include<stdio.h>

int main() {
    float attendance, assignment, exam, grade;

    printf("Enter attendance percentage (0-100): ");
    scanf("%f", &attendance);
    
    printf("Enter assignment score (0-100): ");
    scanf("%f", &assignment);
    
    printf("Enter exam score (0-100): ");
    scanf("%f", &exam);

    if (attendance >= 75) {
        if (assignment >= 50) {
            if (exam >= 40) {
                grade = (attendance * 0.2) + (assignment * 0.3) + (exam * 0.5);
                printf("Final Grade: %.2f\n", grade);
            } else {
                printf("Failed due to exam score.\n");
            }
        } else {
            printf("Failed due to assignment score.\n");
        }
    } else {
        printf("Failed due to attendance.\n");
    }

    return 0;
}