#include <stdio.h>

void horizontalhistogram(int numbers[], int maximum, int inputs) {
    int array[inputs][maximum];
    printf("\n");
    for (int i=0; i<inputs; i++) {
        printf("Value %d: ", i+1);
        for (int j=0; j<numbers[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return;
}

void verticalhistogram(int numbers[], int maximum, int inputs) {
    char array[maximum+1][inputs];
    for (int i=0; i<maximum; i++) {
        for (int j=0; j<inputs; j++) {
            array[i][j] = ' ';
        }
    }

    for (int i=0; i<inputs; i++) {
        for (int j=maximum-2; j>=maximum-numbers[i]-1; j--) {
            array[j][i] = '*';
        }
    }

    for (int i=0; i<inputs; i++) {
        array[maximum][i] = numbers[i] + 48;
    }

    for (int i=0; i<maximum+1; i++) {
        for (int j=0; j<inputs; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    
    return;
}

int main() {
    printf("Enter number of inputs: ");
    int inputs;
    scanf("%d", &inputs);

    int numbers[inputs], maximum = 0;
    for (int i=0; i<inputs; i++) {
        printf("Enter input %d: ", i+1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > maximum) maximum = numbers[i];
    }

    printf("\nEnter H for horizontal / V for vertical histogram: ");
    char histogram;
    scanf(" %c", &histogram);

    if (histogram=='H') {
        printf("\nHorizontal Histogram: \n");
        horizontalhistogram(numbers, maximum, inputs);
    } else if (histogram=='V') {
        printf("\nVertical Histogram: \n");
        verticalhistogram(numbers, maximum, inputs);
    } else {
        printf("Invalid input");
    }

    return 0;
}