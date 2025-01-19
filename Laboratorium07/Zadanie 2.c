#include <stdio.h>

    struct Triangle {
        int VarA;
        int VarB;
        int VarC;
    };

    void przepisz_trojkat(struct Triangle troj1, struct Triangle* troj2) {
        troj2->VarA = troj1.VarA;
        troj2->VarB = troj1.VarB;
        troj2->VarC = troj1.VarC;
    }

    int main() {
        SetConsoleOutputCP(1250);

        printf("Zadanie 2.\n");

        struct Triangle troj1 = { 1, 3, 4 };
        struct Triangle troj2;

        przepisz_trojkat(troj1, &troj2);

        printf("Drugi trójkąt: a = %d, b = %d, c = %d\n", troj2.VarA, troj2.VarB, troj2.VarC);

        return 0;
    }
