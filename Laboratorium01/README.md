# 📚 Zadania w języku C

## 📝 Opis
To repozytorium zawiera rozwiązanie zadań z Laboratorium 1. Wszystkie zadania znajdują się w osobnych plikach (z rozszerzeniem .c). Dodatkowo dodałem plik ze wszystkimi zadaniami w `All.c`.  

## 📂 Zadania

### 1. Numer Albumu
Program, który wypisuje numer albumu studenta.

```c
#include <stdio.h>

int main() {
    printf("Numer albumu: 134942\n");
    return 0;
}
```

<br></br>
### 2. Parzystość Liczb
Program, który sprawdza, czy podana liczba całkowita, wczytana z klawiatury jest parzysta, czy nieparzysta.

```c
#include <stdio.h>

int main() {
    printf("Zadanie 2.\n");
    printf("Podaj liczbę całkowitą: ");
    scanf_s("%d", &Num2);
    
    if (Num2 % 2 == 0) {
        printf("\nLiczba jest parzysta.\n");
    }
    else {
        printf("\nLiczba jest nieparzysta.\n");
    }
}
```

<br></br>
### 3. Porównanie Liczb
Program, który pozwala użytkownikowi na wprowadzenie dwóch liczb zmiennoprzecinkowych, a następnie zwraca informację, która z wprowadzonych liczb jest liczbą większą.

```c
#include <stdio.h>

int main() {
    float Num3_1, Num3_2;
    printf("Zadanie 3.\n");
    printf("Podaj pierwszą liczbę: ");
    scanf_s("%f", &Num3_1);
    printf("Podaj drugą liczbę: ");
    scanf_s("%f", &Num3_2);
    
    if (Num3_1 > Num3_2) {
        printf("\nPierwsza liczba (%.2f) jest większa.\n", Num3_1);
    }
    else if (Num3_1 < Num3_2) {
        printf("\nDruga liczba (%.2f) jest większa.\n", Num3_2);
    }
    else {
        printf("\nObie liczby są równe.\n");
    }
}
```

<br></br>
### 4. Średnia Arytmetyczna
Program, który pozwala użytkownikowi na wprowadzenie czterech liczb zmiennoprzecinkowych, a następnie zwraca średnią arytmetyczną z wprowadzonych liczb.

```c
#include <stdio.h>

int main() {
    printf("Zadanie 4.\n");
    float Num4_1, Num4_2, Num4_3, Num4_4, Avg;
    printf("Podaj cztery liczby oddzielone spacjami: ");
    scanf_s("%f %f %f %f", &Num4_1, &Num4_2, &Num4_3, &Num4_4);
    
    Avg = (Num4_1 + Num4_2 + Num4_3 + Num4_4) / 4;
    printf("\nŚrednia arytmetyczna: %.2f\n", Avg);
}
```

<br></br>
### 5. Kalkulator (dodałem również podpunkty z zadania dla chętnych)
Program wykonujący działanie matematyczne `(+, -, /, *)` na dwóch liczbach podanych z klawiatury, wykorzystując instrukcję switch. Wyznaczanie pierwiastek kwadratowy za pomocą `sqrt()` z `math.h`, podnieś liczbę do potęgi używając `pow(a, b)`, oblicz wartość bezwzględną za pomocą `abs()` lub przez sprawdzenie `if (a < 0) a = -a;`, a także oblicz funkcje trygonometryczne takie jak `sin()`, `cos()`, `tan()` i `atan()` z `math.h`, pamiętając, aby przeliczyć kąt z stopni na radiany.

