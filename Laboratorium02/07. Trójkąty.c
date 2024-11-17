int main() {
    SetConsoleOutputCP(1250);
    
    // -------------------- Zadanie 7 --------------------
    // |                                                 |
    // |  W oparciu o podany fragment kodu, zmodyfikuj   |
    // |  kod tak aby uzyskać następujące rezultaty.     |
    // |                                                 |
    // |              Autor: Filip Lisowski              |
    // ---------------------------------------------------

    printf("Zadanie 7\n");

    // Przykład 1
    printf("Przykład 1\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++)
            printf("X");
        printf("\n");
    }

    printf("\n\n");


    // Przykład 2
    printf("Przykład 2\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }

    printf("\n\n");


    // Przykład 3
    printf("Przykład 3\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < 10 - i; j++)
            printf("X");
        printf("\n");
    }

    printf("\n\n");


    // Przykład 4
    printf("Przykład 4\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * (i + 1); j++)
            printf("X");
        printf("\n");
    }
    return 0;
}
