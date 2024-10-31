#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROWS 6
#define COLUMNS 4

int main() {
    char inputs[ROWS][COLUMNS + 1] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int numbers[ROWS][26] = {0}; 

    for (int i=0; i<6; i++) {
        for (int j=0; j<3; j++) {
            int abc = inputs[i][j];
            numbers[i][abc-97]++;
        }
    }

    int match[ROWS]; 
	for (int i=0; i<6; i++) {
		match[i] = 0;
	}

    int group = 1; 
    for (int i = 0; i < ROWS; i++) {
        if (match[i] == 0) { 
            match[i] = group; 

            for (int j = i+1; j<ROWS; j++) {
                int check = 1; 
                for (int l=0; l<26; l++) {
                    if (numbers[i][l] != numbers[j][l]) {
                        check = 0; 
                        break; 
                    }
                }
                if (check==1) {
                    match[j] = match[i];
                }
            }
            group++; 
        }
    }

    for (int i=0; i<6; i++) {
        int bracket = 0;
        for (int j=0; j<6; j++) {
            if (match[j] == i) bracket++; 
        }
        if (bracket>0) {
            printf("[");
            int comma = 0;
            for (int j=0; j<6; j++) {
                if (match[j] == i) {
                    comma++;
                    if (comma==1) printf("'%s'", inputs[j]);
                    else printf(",'%s'", inputs[j]);
                } 
            }
            printf("] ");
        }
    }

    return 0;
}