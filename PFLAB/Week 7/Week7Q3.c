#include <stdio.h>

int main() {
    int num[9];
    for (int i=0; i<=8; i++) {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    } 
    int j=1, max=num[0], min=num[0];
    do {
        if (num[j]>max) {
            max = num[j];
        }
        if (num[j]<min) {
            min = num[j];
        }
        j++;
    } while (j<=8);
    printf("Minimum value = %d", min);
    printf("\nMaximum value = %d", max);
}