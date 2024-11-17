#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);
    
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

    return 0;
}
