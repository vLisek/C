#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);
    // -------------------- Zadanie 5 --------------------
    // |                                                 |
    // |  Grupa laboratoryjna składa się z n studentów   |
    // |  (wartość n podaje użytkownik). Wprowadzamy     |
    // |  liczbę punktów dla każdego studenta. Napisz    |
    // |  program, który obliczy średnią liczbę punktów  |
    // |  w grupie z wykorzystaniem pętli while.         |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------


    int studenci;
    int suma = 0;
    int punkt;
    int i = 0;
    float srednia;

    printf("Podaj liczbe studentow: ");
    scanf_s("%d", &studenci);

    while (i < studenci) {
        printf("Podaj punkty studenta %d: ", i + 1);
        scanf_s("%d", &punkt);
        suma += punkt;
        i++;
    }

    srednia = (float)suma / studenci;

    printf("Srednia liczba punktow: %.2f\n", srednia);
 
    return 0;
}
