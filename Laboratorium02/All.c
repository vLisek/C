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
    
    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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

    system("pause");
    printf("\n\n");


    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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

    system("pause");
    printf("\n\n");


    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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

    system("pause");
    printf("\n\n");


    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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

    printf("Zadanie 5.\n");

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

    system("pause");
    printf("\n\n");


    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 6 --------------------
    // |                                                 |
    // |  Za pomocą pętli for wypisz na ekranie ciągi    |
    // |  liczb:                                         |
    // |  • 1, 2, 3, ..., 99, 100;                       |
    // |  • 100, 99, ..., 2, 1, 0;                       |
    // |  • 7, 14, 21, ..., 70, 77;                      |
    // |  • 20, 18, ..., 2, 0;                           |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 6.\n\n");

    // Przykład 1
    printf("Przykład 1: \n");
    for (int i = 1; i <= 100; i++) {
        printf("%d", i);
        if (i < 100) {
            printf(", ");
        }
        if (i == 30 || i == 60 || i == 90) {
            printf("\n");
        }
    }
    printf("\n\n");


    // Przykład 2
    printf("Przykład 2: \n");
    for (int i = 100; i >= 0; i--) {
        printf("%d", i);
        if (i > 0) {
            printf(", ");
        }
        if (i == 72 || i == 43 || i == 14) {
            printf("\n");
        }
    }
    printf("\n\n");

    // Przykład 3
    printf("Przykład 3: \n");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d", i);
        if (i < 77) {
            printf(", ");
        }
    }
    printf("\n\n");

    // Przykład 4
    printf("Przykład 4: \n");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d", i);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n\n");

    system("pause");
    printf("\n\n");

    
    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    // -------------------- Zadanie 7 --------------------
    // |                                                 |
    // |  W oparciu o podany fragment kodu, zmodyfikuj   |
    // |  kod tak aby uzyskać następujące rezultaty.     |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("\nZadanie 7\n\n");

    // Przykład 1
    printf("Przykład 1\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++)
            printf("X");
        printf("\n");
    }

    printf("\n\n");


    // Przykład 2
    printf("Przykład 2\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }

    printf("\n\n");


    // Przykład 3
    printf("Przykład 3\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < 10 - i; j++)
            printf("X");
        printf("\n");
    }

    printf("\n\n");


    // Przykład 4
    printf("Przykład 4\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * (i + 1); j++)
            printf("X");
        printf("\n");
    }
    return 0;
}
