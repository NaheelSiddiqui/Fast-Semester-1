#include<stdio.h>

int main() {
    char x;
    printf("Enter character: ");
    scanf("%c", &x);
    
    if (x>=65 && x<=90) {
        printf("\nThe character is a CAPITAL LETTER");
    } else if (x>=97 && x<=122) {
        printf("\nThe character is a SMALL LETTER");
    } else if (x>=48 && x<=57) {
        printf("\nThe character is a NUMBER");
    } else {
        printf("\nThe character is a SPECIAL CHARACTER");
    }
        
    return 0;
}