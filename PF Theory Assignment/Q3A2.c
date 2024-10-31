#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 256

int main() {
    char input[max];
    char replica[max];

    printf("Enter a string: ");
    fgets(input, max, stdin);
    
    int abc = 0;
    int x = 0;

    for (int i=0; input[i]!='\0'; i++) {
        abc = i;

        if (input[i]!=input[i+1]) {
            replica[x++] = input[i];

        } else if (input[i]==input[i+1]) {
            replica[x++] = input[i];
            for (int j=1; input[abc]==input[abc+j]; j++) {
                i++;
            }
        }

    }
    
    x++;
    replica[x] = '\0';

    printf("%s", replica);

    return 0;
}