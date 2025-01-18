#include <stdio.h>
#include <Windows.h>
#include <string.h>

// Zadanie 1
int Factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * Factorial(n - 1);
}

// Zadanie 2
int Sequence(int n, int result) {
	if (n == 1) {
		return result;
	}
	return -Sequence(n - 1, result) * (n - 2);
}

// Zadanie 3
int NWD(int a, int b) {
	if (b == 0) {
		return a;
	}
	return NWD(b, a % b);
}

// Zadanie 5
void ConvertToBinary(int n) {
	if (n > 0) {
		ConvertToBinary(n / 2);
		printf("%d", n % 2);
	}
}

// Zadanie 6
int Fibonacci(int n)
{
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main() {
	SetConsoleOutputCP(1250);

	// -------------------- Zadanie 1 -------------------- 
	// | Napisz program, który wyznaczy silniê z liczby	 |
	// | n sposobem rekurencyjnym.						 |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 1.\n");

	int Var_N;
	int Result_A = 1;

	do {
		printf("Podaj liczbê: ");
		scanf_s("%d", &Var_N);

		if (Var_N < 0) {
			printf("Silnia nie jest zdefiniowana dla liczb ujemnych! Podaj liczbê wiêksz¹ lub równ¹ 0.\n");
		}
	} while (Var_N < 0);

	Result_A = Factorial(Var_N);

	printf("Silnia z %d wynosi %d\n", Var_N, Result_A);

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 2 -------------------- 
	// | Napisz program wyznaczaj¹cy n-ty wyraz ci¹gu    |
	// | zdefiniowanego przez nastêpuj¹cy wzór			 |
	// | rekurencyjny.									 |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 2.\n");

	int Var_M;
	int Result_B = -1;

	printf("Podaj numer wyrazu ciagu: ");
	scanf_s("%d", &Var_M);

	Result_B = Sequence(Var_M, Result_B);

	printf("Wyraz ciagu a_%d wynosi %d.\n", Var_M, Result_B);

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 3 -------------------- 
	// | Napisz program wyznaczaj¹cy NWD(a, b) metod¹    |
	// | rekurencyjn¹.									 |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	int Var_A, Var_B;

	printf("Zadanie 3.\n");

	printf("Podaj pierwsz¹ liczbê (a): ");
	scanf_s("%d", &Var_A);

	printf("Podaj drug¹ liczbê (b): ");
	scanf_s("%d", &Var_B);

	int Result = NWD(Var_A, Var_B);

	printf("Najwiêkszy wspólny dzielnik wynosi %d.\n", Result);

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 5 -------------------- 
	// | Wykorzystuj¹c funkcjê rekurencyjn¹ napisz		 |
	// | program wykonuj¹cy zamianê liczby w systemie    |
	// | dziesiêtnym na system dwójkowym.				 |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 
	
	printf("Zadanie 5.\n");

	int Num_A;

	printf("Podaj liczbê dziesiêtn¹: ");
	scanf_s("%d", &Num_A);

	if (Num_A == 0) {
		printf("Liczba 0 w systemie dziesiêtnym zapisana w systemie dwójkowym wynosi 0 \n");
		return 1;
	}

	printf("Liczba %d w systemie dziesiêtnym zapisana w systemie dwójkowym wynosi: ", Num_A);

	ConvertToBinary(Num_A);

	printf("\n\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 6 -------------------- 
	// | Napisz funkcjê rekurencyjn¹ wyznaczaj¹c¹ ci¹g   |
	// | Fibonacciego.									 |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 6.\n");

	int Var_D;

	printf("Podaj wyraz ci¹gu Fibonacciego: ");
	scanf_s("%d", &Var_D);

	if (Var_D < 0) {
		printf("Wyraz ci¹gu Fibonacciego nie mo¿e byæ mniejszy od 0. \n");
	}
	else {
		printf("%d wyraz ci¹gu Fibonacciego wynosi: %d \n", Var_D, Fibonacci(Var_D));
	}

	printf("\n\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 7 -------------------- 
	// | Wykorzystuj¹c funkcjê rekurencyjn¹ napisz		 |
	// | program wykonuj¹cy zamianê liczby w systemie    |
	// | dziesiêtnym na system dwójkowym.				 |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 7.\n");

	int Num_A;

	printf("Podaj liczbê dziesiêtn¹: ");
	scanf_s("%d", &Num_A);

	if (Num_A == 0) {
		printf("Liczba 0 w systemie dziesiêtnym zapisana w systemie dwójkowym wynosi 0 \n");
		return 1;
	}

	printf("Liczba %d w systemie dziesiêtnym zapisana w systemie dwójkowym wynosi: ", Num_A);

	ConvertToBinary(Num_A);

	printf("\n\n");

	system("pause");
	printf("\n\n");

	return 0;
}