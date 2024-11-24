#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Zadanie_5() {
    SetConsoleOutputCP(1250);
    
    // -------------------- Zadanie 5 --------------------
    // |                                                 |
    // |  Grupa laboratoryjna składa się z n studentów   |
    // |  (wartość n podaje użytkownik). Wprowadzamy     |
    // |  liczbę punktów dla każdego studenta. Napisz    |
    // |  program, który obliczy średnią liczbę punktów  |
    // |  w grupie z wykorzystaniem pętli while.         |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------


    int Students_E;
    int Sum_E = 0;
    int Pt_E;
    int Var_E = 0;
    float Avg_E;
    
    printf("Podaj liczbę studentów: ");
    scanf_s("%d", &Students_E);
    
    while (Var_E < Students_E) {
        printf("Podaj punkty studenta %d: ", Var_E + 1);
        scanf_s("%d", &Pt_E);
        Sum_E += Pt_E;
        Var_E++;
    }
        
    Avg_E = (float)Sum_E / Students_E;
    
    printf("Średnia liczba punktów: %.2f\n\n", Avg_E);
 
    return 0;
}
