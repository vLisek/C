#include <stdio.h>

int main() {
    SetConsoleOutputCP(1250);
    
    printf("Zadanie 4.\n");
    float Num4_1, Num4_2, Num4_3, Num4_4, Avg;
    printf("Podaj cztery liczby oddzielone spacjami: ");
    scanf_s("%f %f %f %f", &Num4_1, &Num4_2, &Num4_3, &Num4_4);
    
    Avg = (Num4_1 + Num4_2 + Num4_3 + Num4_4) / 4;
    printf("\nŚrednia arytmetyczna: %.2f\n", Avg);
}
