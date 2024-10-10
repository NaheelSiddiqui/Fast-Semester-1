#include <stdio.h>

int main() {
    int i=0, num[9];
    do {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        i++;
    } while (i<=8);
    printf("\n");
    for (int j=8; j>=0; j--) {
        printf("%d ", num[j]);
    }
    printf("\nEnd of code");
}