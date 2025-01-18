# 📚 Laboratorium 04

## 📝 Opis
To repozytorium zawiera rozwiązanie zadań z Laboratorium 4. Wszystkie zadania znajdują się w `All.c`.  

## 📂 Zadania

### 4. Dana jest następująca funkcja rekurencyjna:
```
funkcja wynik(i)
      jeżeli i < 3
            zwróć 1 i zakończ;
      w przeciwnym razie
            jeżeli i mod 2 = 0
                  zwróć wynik(i - 3) + wynik(i - 1) + 1
            w przeciwnym razie
                  zwróć wynik(i - 1) mod 7
```
Przeanalizuj działanie funkcji rekurencyjnej i uzupełnij poniższą tabelę.

|    i     |  2  |  3  |  4  |  5  |  6  |  7  |  8  |
|----------|-----|-----|-----|-----|-----|-----|-----|
| wynik(i) | 1   | 1   | 3   | 3   | 5   | 5   | 9   |

### 8. Dana jest następująca funkcja rekurencyjna:
```
Dane:
x - liczba całkowita,
n - dodatnia liczba całkowita.
Funkcja F(x, n)
      jeżeli n = 1
            podaj wynik x i zakończ
      w przeciwnym razie
            jeżeli n mod 3 = 0
                  k ← F(x, n div 3)
(*)                     podaj wynik k*k*k i zakończ
            w przeciwnym razie
(**)                    podaj wynik x*F(x, n-1) i zakończ
```

### a) Podaj wszystkie wywołania rekurencyjne funkcji F oraz obliczany po każdym wywołaniu wynik, jeśli na początku wywołamy F(2, 10):

| Wywołanie | Wynik |
|-----------|-------|
| F(2, 10)  | 1024  |
| F(2, 9)   |  512  |
| F(2, 3)   |   8   |
| F(2, 1)   |   2   |

### b) Uzupełnij tabelę o brakujące elementy:
| x | n | wynik D(x, n)|
|---|---|--------------|
| 2 | 2 |      4       |
| 2 | 3 |      8       |
| 3 | 3 |      27      |
| 5 | 2 |      25      |
| 2 | 8 |      256     |
| 10| 10|      1024    |
