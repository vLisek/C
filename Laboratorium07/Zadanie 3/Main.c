#include <stdio.h>
#include "Structures.h"

int main() {
    SetConsoleOutputCP(1250);

    struct Point MyTab[] = {
        {1.2, 2.3, 3.4},
        {1.3, 2.4, 3.5},
        {1.4, 2.5, 3.6},
        {1.5, 2.6, 3.7}
    };
    int Size = sizeof(MyTab) / sizeof(MyTab[0]);

    float Result = ShortestDistance(MyTab, Size);
    printf("Najmniejsza odleg³oœæ pomiêdzy punktami to: %.2f\n", Result);

    return 0;
}