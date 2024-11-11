#include <stdio.h>
#include <string.h>

void reverseString(char str[], char reversed[]) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }

    reversed[length] = '\0';
}

int main() {
    char str[100], reversed[100];

    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseString(str, reversed);

    printf("%s in reversed: %s\n", str, reversed);

    return 0;
}