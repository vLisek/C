#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(1250);

    // -------------------- Zadanie 1 --------------------
    // |                                                 |
    // | Napisz program wprowadzaj�cy do 10-elementowej  |
    // | tablicy warto�ci: 3, 6, 9, ...                  |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 1.\n");

    int Tab1[10];

    for (int i = 0; i < 10; i++) {
        Tab1[i] = (i + 1) * 3;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", Tab1[i]);
    }

    printf("\n");

    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 2 --------------------
    // |                                                 |
    // | Do programu z zadania 1 dodaj instrukcje        |
    // | wy�wietlaj�ce co drug� warto�� z tablicy.       |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 2.\n");

    int Tab2[10];

    for (int i = 0; i < 10; i++) {
        Tab2[i] = (i + 1) * 3;
    }

    printf("Wszystkie elementy tablicy:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", Tab2[i]);
    }

    printf("\n");

    printf("\nCo drugi element tablicy:\n");
    for (int i = 0; i < 10; i += 2) {
        printf("%d ", Tab2[i]);
    }

    printf("\n");

    system("pause");
    printf("\n\n");
    
    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 3 --------------------
    // |                                                 |
    // | Wype�nij n-elementow� tablic�, zaczynaj�c od    |
    // | ostatniej kom�rki tablicy, warto�ciami a, a-5,  |
    // | a-10, ... . Warto�� ca�kowit� a podaje          |
    // | u�ytkownik.                                     |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 3.\n");

    int Var_A = 0;
    int Var_B = 0;

    printf("Podaj rozmiar tablicy (nie wi�cej ni� 100): ");
    scanf_s("%d", &Var_A);

    printf("Podaj warto�� pierwszej liczby: ");
    scanf_s("%d", &Var_B);

    int Tab3[100];

    for (int i = 0; i < Var_A; i++) {
        Tab3[i] = Var_B;
        Var_B -= 5;
    }

    printf("\nWarto�ci w tablicy: \n");
    for (int i = 0; i < Var_A; i++) {
        printf("%d ", Tab3[i]);
    }

    printf("\n");

    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    // -------------------- Zadanie 4 --------------------
    // |                                                 |
    // | Napisz program znajduj�cy minimaln� warto��     |
    // | w n-elementowej tablicy, elementy tablicy s�    |
    // | losowane z przedzia�u [-23, 50].                |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 4.\n");

    int Var_C = 0;

    printf("Podaj rozmiar tablicy (nie wi�cej ni� 100): ");
    scanf_s("%d", &Var_C);

    int Tab4[100] = { 0 }; // Zerowanie tablicy, aby unikn�� ostrze�enia

    srand((unsigned int)time(NULL)); // Rzutowanie na unsigned int, aby unikn�� ostrze�enia

    for (int i = 0; i < Var_C; i++) {
        Tab4[i] = (rand() % 74) - 23;
    }

    int Min = Tab4[0] ;
    
    for (int i = 1; i < Var_C; i++) {
        if (Tab4[i] < Min) {
            Min = Tab4[i];
        }
    }

    printf("\nWarto�ci w tablicy: \n");
    for (int i = 0; i < Var_C; i++) {
        printf("%d ", Tab4[i]);
    }

    printf("\n\nMinimalna warto��: %d", Min);

    printf("\n");

    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 5 --------------------
    // |                                                 |
    // | U�ytkownik podaje 2 pierwsze warto�ci tablicy.  |
    // | Wype�nij pozosta�e kom�rki tablicy warto�ciami, |
    // | kt�re stanowi� sum� warto�ci z dw�ch            |
    // | poprzedzaj�cych kom�rek tablicy.                |
    // | Przyk�ad: 3, 6, ?, ?, ? -> 3, 6, 9, 15, 24.     |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 5.\n");

    int Var_D;

    printf("Podaj rozmiar tablicy (nie wi�cej ni� 100): ");
    scanf_s("%d", &Var_D);

    int Tab5[100];

    printf("Podaj pierwsz� warto��: ");
    scanf_s("%d", &Tab5[0]);
    printf("Podaj drug� warto��: ");
    scanf_s("%d", &Tab5[1]);

    for (int i = 2; i < Var_D; i++) {
        Tab5[i] = Tab5[i - 1] + Tab5[i - 2];
    }

    printf("\nWarto�ci w tablicy: \n");
    for (int i = 0; i < Var_D; i++) {
        printf("%d ", Tab5[i]);
    }

    printf("\n");

    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 6 --------------------
    // |                                                 |
    // | Dana jest tablica 20 elementowa. Pierwsza       |
    // | po�owa tablicy jest wype�niona. Napisz program, |
    // | kt�ry wype�ni drug� po�ow� tablicy poprzez      |
    // | kopiowanie kolejnych warto�ci z pierwszej       |
    // | po�owy tablicy.                                 |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 6.\n");

    int Tab6[20];

    printf("Podaj pierwsze 10 warto�ci tablicy:\n");
    for (int i = 0; i < 10; i++) {
        printf("Tablica[%d]: ", i);
        scanf_s("%d", &Tab6[i]);
    }

    for (int i = 10; i < 20; i++) {
        Tab6[i] = Tab6[i - 10];
    }

    printf("\nWarto�ci w tablicy: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", Tab6[i]);
    }

    printf("\n");

    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 7 --------------------
    // |                                                 |
    // | Napisz program obliczania sumy element�w        |
    // | przek�tnej g��wnej macierzy.                    |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 7.\n");

    int Matrix1[3][3] = { {3, 4, 9}, {2, 5, 7}, {1, 2, 5} };
    int Sum_A = 0;

    printf("Macierz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Matrix1[i][j]);
            if (i == j) {
                Sum_A += Matrix1[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSuma element�w przek�tnej g��wnej: %d", Sum_A);

    printf("\n");

    system("pause");
    printf("\n\n");

    // --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // -------------------- Zadanie 8 --------------------
    // |                                                 |
    // | Napisz program dodawania dw�ch macierzy.        |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 8.\n");

    int Matrix_A[3][3] = { {3, 4, 9}, {2, 5, 7}, {1, 2, 5} };
    int Matrix_B[3][3] = { {1, 4, 6}, {7, 5, 3}, {2, 8, 3} };
    int Sum_B[3][3];

    printf("\nMacierz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("\nMacierz B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Matrix_B[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma macierzy A + B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Sum_B[i][j] = Matrix_A[i][j] + Matrix_B[i][j];
            printf("%d ", Sum_B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    system("pause");
    printf("\n\n");

    return 0;
}