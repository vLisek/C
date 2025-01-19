#include <stdio.h>

int* Power(int* Base, int Exponent) {
    int Result = 1;
    for (int i = 0; i < Exponent; i++) {
        Result *= *Base;
    }
    *Base = Result;
    return Base;
}

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 5.\n\n");

    int liczba; 
    int potega;

    printf("Podaj liczbę: ");
    scanf_s("%d", &liczba);
    printf("Podaj wykładnik potęgi: ");
    scanf_s("%d", &potega);

    printf("Liczba %d podniesiona do %d potęgi wynosi ", liczba, potega);

    int* wynik = Power(&liczba, potega);

    printf("%d.\n", *wynik);

    return 0;
}
