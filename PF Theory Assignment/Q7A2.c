#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define rows 5

void horizontalsearch(char table[5][6], char *input, int *horizontal, int length) {
    int match = 0;
    for (int j=0; j<5; j++) {
        for (int k=0; k<5; k++) {
            if (table[j][k]==input[0]) {
                for (int l=0; l<length; l++) {
                    if (input[l]==table[j][k++]) match++;
                }
                if (match==length) {
                    *horizontal = 1;
                } else match = 0;
            }
        }
    }
    return;
}

void verticalsearch(char table[5][6], char *input, int *vertical, int length) {
    int match = 0;
    for (int j=0; j<5; j++) {
        for (int k=0; k<5; k++) {
            if (table[k][j]==input[0]) {
                for (int l=0; l<length; l++) {
                    if (input[l]==table[k++][j]) match++;
                }
                if (match==length) {
                    *vertical = 1;
                } else match = 0;
            }
        }
    }
    return;
}

int main() {
    char table[5][6];
    srand(time(NULL));

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            int abc = rand()%101;
            if (abc<65 || abc>90) {
                j--;
            } else {
                table[i][j] = abc;
            }
        }
        table[i][5] = '\0';
    }

    printf("Guess words from left to right or top to bottom\nPress END to exit the game\n\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%c ", table[i][j]);
        }
        printf("\n");
    }

    int horizontal, vertical, score=0, end=0;
    for (int i=0; end<1; i++) {
        horizontal=0, vertical=0;
        printf("\nGuess a substring: ");
        char input[7];
        fgets(input, 7, stdin);
        int length = strlen(input) - 1;

        if (input[0]=='E' && input[1]=='N' && input[2]=='D') {
            printf("Thank you for playing, your score was %d\n\n", score);
            for (int i=0; i<5; i++) {
                for (int j=0; j<5; j++) {
                    int abc = rand()%101;
                    if (abc<65 || abc>90) {
                        j--;
                    } else {
                        table[i][j] = abc;
                    }
                }
                table[i][5] = '\0';
            }

            for (int i=0; i<5; i++) {
                for (int j=0; j<5; j++) {
                    printf("%c ", table[i][j]);
                }
                printf("\n");
            }
            end = 1;
            break;
        }

        horizontalsearch(table, input, &horizontal, length);
        verticalsearch(table, input, &vertical, length);

        if (horizontal==1) {
            score++;
            printf("Correctly guessed, your score is %d", score);
        } else if (vertical==1) {
            score++;
            printf("Correctly guessed, your score is %d", score);
        } else {
            score--;
            printf("Incorrect guess your score is %d", score);
        }
    }

    return 0;
}