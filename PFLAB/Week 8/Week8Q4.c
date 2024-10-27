#include <stdio.h>

int main() {
    printf("Enter start of range: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter end of range: ");
    int num2;
    scanf("%d", &num2);

    for (int i=num1; i<=num2; i++) {
        int counter = 0;
        for (int j=1; j<=i; j++) {
            if (i%j==0) counter++;
        }
        if (counter==2) printf("\n%d is a prime number", i);
    }

    return 0;
}