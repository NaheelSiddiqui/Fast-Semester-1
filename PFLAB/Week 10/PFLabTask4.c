#include <stdio.h>
#include <string.h>
typedef struct {
    char title[50];
    char genre[20];
    char director[50];
    int releaseYear;
    float rating;
} Movie;
void addMovie(Movie movies[], int *count) {
    printf("Enter title: ");
    scanf(" %[^\n]", movies[*count].title);
    printf("Enter genre: ");
    scanf(" %[^\n]", movies[*count].genre);
    printf("Enter director: ");
    scanf(" %[^\n]", movies[*count].director);
    printf("Enter release year: ");
    scanf("%d", &movies[*count].releaseYear);
    printf("Enter rating: ");
    scanf("%f", &movies[*count].rating);
    (*count)++;
}
void searchByGenre(Movie movies[], int count, char genre[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            printf("Title: %s, Director: %s, Year: %d, Rating: %.1f\n",
                   movies[i].title, movies[i].director, movies[i].releaseYear, movies[i].rating);
            found = 1;
        }
    }
    if (!found)
        printf("No movies found for the genre '%s'.\n", genre);
}

void displayAllMovies(Movie movies[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Title: %s, Genre: %s, Director: %s, Year: %d, Rating: %.1f\n",
               movies[i].title, movies[i].genre, movies[i].director, movies[i].releaseYear, movies[i].rating);
    }
}
int main() {
    Movie movies[100];
    int count = 0, option;
    char genre[20];
    while (1) {
        printf("\n1. Add Movie\n2. Search by Genre\n3. Display All Movies\n4. Exit\nEnter choice: ");
        scanf("%d", &option);
        switch (option) {
        case 1:
            addMovie(movies, &count);
            break;
        case 2:
            printf("Enter genre to search: ");
            scanf(" %[^\n]", genre);
            searchByGenre(movies, count, genre);
            break;
        case 3:
            displayAllMovies(movies, count);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}
