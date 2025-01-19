#include <stdio.h>

void swap_values(int* VarA, int* VarB) {
    int Temp = *VarA;
    *VarA = *VarB;
    *VarB = Temp;
}

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 8.\n\n");

    int VarX; 
    int VarY;

    printf("Podaj pierwsza liczbe: ");
    scanf_s("%d", &VarX);
    printf("Podaj druga liczbe: ");
    scanf_s("%d", &VarY);

    printf("Przed zamianą: x = %d, y = %d\n", VarX, VarY);
    
    swap_values(&VarX, &VarY);

    printf("Po zamianie: x = %d, y = %d\n", VarX, VarY);

    return 0;
}
