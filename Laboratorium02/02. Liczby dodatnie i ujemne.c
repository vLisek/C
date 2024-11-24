#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Zadanie_2() {
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
    
    int Num_B; 
    int SumPos_B = 0; 
    int SumNeg_B = 0;
    int NumPos_B = 0; 
    int NumNeg_B = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Podaj liczbę %d: ", i + 1);
        scanf_s("%d", &Num_B);
    
        if (Num_B > 0) {
            SumPos_B += Num_B;
            NumPos_B++;
        }
        else if (Num_B < 0) {
            SumNeg_B += Num_B;
            NumNeg_B++;
        }
    }
    
    printf("\nIlość liczb dodatnich: %d\n", NumPos_B);
    printf("Suma liczb dodatnich: %d\n", SumPos_B);
    
    printf("\nIlość liczb ujemnych: %d\n", NumNeg_B);
    printf("Suma liczb ujemnych: %d\n", SumNeg_B);
      
    return 0;
}
