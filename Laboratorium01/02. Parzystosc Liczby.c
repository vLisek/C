// -------------------- Zadanie 2 --------------------
// |                                                 |
// |  Napisać program, który sprawdza, czy podana    |
// |  liczba całkowita, wczytana z klawiatury jest   |
// |  parzysta, czy nieparzysta. (operator %).       |
// |                                                 |
// |              Autor: Filip Lisowski              |
// ---------------------------------------------------

#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);
    
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
    
    return 0;
}
