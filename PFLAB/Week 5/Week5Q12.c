#include <stdio.h>

int main() {
    float attendance, assignmentScore, examScore, finalGrade;

    printf("Enter attendance percentage (0-100): ");
    scanf("%f", &attendance);
    
    printf("Enter assignment score (0-100): ");
    scanf("%f", &assignmentScore);
    
    printf("Enter exam score (0-100): ");
    scanf("%f", &examScore);

    if (attendance >= 75) {
        if (assignmentScore >= 50) {
            if (examScore >= 40) {
                finalGrade = (attendance * 0.2) + (assignmentScore * 0.3) + (examScore * 0.5);
                printf("Final Grade: %.2f\n", finalGrade);
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