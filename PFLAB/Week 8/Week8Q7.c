#include <stdio.h>

int main() {
    int matrix1[3][3] = {   {1, 2, 3}, 
                            {4, 5, 6}, 
                            {7, 8, 9}   };

    int matrix2[3][3] = {   {10, 11, 12}, 
                            {13, 14, 15}, 
                            {16, 17, 18}    };

    int resultmatrix[3][3] = {0};
    int sum;

    for (int i=0; i<3; i++) {
        sum = 0;
        for (int j=0; j<3; j++) { // 1st row 1st column
            int product = matrix1[i][j] * matrix2[j][0];
            sum += product;
            if (j==2) {
                resultmatrix[i][0] = sum;
                sum = 0;
            }
        }
        for (int j=0; j<3; j++) { // 1st row 2nd column
            int product = matrix1[i][j] * matrix2[j][1];
            sum += product;
            if (j==2) {
                resultmatrix[i][1] = sum;
                sum = 0;
            }
        }
        for (int j=0; j<3; j++) { // 1st row 3rd column
            int product = matrix1[i][j] * matrix2[j][2];
            sum += product;
            if (j==2) {
                resultmatrix[i][2] = sum;
                sum = 0;
            }
        }
        printf("[%d, %d, %d]\n", resultmatrix[i][0], resultmatrix[i][1], resultmatrix[i][2]);
    }

    return 0;
}