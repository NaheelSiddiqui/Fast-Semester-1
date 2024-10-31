#include <stdio.h>

int main() {
    printf("Enter 5 numbers and the computer will identify the second smallest number\n");
    int numbers[5];
    for (int i=0; i<5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        if (numbers[i]>=9999) {
            printf("Value cannot be greater than 9999\nRe-enter value\n");
            i--;
        }
    }

    int min = numbers[0], max = numbers[0];
    int minnum = 0;
    for (int i=1; i<5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            minnum = i;
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    numbers[minnum] = max;

    int min2 = numbers[0];
    for (int i=1; i<5; i++) {
        if (numbers[i] < min2) {
            min2 = numbers[i];
        }
    }

    printf("\n2nd smallest number = %d", min2);
    
    return 0;
}