#include <stdio.h>

int main() {
    int num, counter = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int abc=num;

    if (num == 0) counter = 1;
    else if (num < 0) num = -num;

    for (; num>0; counter++) {
        num /= 10;
    }

    printf("\n%d has %d digits", abc, counter);
    return 0;
}