#include <stdio.h>
int main() {
    SetConsoleOutputCP(1250);
    system("pause");
    system("cls");



    // -------------------- Zadanie 1 --------------------
    // |                                                 |
    // |  Napisać program, który wypisuje na konsolę nr  |
    // |  albumu studenta (osoby rozwiązującej program). |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------
    
    printf("Zadanie 1.\n");
    printf("Numer albumu: 134942\n");

    system("pause");
    printf("\n\n");



    // -------------------- Zadanie 2 --------------------
    // |                                                 |
    // |  Napisać program, który sprawdza, czy podana    |
    // |  liczba całkowita, wczytana z klawiatury jest   |
    // |  parzysta, czy nieparzysta. (operator %).       |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    int Num2;
    printf("Zadanie 2.\n");
    printf("Podaj liczbę całkowitą: ");
    scanf_s("%d", &Num2);

    if (Num2 % 2 == 0) {
        printf("\nLiczba jest parzysta.\n");
    }
    else {
        printf("\nLiczba jest nieparzysta.\n");
    }

    system("pause");
    printf("\n\n");



    // -------------------- Zadanie 3 --------------------
    // |  Napisać program, który pozwala użytkownikowi   |
    // |  na wprowadzenie dwóch liczb                    |
    // |  zmiennoprzecinkowych, a następnie zwraca       |
    // |  informację, która z wprowadzonych liczb jest   |
    // |  liczbą większą.                                |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    float Num3_1, Num3_2;
    printf("Zadanie 3.\n");
    printf("Podaj pierwszą liczbę: ");
    scanf_s("%f", &Num3_1);
    printf("Podaj drugą liczbę: ");
    scanf_s("%f", &Num3_2);

    if (Num3_1 > Num3_2) {
        printf("\nPierwsza liczba (%.2f) jest większa.\n", Num3_1);
    }
    else if (Num3_1 < Num3_2) {
        printf("\nDruga liczba (%.2f) jest większa.\n", Num3_2);
    }
    else {
        printf("\nObie liczby są równe.\n");
    }

    system("pause");
    printf("\n\n");



    // -------------------- Zadanie 4 --------------------
    // | Napisać program, który pozwala użytkownikowi na |
    // | wprowadzenie czterech liczb                     |
    // | zmiennoprzecinkowych, a następnie zwraca        |
    // | średnią arytmetyczną z wprowadzonych liczb.     |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 4.\n");
    float Num4_1, Num4_2, Num4_3, Num4_4, Avg;
    printf("Podaj cztery liczby oddzielone spacjami: ");
    scanf_s("%f %f %f %f", &Num4_1, &Num4_2, &Num4_3, &Num4_4);

    Avg = (Num4_1 + Num4_2 + Num4_3 + Num4_4) / 4;
    printf("\nŚrednia arytmetyczna: %.2f\n", Avg);

    return 0;
}
