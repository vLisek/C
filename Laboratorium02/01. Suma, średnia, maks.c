#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Zadanie_1() {
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

    int Var_A = 0;
    float Num_A = 0;
    float Sum_A = 0;
    float Min_A;
    float Max_A;
    float Avg_A;
    

    do {
        printf("Podaj liczbę: ");
        scanf_s("%f", &Num_A);
        if (Num_A > 0) {
            if (Var_A == 0) {
                Min_A = Num_A;
                Max_A = Num_A;
            }
            else {
                if (Min_A > Num_A) {
                    Min_A = Num_A;
                }
                else if (Max_A < Num_A) {
                    Max_A = Num_A;
                } 
            }

            Sum_A += Num_A;
            Var_A++;
        }
    } 
    while (Num_A > 0);
    
    if (Var_A > 0) {
        Avg_A = Sum_A / (float)Var_A;
        printf("\nSuma liczb: %.2lf\n", Sum_A);
        printf("Największa liczba: %.2lf\n", Max_A);
        printf("Najmniejsza liczba: %.2lf\n", Min_A);
    }
    else {
        printf("Nie podano liczb dodatnich.\n");
    }
  
    return 0;
}
