#include <stdio.h>

int main() {
    int matrix[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
    for (int i=0; i<3; i++) {
        int minimum = matrix[i][0];
        int iofmin = i, jofmin = 0;
        for (int j=1; j<3; j++) {
            if (matrix[i][j] < minimum) {
                minimum = matrix[i][j];
                jofmin = j;
                iofmin = i;
            }
        }
        int saddle = 0, maximum = minimum;
        for (int k=0; k<3; k++) {
            if (k!=iofmin && maximum > matrix[k][jofmin]) {
                saddle++;
            }
        }

        if (saddle==2) {
            printf("\n%d is the saddle point found at (%d, %d)", minimum, jofmin, iofmin);
        } else {
            printf("\nNo saddle point found in row %d", i+1);
        }
    }

    return 0;
}