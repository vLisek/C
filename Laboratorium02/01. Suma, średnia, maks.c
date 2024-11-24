#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(1250);
    
    // -------------------- Zadanie 1 --------------------
    // |                                                 |
    // |  Napisz program, w którym użytkownik podaje     |
    // |  liczby do momentu wpisania wartości mniejszej  |
    // |  od 0, po czym wyświetla sumę, śrędnią oraz     |
    // |  wartość maksymalną dla wprowadzonych liczb.    |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 1.\n");

    int a = 0;
    float Num1 = 0;
    float Sum1 = 0;
    float Min;
    float Max;
    float Avg1;
    

    do {
        printf("Podaj liczbę: ");
        scanf_s("%f", &Num1);
        if (Num1 > 0) {
            if (a == 0) {
                Min = Num1;
                Max = Num1;
            }
            else {
                if (Min > Num1) {
                    Min = Num1;
                }
                else if (Max < Num1) {
                    Max = Num1;
                } 
            }

            Sum1 += Num1;
            a++;
        }
    } 
    while (Num1 > 0);
    
    if (a > 0) {
        Avg1 = Sum1 / (float)a;
        printf("\nSuma liczb: %.2lf\n", Sum1);
        printf("Największa liczba: %.2lf\n", Max);
        printf("Najmniejsza liczba: %.2lf\n", Min);
    }
    else {
        printf("Nie podano liczb dodatnich.\n");
    }
  
    return 0;
}
