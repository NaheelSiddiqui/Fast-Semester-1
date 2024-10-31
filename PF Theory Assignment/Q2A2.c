#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 256

int main() {
    char input[max];
    printf("Enter a slogan: ");
    fgets (input, max, stdin);
    int length = strlen(input);
    int numbers[126];
    for (int i=0; i<126; i++) {
        numbers[i] = 0;
    }
    
    for (int i=31; i<126; i++) {
        for (int j=0; j<length; j++) {
            if (input[j]==(i+1)) numbers[i]++;
        }    
    }
    
    printf("\n");
    for (int i=0; i<length-1; i++) {
        int abc = 0;
        for (int j=31; j<126; j++) {
            if (input[i]==j+1) abc = numbers[j];
        }
        printf("'%c': %d, ", input[i], abc);
    }
    
    return 0;
}