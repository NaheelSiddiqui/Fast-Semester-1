#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int oddnums;
    if (num%2==0) num--;

    for (int i=num; i>0; i--) {
        for (int j=num; j>num-i-1; j--) {
            printf(" ");
        }
        for (int k=0; k<=num-i; k++) {
            if (i%2!=0) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}