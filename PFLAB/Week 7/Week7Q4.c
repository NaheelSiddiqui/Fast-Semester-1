#include <stdio.h>

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int numbers[size];
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int max=0;
    for (int j=0; j<size; j++) {
        if (numbers[j]>max) {
            max = numbers[j];
        }
    }

    int frequency[max];
    for (int i=0; i < max; i++) {
        frequency[i]=0;
    }

    for (int i = 0; i < size; i++) {
        frequency[numbers[i]] += 1;
    }

    for (int i=0; i < max; i++) {
        if (frequency[i]>1) {
            printf("\n%d was repeated %d times", i, frequency[i]);
        }
    }
    
    return 0;
}