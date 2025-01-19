#include <stdio.h>

void Square(int* Num) {
    *Num = *Num * *Num;
}

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 4.\n\n");

    int Var_A;

    printf("Podaj liczbę:");
    scanf_s("%d", &Var_A);

    printf("Liczba %d podniesiona do kwadratu to", Var_A);

    Square(&Var_A);

    printf(" %d\n", Var_A);

    return 0;
}
