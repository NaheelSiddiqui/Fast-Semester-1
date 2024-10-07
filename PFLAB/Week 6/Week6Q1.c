//We will use the do-while loop so that the code prompts the user to enter an input at least once

#include <stdio.h>

int main(){
    int num, sum=0;
    printf("Enter a number and it will be added to the sum\nEntering '0' ends the code");
    
    do {
        printf("\nEnter a number: ");
        scanf("%d", &num);
        sum+=num;
        printf("Sum = %d", sum);
        if (num==0) printf("\nEnd of code");
    } while (num!=0);
    return 0;
}