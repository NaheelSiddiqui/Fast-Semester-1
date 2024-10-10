// Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all
// the elements occurring more than once in the given array.

#include <stdio.h>
#include <stdlib.h>
#define NUM_CAPACITY num_count * sizeof(int) // IN BYTES

int main(){
    printf("Enter number of elements: ");
    int num_count = 0; // JUST THE COUNT OF NUMS
    scanf("%d", &num_count);

    // allocates memory; takes # of bytes -> void* to the first byte of the mem allocated
    int* nums = (int*)malloc(NUM_CAPACITY); 
    // &X returns the MEMORY ADDRESS OF X
    // *X returns the VALUE AT MEMORY ADDRESS X
    
    for (int i = 0; i < num_count; i++) {
        printf("Enter a number: ");
        scanf("%d", nums + i * sizeof(int));
    }

    printf("NUMS: ");
    for (int i = 0; i < num_count; i++) {
        printf("%d, ", *(nums + i * sizeof(int)));
    }

    free(nums);

    return 0;
}




















    // int *num = new int[size];
    // for (int i=0; i<size; i++) {
    //     printf("Enter number %d", i+1);
    //     scanf("%d", &num[i]);
    // }
