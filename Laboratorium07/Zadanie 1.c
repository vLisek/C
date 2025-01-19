#include <stdio.h>

    typedef struct {
        int VarA;
        int VarB;
        int VarC;
    } Triangle;
    
    int obwod_trojkata(Triangle t) {
        return t.VarA + t.VarB + t.VarC;
    }

    int main() {
        SetConsoleOutputCP(1250);

        printf("Zadanie 1.\n");

        Triangle t = { 1, 3, 4 };
        printf("Obwód trójkąta: %d\n", obwod_trojkata(t));

        return 0;
    }
