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

    int Num; 
    int Power;

    printf("Podaj liczbę: ");
    scanf_s("%d", &Num);
    printf("Podaj wykładnik potęgi: ");
    scanf_s("%d", &Power);

    printf("Liczba %d podniesiona do %d potęgi wynosi ", Num, Power);

    int* Out = Power(&Num, Power);

    printf("%d.\n", *Out);

    return 0;
}
