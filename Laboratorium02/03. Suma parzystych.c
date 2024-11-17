#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);

    // -------------------- Zadanie 3 --------------------
    // |                                                 |
    // |  Dany jest ciąg n liczb (n > 0), napisz program |
    // |  pozwalający na obliczenie sumy wszystkich      |
    // |  liczb parzystychw danym ciągu.                 |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 3.\n");

    int n;
    int Sum1 = 0;

    printf("Podaj liczbę n: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            Sum1 += i;
        }
    }

    printf("Suma liczb parzystych w ciągu od 1 do %d: %d\n\n", n, Sum1);
    return 0;
}
