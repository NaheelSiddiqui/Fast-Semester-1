#include <stdio.h>

int main() {
    int i=0, sum=0, num[9];
    do {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        sum+=num[i];
        i++;
    } while (i<=8);
    printf("Sum = %d", sum);
}