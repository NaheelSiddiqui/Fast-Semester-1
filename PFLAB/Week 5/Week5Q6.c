#include <stdio.h>

int main() {
    int Num;
    printf("Enter a Number:  ");
    scanf("%d", &Num);
    
    (Num!=0)?(Num>0)?printf("positive Number"):printf("negative Number"):printf("number is zero");
    return 0;
}