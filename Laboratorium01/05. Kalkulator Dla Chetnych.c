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
