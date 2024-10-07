#include <stdio.h>

int main(){
    int num, counter=0, count=0;
    printf("Enter a number (positive only): ");
    scanf("%d", &num);
    int abc=num;
    int xyz=num;

    if (num<=0) printf("Invalid input");

    else {
        for (; num>0; counter++) {
            num /= 10; 
        }
        printf("\n%d has %d digits and", abc, counter);

        for (int i=1; i<=xyz; i++) {
            int rem = xyz%i;
            if (rem==0) count+=1;
        }
        if (count==1) printf(" is a unique number");
        else if (count==2) printf(" is a prime number", abc);
        else if (count>2) printf(" is a composite number", abc);
    }

    return 0;
}