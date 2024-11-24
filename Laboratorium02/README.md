# 📚 Laboratorium 02

## 📝 Opis
To repozytorium zawiera rozwiązanie zadań z Laboratorium 2. Wszystkie zadania znajdują się w osobnych plikach `(z rozszerzeniem .c)`. Dodatkowo dodałem plik ze wszystkimi zadaniami w `All.c`.  

## 📂 Zadania

### 1. Suma, średnia, maksymalna
Program, w którym użytkownik podaje liczby do momentu wpisania wartości mniejszej od 0, po czym wyświetla sumę, średnią oraz wartość maksymalną dla wprowadzonych liczb.

### 2. Liczby dodatnie i ujemne
Program, który pozwoli na wczytanie 10 liczb i wyznaczeniu ilości oraz sumy liczb ujemnych i dodatnich podanych przez użytkownika.

### 3. Suma parzystych
Program pozwalający obliczenie sumy wszystkich liczb parzystych w ciągu n liczb `(n > 0)`.

### 4. Suma losowych, parzystych
Program, który pozwoli użytkownikowi na wylosowanie n liczb z przedziału `(-10, 45)` i obliczy sumę wszystkich liczb parzystych w danym ciągu.

### 5. Średnia punktów studentów
Program, który obliczy średnią liczbę punktów w grupie z wykorzystaniem pętli while. Grupa laboratoryjna składa się z `n - studentów` (wartość `n` podaje użytkownik). Wprowadzamy liczbę punktów dla każdego studenta.

### 6. Ciągi liczb
Za pomocą pętli `for` wypisz na ekranie ciągi liczb:
  ৹  1, 2, 3, ..., 99, 100
  •  100, 99, ..., 2, 1, 0
  ৹  7, 14, 21, ..., 70, 77
  •  20, 18, ..., 2, 0

### 7. Trójkąty
W oparciu o podany fragment kodu, zmodyfikuj kod tak aby uzyskać następujące rezultaty:
```c
int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }
```

Przykład 1:        Przykład 2:        Przykład 3:        Przykład 4:
                                                         
XXXXXXXXXX                  X          XXXXXXXXXX                 XX
XXXXXXXXX                  XX           XXXXXXXXX                XXXX
XXXXXXXX                  XXX            XXXXXXXX               XXXXXX
XXXXXXX                  XXXX             XXXXXXX              XXXXXXXX
XXXXXX                  XXXXX              XXXXXX             XXXXXXXXXX
XXXXX                  XXXXXX               XXXXX            XXXXXXXXXXXX
XXXX                  XXXXXXX                XXXX           XXXXXXXXXXXXXX
XXX                  XXXXXXXX                 XXX          XXXXXXXXXXXXXXXX
XX                  XXXXXXXXX                  XX         XXXXXXXXXXXXXXXXXX
X                  XXXXXXXXXX                   X        XXXXXXXXXXXXXXXXXXXX
