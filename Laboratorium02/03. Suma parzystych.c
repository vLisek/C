#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Zadanie_3() {
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
    
    int Var_C;
    int Sum_C = 0;
    
    printf("Podaj liczbę n: ");
    scanf_s("%d", &Var_C);
    
    for (int i = 1; i <= Var_C; i++) {
        if (i % 2 == 0) {
            Sum_C += i;
        }
    }
    
    printf("Suma liczb parzystych w ciągu od 1 do %d: %d\n\n", Var_C, Sum_C);
    
    return 0;
}
