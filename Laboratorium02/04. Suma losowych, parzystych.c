#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Zadanie_4() {
    SetConsoleOutputCP(1250);

    // -------------------- Zadanie 4 --------------------
    // |                                                 |
    // |  Wykorzystując algorytm z zadania 3, napisz     |
    // |  program, który pozwoli użytkownikowi na        |
    // |  wylosowanie n liczb z przedziału (-10, 45)     |
    // |  i obliczy sumę wszystkich liczb parzystych     |
    // |  w danym ciągu.                                 |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------
    
    printf("Zadanie 4.\n");
    
    int Var_D;
    int Num_D;
    int Sum_D = 0;
    
    printf("Podaj liczbę n (liczba elementów w ciągu): ");
    scanf_s("%d", &Var_D);
    
    srand(time(0));
    
    for (int i = 0; i < Var_D; i++) {
        Num_D = rand() % 56 - 10;
    
        if (Num_D % 2 == 0) {
            Sum_D += Num_D;
        }
    
        printf("Wylosowana liczba %d: %d\n", i + 1, Num_D);
    }
    
    printf("Suma liczb parzystych: %d\n", Sum_D);

    return 0;
}
