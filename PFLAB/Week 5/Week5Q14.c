#include<stdio.h>

int main() {
    int age;
    float income, CS; //CS = creditscore

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%f", &CS);

    (age>=18 && income>=50000 && CS>=400)? printf("Elligible for loan"): printf("Not elligible for loan");

    return 0;
}