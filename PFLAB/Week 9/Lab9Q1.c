#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void palindrome(char array[]) {
    char reverse[21];
    int length = strlen(array) - 2;
    int same = 0;
        for (int i=0; i<length; i++) {
            if (array[i]!=array[length-i]) {
                same = 1;
                break;
            }
        }
    if (same==1) printf("Not a palindrome");
    else printf("Palindrome");

    return;
}

int main() {
    char array[5][21]; //21 because maximum 20 letters
    for (int i=0; i<5; i++) {
        printf("\nEnter string %d: ", i+1);
        fgets(array[i], sizeof(array[i]), stdin);
        palindrome(array[i]);
    }
    
    return 0;
}