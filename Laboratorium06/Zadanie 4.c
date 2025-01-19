#include <stdio.h>

void Square(int* liczba) {
    *liczba = *liczba * *liczba;
}

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 4.\n\n");

    int x = 5;
    printf("Liczba %d podniesiona do kwadratu to", x);

    Square(&x);

    printf(" %d\n", x);

    return 0;
}