```c
// -----------------------------------------
// 
//       Better Calculator Project
//	  Author:  Filip Lisowski
//
// -----------------------------------------

// Dołączenie odpowiednich bibliotek.
#include <windows.h>
#include <stdio.h>
#include <math.h>

// Zdefiniowanie liczby PI.
#define PI 3.14159265358979323846

int main() {
	// Wyświetlanie polskich znaków.
	SetConsoleOutputCP(1250);

	// Zainicjowanie zmiennych.
	int Choice;
	int Degrees;
	double Radians;
	double Num1, Num2, Result;

	while (1) {
		// Wyświetlenie menu i jego zawartości.
		printf("-----------------------------------------\n\n");
		printf("      Better Calculator Project\n");
		printf("       Author:  Filip Lisowski\n\n");
		printf("-----------------------------------------\n\n");
		printf("Wybierz operację:\n");
		printf("1. Dodawanie (+)\n");
		printf("2. Odejmowanie (-)\n");
		printf("3. Mnożenie (*)\n");
		printf("4. Dzielenie (/)\n");
		printf("5. Pierwiastek kwadratowy (sqrt)\n");
		printf("6. Potęgowanie (x^n)\n");
		printf("7. Wartość bezwględna (|x|)\n");
		printf("8. Funkcje trygonometryczne (sin, cos, tg, ctg)\n");
		printf("9. Wyjdź (X)\n");

		// Wprowadzenie liczby odpowiedzialnej za wywołanie odpowiedniej funkcji kalkulatora.
		printf("\nWybierz pozycję (1 - 9): ");
		scanf_s("%d", &Choice);
		system("cls");

		// Pętla odpowiedzialna za sprawdzenie czy wprowadzona liczba należy do zadanego przedziału. W przeciwnym wypadku wyświetli 
		// komunikat o błędzie i poprosi o ponowne wprowadzenie liczby z zadanego przedziału.
		if (Choice < 1 || Choice > 9) {
			printf("Błąd: Wybierz liczbę całkowitą z zakresu od 1 do 9.\n");
			system("pause");
			system("cls");
			continue;
		}

		// Czyszczenie konsoli
		system("cls");

		// Jeśli wprowadzona liczba to 9, program zostanie wyłączony.
		if (Choice == 9) {
			printf("Wyłączanie programu...\n");
			break;
		}

		// Sprawdzenie jaka liczba została wprowadzona. Jeśli jest to liczba z zakresu od 1 do 4 program poprosi o wprowadzenie dwóch
		// liczb. Dla następnych opcji potrzebna nam jest tylko jedna liczba, wykluczając przypadek z potęgami ale tam jest zainicjowane 
		// wprowadzenie dwóch liczb.
		if (Choice >= 1 && Choice <= 4) {
			printf("Pierwsza liczba: ");
			scanf_s("%lf", &Num1);

			printf("Druga liczba: ");
			scanf_s("%lf", &Num2);
		}
		
		// Zainicjowanie instrukcji case.
		switch (Choice) {

		// Dodawanie.
		case 1:
			Result = Num1 + Num2;
			printf("Wynik %.2lf + %.2lf to: %.2lf\n", Num1, Num2, Result);
			break;

		// Odejmowanie.
		case 2:
			Result = Num1 - Num2;
			printf("Wynik %.2lf - %.2lf to: %.2lf\n", Num1, Num2, Result);
			break;

		// Mnożenie.
		case 3:
			Result = Num1 * Num2;
			printf("Wynik %.2lf * %.2lf to: %.2lf\n", Num1, Num2, Result);
			break;

		// Dzielenie.
		case 4:
			if (Num1 != 0 && Num2 != 0) {
				Result = Num1 / Num2;
				printf("Wynik %.2lf / %.2lf to: %.2lf\n", Num1, Num2, Result);
			}
			else {
				printf("Błąd! Nie można dzielić przez zero!\n");
			}
			break;

		// Pierwiastkowanie.
		case 5:
			printf("Wprowadź liczbę, której pierwiastek kwadratowy chcesz obliczyć: ");
			scanf_s("%lf", &Num1);
			if (Num1 >= 0) {
				Result = sqrt(Num1);
				printf("Pierwiastek kwadratowy z %.2lf to: %.2lf\n", Num1, Result);
			}
			else {
				printf("Błąd! Pierwiastek kwadratowy z liczby ujemnej nie istnieje");
			}
			break;
		
		// Potęgowanie.
		case 6:
			printf("Wprowadź liczbę, którą chcesz podnieść do potęgi: ");
			scanf_s("%lf", &Num1);
			printf("Wprowadź wartość potęgi: ");
			scanf_s("%lf", &Num2);
			Result = pow(Num1, Num2);
			printf("Wynik %.2lf ^ %.2lf to: %.2lf\n", Num1, Num2, Result);
			break;
		
		// Wyznaczanie wartości bezwględnej.
		case 7:
			printf("Wprowadź liczbę, której wartość bezwzględną chcesz wyznaczyć: ");
			scanf_s("%lf", &Num1);
			Result = fabs(Num1); // Użycie funkcji fabs(). Różnica między abs() a fabs() jest taka, że fabs() zawsze zwraca liczbę zmiennoprzecinkową.
			printf("Wartośc bezwzględna (z użyciem funkcji fabs): %.2lf\n", Result);

			if (Num1 < 0) {
				Result = -Num1;
			}
			else {
				Result = Num1;
			}
			printf("Wartość bezwzględna (bez użycia funkcji fabs): %.2lf\n", Result);
			break;

		// Wyznaczanie wartości kątów (sin, cos, tg, ctg).
		case 8:
			printf("Wprowadź kąt w stopniach: ");
			scanf_s("%d", &Degrees);
			Radians = Degrees * (PI / 180.00); // Przeliczanie stopni na radiany.

			printf("sin(%d) = %.2lf\n", Degrees, sin(Radians));
			printf("cos(%d) = %.2lf\n", Degrees, cos(Radians));
			printf("tg(%d) = %.2lf\n", Degrees, tan(Radians));
			if (tan(Radians) != 0) {
				printf("ctg(%d) = %.2lf\n", Degrees, 1/tan(Radians));
			}
			else {
				printf("ctg(%d) nie istnieje!\n", Degrees);
			}
			break;

		}

		system("pause");
		system("cls");

	}

	return 0;
}
```
