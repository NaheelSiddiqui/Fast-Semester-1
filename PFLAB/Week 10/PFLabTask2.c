#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index, int size) {
    if (index >= size / 2)
        return;
    char temp = str[index];
    str[index] = str[size - index - 1];
    str[size - index - 1] = temp;
    reverseString(str, index + 1, size);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int size = strlen(str);
    reverseString(str, 0, size);
    printf("Reversed string: %s\n", str);
    return 0;
}
