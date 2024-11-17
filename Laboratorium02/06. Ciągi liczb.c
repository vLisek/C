#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);
    // -------------------- Zadanie 6 --------------------
    // |                                                 |
    // |  Za pomocą pętli for wypisz na ekranie ciągi    |
    // |  liczb:                                         |
    // |  • 1, 2, 3, ..., 99, 100;                       |
    // |  • 100, 99, ..., 2, 1, 0;                       |
    // |  • 7, 14, 21, ..., 70, 77;                      |
    // |  • 20, 18, ..., 2, 0;                           |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 6\n\n");

    // Przykład 1
    printf("Przykład 1: \n");
    for (int i = 1; i <= 100; i++) {
        printf("%d", i);
        if (i < 100) {
            printf(", ");
        }
        if (i == 30 || i == 60 || i == 90) {
            printf("\n");
        }
    }
    printf("\n\n");


    // Przykład 2
    printf("Przykład 2: \n");
    for (int i = 100; i >= 0; i--) {
        printf("%d", i);
        if (i > 0) {
            printf(", ");
        }
        if (i == 72 || i == 43 || i == 14) {
            printf("\n");
        }
    }
    printf("\n\n");

    // Przykład 3
    printf("Przykład 3: \n");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d", i);
        if (i < 77) {
            printf(", ");
        }
    }
    printf("\n\n");

    // Przykład 4
    printf("Przykład 4: \n");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d", i);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n\n");
  
    return 0;
}
