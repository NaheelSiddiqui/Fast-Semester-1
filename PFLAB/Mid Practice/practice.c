#include<stdio.h>

int main (){
    printf("Enter registration code: ");
    int rollno;
    scanf("%d", &rollno);

    if (rollno<=0 && rollno>1000) {
        printf("\nIncorrect code entered. Access to the registration portal is denied");
    } else {
        printf("\nWelcome to the University Registration System");        
        int choice, enroll; 
        do {
            printf("\n1. Register for courses\n2. View student details\nEnter any other number to exit");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            if (choice==1) {
                printf("Enter a number to register course\n1. PF\n2. Calculus\n3. English");
                printf("\nEnter your choice: ");
                scanf("%d", &enroll);
                switch (enroll) {
                    case 1: printf("Successfully enrolled in PF"); break;
                    case 2: printf("Successfully enrolled in Calculus"); break;
                    case 3: printf("Successfully enrolled in English"); break;
                    default: printf("Invalid input"); break;
                }
            } else if (choice==2) {
                printf("Student ID: %d", rollno);
                printf("\nSection: BCS-1D");
                
                if (enroll==0) {
                    printf("\nCurrently enrolled in no courses");
                } else {
                    switch (enroll) {
                        case 1: printf("\nCurrently enrolled in PF"); break;
                        case 2: printf("\nCurrently enrolled in Calculus"); break;
                        case 3: printf("\nCurrently enrolled in English"); break;
                        default: printf("\nCurrently enrolled in no courses"); break;
                    }
                }
            } else {
                printf("Code exited on user chocie");
            }
            printf("\n");
        } while (choice==1 || choice==2);
    }
    
    return 0;
}