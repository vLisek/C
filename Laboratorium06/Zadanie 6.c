// Nie do końca wiem czy o to chodzi w tym zadaniu ??
#include <stdio.h>

void Multiple(char* Sign, int* NumberOfRepetitions) {
    for (int i = 0; i < *NumberOfRepetitions; i++) {
        printf("%c", *Sign);
    }
    (*NumberOfRepetitions)--;
}

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 4.\n\n");

    char Sign = 'X';
    int Repetitions;

    printf("Podaj liczbę powtórzeń: ");
    scanf_s("%d", &Repetitions);

    printf("Przed wywołaniem funkcji:\n");
    printf("Znak: %c, Powtórzenia: %d\n\n", Sign, Repetitions);

    Multiple(&Sign, &Repetitions);

    printf("\n\nPo wywołaniu funkcji:\n");
    printf("Znak: %c, Powtórzenia: %d\n", Sign, Repetitions);

    return 0;
}
