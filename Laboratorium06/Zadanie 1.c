#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 1.\n\n");

    int Num1, Num2, Num3;
    int* Ptr1, * Ptr2, * Ptr3;

    printf("Adres zadeklarowanej zmiennej: %p\n", &Num1);

    printf("Podaj wartość pierwszej liczby: ");
    scanf_s("%d", &Num1);
    printf("Adres pierwszej liczby: %p oraz jej wartość: %d\n\n", &Num1, Num1);

    printf("Podaj wartość drugiej liczby: ");
    scanf_s("%d", &Num2);
    printf("Podaj wartość trzeciej liczby: ");
    scanf_s("%d", &Num3);

    Ptr1 = &Num1;
    Ptr2 = &Num2;

    int Diff = *Ptr1 - *Ptr2;
    printf("Różnica dwóch liczb: %d\n", Diff);

    Ptr3 = &Num3;
    float Avg = (float)(*Ptr1 + *Ptr2 + *Ptr3) / 3;
    printf("Średnia trzech liczb: %.2f\n", Avg);

    return 0;
}
