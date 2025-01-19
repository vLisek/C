#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 2.\n\n");

    int MyTab[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int Min;
    int Max;

    printf("Adres pierwszego elementu: %p \n", &MyTab[0]);
    printf("Adres czwartego elementu: %p \n", &MyTab[3]);

    printf("Wprowadź minimum przedziału: ");
    scanf_s("%d", &Min);
    printf("Wprowadź maksimum przedziału: ");
    scanf_s("%d", &Max);

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        MyTab[i] = Min + rand() & (Max - Min + 1);
        printf("Element[%d]: Wartość = %d, Adres = %p \n", i, MyTab[i], &MyTab[i]);
    }

    return 0;
}
