#include<stdio.h>

int main() {
    printf("Enter Initial (First Name): ");
    char A;
    scanf("%c", &A);

    printf("\nEnter your ID: ");
    int ID;
    scanf("%d", &ID);
    printf("\nEnter units consumed: ");
    int units;
    scanf("%d", &units);
    float xyz, bill = 0;

    switch (units) {
        case 0 ... 199:
            bill += units*16.2;
            break;
        case 200 ... 299:
            xyz = units-199;
            bill += 3223.8 + xyz*20.1;
            break;
        case 300 ... 499:
            xyz = units-299;
            bill += 3223.8 + 2010 + xyz*27.1;
            break;
        default:
            xyz = units-499;
            bill += 3223.8 + 2010 + 5420 + xyz*35.9;
    }
    if (bill>18000) {
        float bill1 = bill;
        bill = bill*1.15;
        float surcharge = bill - bill1;
        printf("\nCustomerID: %d\nCustomer Initials: %c\nUnits Consumed: %d\nCharges per unit (Rs):\n0-199 Units = 16.20\n200-299 Units = 20.10\n300-499 Units = 27.10\nAbove 500 Units: 35.90\nSurcharge amount: %.2f\nNet Amount Paid by the Customer: %.2f", ID, A, units, surcharge, bill);
    } else {
        printf("\nCustomerID: %d\nCustomer Initials: %c\nUnits Consumed: %d\nCharges per unit (Rs):\n0-199 Units = 16.20\n200-299 Units = 20.10\n300-499 Units = 27.10\nAbove 500 Units: 35.90\nSurcharge amount: 0\nNet Amount Paid by the Customer: %.2f", ID, A, units, bill);
    }
    return 0;
}    