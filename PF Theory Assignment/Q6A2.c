#include <stdio.h>

int winningchance(int matchsticks) {
    if (matchsticks%5 == 0) {
        return -1;
    } else {
        int firstmove = matchsticks%5;
        return firstmove;
    }
}

int main() {
    printf("Enter number of matchsticks: ");
    int matchsticks = 0;
    scanf("%d", &matchsticks);
    
    int result = winningchance(matchsticks);

    if (result == -1) {
        printf("Impossible to win");
    } else {
        printf("Possible to win");
        printf("\nA should pick %d to start for a guaranteed win", result);
    }

    return 0;
}