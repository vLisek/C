#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(1250);

    // -------------------- Zadanie 2 --------------------
    // |                                                 |
    // |  Napisz program, który pozwoli na wczytanie     |
    // |  10 liczb i wyznaczeniu ilości oraz sumy liczb  |
    // |  ujemnych i dodatnich podanych przez            |
    // |  użytkownika.                                   |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 2.\n");

    int Num2, SumPos = 0, SumNeg = 0;
    int NumPos = 0, NumNeg = 0;

    for (int i = 0; i < 10; i++) {
        printf("Podaj liczbę %d: ", i + 1);
        scanf_s("%d", &Num2);

        if (Num2 > 0) {
            SumPos += Num2;
            NumPos++;
        }
        else if (Num2 < 0) {
            SumNeg += Num2;
            NumNeg++;
        }
    }

    printf("\nIlość liczb dodatnich: %d\n", NumPos);
    printf("Suma liczb dodatnich: %d\n", SumPos);

    printf("\nIlość liczb ujemnych: %d\n", NumNeg);
    printf("Suma liczb ujemnych: %d\n", SumNeg);
  
    return 0;
}
