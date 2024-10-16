#include <stdio.h>

int main() {
    int pindef = 1020;
    int balance = 100000;
    printf("Enter PIN: ");
    int pin;
    scanf("%d", &pin);
    if (pin==pindef) {
        int option=1; 
        for (; option==1 || option==2 || option==3;) {
            printf("\n\nEnter your choice: \n1. Check Balance\n2. Transfer to another bank\n3. Change PIN\nAny other number to exit\nPick an option: ");
            scanf("%d", &option);
            switch (option) {
                case 1:
                    printf("\nYour current balance is %d", balance);
                    break;
                case 2: 
                    for (int i=0; i<1;) {
                        int transfer;
                        printf("\nEnter money to transfer: ");
                        scanf("%d", &transfer);
                        if (transfer>balance) {
                            printf("\nNot enough balance, enter again");
                            printf("\nCurrent balance = %d", balance);
                        } else {
                            printf("\n%d rupees have been successfully transfered", transfer);
                            printf("\nRemaining balance = %d", balance-transfer);
                            balance = balance - transfer;
                            i++;
                        }
                    }
                    break;
                case 3:
                    printf("\nEnter current PIN: ");
                    int pinver; 
                    scanf("%d", &pinver);
                    if (pinver==pin) {
                        printf("\nEnter new PIN: ");
                        scanf("%d", &pin);
                        printf("Pin successfully changed to %d", pin);
                    } else {
                        printf("Unsuccessful PIN verification");
                        option=0;
                    }
                    break;
                default:
                    option=0;
                    printf("Code exited");
                    break;
            }
        }
    }
    return 0;
}