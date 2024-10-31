#include <stdio.h>

int main() {
    char grid[6][5] = {{'E', '-', '-', '-', 'X'}, {'X', 'X', '-', 'X', 'I'}, {'-', 'X', '-', '-', '-'}, {'-', 'I', 'X', '-', '-'}, {'X', '-', '-', '-', 'X'}, {'I', '-', '-', 'S', '-'}};
    
    printf("\nWelcome to my game:\n");
    printf("\nTo win, find your way around the obstacles to reach the end point");
    printf("\nCollect the I's on your way to winning for bonus points");
    printf("\nS indicates your current position and E indicates final position you need to reach");
    printf("\nYou cannot move to the spaces with 'X' on them");
    printf("\nPress 'X' at any time to exit the game\n\n");

    for (int i=0; i<6; i++) {
        for (int j=0; j<5; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    char input;
    int bonus = 0, end = 0, warning = 3;

    for (int i=5; end!=1; ) {
        for (int j=3; grid[0][0]!='S' && warning>0; ) {
            printf("Input: "); 
            scanf(" %c", &input);

            if (input=='A' && j!=0 && grid[i][j-1]!='X') {
                if (grid[i][j-1]=='I') bonus++;
                grid[i][j-1] = grid[i][j];
                grid[i][j] = '-';
                j--;
            } else if (input=='A' && j!=0 && grid[i][j-1]=='X') {
                warning--;
                if (warning!=0) printf("You have %d lives left\n\n", warning);
            }
            

            if (input=='S' && i!=5 && grid[i+1][j]!='X') {
                if (grid[i+1][j]=='I') bonus++;
                grid[i+1][j] = grid[i][j];
                grid[i][j] = '-';
                i++;
            } else if (input=='S' && i!=5 && grid[i+1][j]=='X') {
                warning--;
                if (warning!=0) printf("You have %d lives left\n\n", warning);
            }
            

            if (input=='W' && i!=0 && grid[i-1][j]!='X') {
                if (grid[i-1][j]=='I') bonus++;
                grid[i-1][j] = grid[i][j];
                grid[i][j] = '-';
                i--;
            } else if (input=='W' && i!=0 && grid[i-1][j]=='X') {
                warning--;
                if (warning!=0) printf("You have %d lives left\n\n", warning);
            }
            

            if (input=='D' && j!=4 && grid[i][j+1]!='X') {
                if (grid[i][j+1]=='I') bonus++;
                grid[i][j+1] = grid[i][j];
                grid[i][j] = '-';
                j++;
            } else if (input=='D' && j!=4 && grid[i][j+1]=='X') {
                warning--;
                if (warning!=0) printf("You have %d lives left\n\n", warning);
            }
            
            if (input=='X') {
                end=1;
                printf("Game exited");
                break;
            }

            if (warning==0) {
                end=1;
                break;
            }

            if (end!=1) {
                for (int i=0; i<6; i++) {
                    for (int j=0; j<5; j++) {
                        printf("%c ", grid[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
            }

            if (i==0 && j==0) {
                printf("\nCongratulations, you won :)");
                printf("\nYou finished with %d bonus points", bonus);
                printf("\nYou had %d lives remaining", warning);
                end=1;
                break;
            }

        }
    }
    if (warning==0) printf("\nYou ran into 'X' too many times. You have lost :(");
    
    return 0;
}