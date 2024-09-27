#include<stdio.h>

int main() {
    int age, creditscore;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &creditscore);

    if (age >= 18 && income >= 30000 && creditscore >= 650) {
        printf("Eligible for loan.\n");
    } else {
        printf("Not eligible for loan.\n");
    }

    return 0;
}