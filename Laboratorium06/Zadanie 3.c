#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1250);

    printf("Zadanie 3.\n\n");

    int VarN;

    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &VarN);

    int* MyTab = (int*)malloc(VarN * sizeof(int));

    if (MyTab == NULL) {
        printf("Błąd alokacji pamięci!\n");
        return 1;
    }

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < VarN; i++) {
        scanf_s("%d", &MyTab[i]);
    }

    int Sum = 0;
    for (int i = 0; i < VarN; i++) {
        Sum += MyTab[i];
    }

    float Avg = (float)Sum / VarN;

    printf("Średnia: %.2f\n", Avg);

    printf("Elementy większe od średniej:\n");
    for (int i = 0; i < VarN; i++) {
        if (MyTab[i] > Avg) {
            printf("%d ", MyTab[i]);
        }
    }
    printf("\n");

    return 0;
}
