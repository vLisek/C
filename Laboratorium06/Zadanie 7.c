#include <stdio.h>

int MinValueAndPointer(int* VarA, int* VarB, int** MinPtr) {
    if (*VarA < *VarB) {
        *MinPtr = VarA;
        return *VarA;
    }
    else {
        *MinPtr = VarB;
        return *VarB;
    }
}

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 7.\n\n");

    int VarX;
    int VarY;

    printf("Podaj pierwszą liczbę: ");
    scanf_s("%d", &VarX);
    printf("Podaj drugą liczbę: ");
    scanf_s("%d", &VarY);

    int* MinPtr;

    int MinValue = MinValueAndPointer(&VarX, &VarY, &MinPtr);

    printf("Mniejsza wartość: %d\n", MinValue);
    printf("Adres mniejszej wartości: %p\n", &MinPtr);

    return 0;
}

