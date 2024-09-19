#include<stdio.h>

int main() {
    printf("Enter cost of items: ");
    float cost;
    scanf("%f", &cost);

    if (cost<0) {
        printf("\nInvalid cost entered");
    } else if (cost>=0 && cost<500) {
        printf("\nYou get no discount.\nYour price is Rs. %.2f", cost);
        printf("\nYou saved Rs. 0");
    } else if (cost>=500 && cost<2000) {
        float final, discount = 5;
        final = (100-discount)*(cost)/100;
        printf("\nYour discount is %.2f%% :)\nYou have to pay Rs. %.2f", discount, final);
        printf("\nYou saved Rs. %.2f", cost-final);
    } else if (cost>=2000 && cost<4000) {
        float final, discount = 10;
        final = (100-discount)*(cost)/100;
        printf("\nYour discount is %.2f%% :)\nYou have to pay Rs. %.2f", discount, final);
        printf("\nYou saved Rs. %.2f", cost-final);
    } else if (cost>=4000 && cost<6000) {
        float final, discount = 20;
        final = (100-discount)*(cost)/100;
        printf("\nYour discount is %.2f%% :)\nYou have to pay Rs. %.2f", discount, final);
        printf("\nYou saved Rs. %.2f", cost-final);
    } else {
        float final, discount = 35;
        final = (100-discount)*(cost)/100;
        printf("\nYour discount is %.2f%% :)\nYou have to pay Rs. %.2f", discount, final);
        printf("\nYou saved Rs. %.2f", cost-final);
    }
    return 0;
}  