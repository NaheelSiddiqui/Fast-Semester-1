#include <stdio.h>

void swapIntegers(int num) {
    if (num==1) {
        printf("%d is neither prime nor composite", num);
        return;
    } else if (num<1) {
        printf("Invalid input");
        return;
    } else {
        int count = 0;
        for (int i=1; i<=num/2; i++) {
            if (num%i==0) count++;
        }
        if (count>1) printf("%d is a composite number", num);
        else printf("%d is a prime number", num);
    }

    return;
}

int main() {
    printf("Enter number: ");
    int num;
    scanf("%d", &num);
    
    swapIntegers(num);

    return 0;
}