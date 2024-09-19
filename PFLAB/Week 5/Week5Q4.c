#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    char verify;
    printf("Do you have Pakistani Citizenship (Y/N): ");
    scanf(" %c", &verify);
     
    if (age>=18 && verify=='Y')
    printf("You are eligible to vote");
    else
    printf("Your are ineligible to vote");
    
    return 0;
}