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
    } while (Num1 > 0);
    if (a > 0) {
        Avg1 = Sum1 / (float)a;
        printf("\nSuma liczb: %.2lf\n", Sum1);
        printf("Największa liczba: %.2lf\n", Max);
        printf("Najmniejsza liczba: %.2lf\n", Min);
    }
    else {
        printf("Nie podano liczb dodatnich.");
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

    int b;
    int Sum2 = 0;

    printf("Podaj liczbę n: ");
    scanf_s("%d", &b);

    for (int i = 1; i <= b; i++) {
        if (i % 2 == 0) {
            Sum2 += i;
        }
    }

    printf("Suma liczb parzystych w ciągu od 1 do %d: %d\n\n", b, Sum2);

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

    int c;
    int Num3;
    int Sum3 = 0;

    printf("Podaj liczbe n (liczba elementow w ciagu): ");
    scanf_s("%d", &c);

    srand(time(0));

    for (int i = 0; i < c; i++) {
        Num3 = rand() % 56 - 10;

        if (Num3 % 2 == 0) {
            Sum3 += Num3;
        }

        printf("Wylosowana liczba %d: %d\n", i + 1, Num3);
    }

    printf("Suma liczb parzystych: %d\n", Sum3);

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

    int Students;
    int Sum4 = 0;
    int Points;
    int d = 0;
    float Avg;

    printf("Podaj liczbe studentow: ");
    scanf_s("%d", &Students);

    while (d < Students) {
        printf("Podaj punkty studenta %d: ", d + 1);
        scanf_s("%d", &Points);
        Sum3 += Points;
        d++;
    }
        
    Avg = (float)Sum4 / Students;

    printf("Srednia liczba punktow: %.2f\n\n", Avg);

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
