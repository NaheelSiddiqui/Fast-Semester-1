#include <stdio.h>
#include <math.h>

int binarytodecimal() {
    printf("\nEnter a binary number: ");
    int binary;
    scanf("%d", &binary);

    int decimal = 0;
    for (int i=0; binary>0; i++) {
        int rem = binary%2;
        int power = (int)pow(2, i);
        if (rem==1) decimal += power;
        binary = binary/10;
    }
    printf("%d", decimal);

    return decimal;
}

int decimaltobinary() {
    return 0;
}

void decimaltohexadecimal() {
    return;
}

void hexadecimaltodecimal() {
    return;
}

void binarytohexadecimal() {
    return;
}

void hexadecimaltobinary() {
    return;
}

int main() {
    printf("Choose amongst the following options: \nBinary to decimal (Press 1) \nDecimal to binary (Press 2)\nDecimal to hexadecimal (Press 3) \nHexadecimal to decimal (Press 4) \nBinary to hexadecimal (Press 5) \nHexadecimal to binary (Press 6)");

    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int result = binarytodecimal();
            printf("%d", result);
            break;
        } 
        case 2: {
            int result = decimaltobinary();
            printf("%d", result);
            break;
        } 
        case 3: {
            decimaltohexadecimal();
            break;
        } 
        case 4: {
            hexadecimaltodecimal();
            break;
        } 
        case 5: {
            binarytohexadecimal();
            break;
        } 
        case 6: {
            hexadeximaltobinary();
            break;
        } 
    }

    return 0;
}