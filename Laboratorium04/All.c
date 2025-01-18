#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main() {
	SetConsoleOutputCP(1250);

	// -------------------- Zadanie 1 -------------------- 
	// | Napisz program, w kt�rym zaprezentujesz u�ycie  |
	// | obiektu klasy std::string w celu inicjalizacji, |
	// | przechowywania danych wej�ciowych u�ytkownika,  |
	// | oraz kopiowania, ��czenia i okre�lenia d�ugo�ci |
	// | ci�gu tekstowego.                               |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 1.\n");

	char Name[100] = "Pawe� Kowalski ";
	char Album[] = "324516";

	strcat(Name, Album);
	printf("Po��czone teksty: %s\n", Name);

	strcpy(Name, Album);
	printf("Skopiowany tekst: %s\n", Name);

	size_t Length_A = strlen(Name);
	printf("D�ugo�� tekstu: %d", Length_A);

	printf("\n\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 2 -------------------- 
	// | W j�zyku C ka�demu znakowi alfanumerycznemu     |
	// | odpowiada kod liczbowy nazywany kodem ASCII.    |
	// | Napisz program, kt�ry wypisze "fragment"        |
	// | tablicy ASCII, czyli warto�ci kod�w znak�w od   |
	// | 'a' do 'z', od 'A' do 'Z' oraz od '0' do '9'.   |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 2.\n");

	printf("Znaki 'a - z':\n");
	for (char i = 'a'; i <= 'z'; i++) {
		printf("%c: %d\n", i, i);
	}

	printf("\nZnaki 'A - Z':\n");
	for (char i = 'A'; i <= 'Z'; i++) {
		printf("%c: %d\n", i, i);
	}

	printf("\nZnaki '0 - 9':\n");
	for (char i = '0'; i <= '9'; i++) {
		printf("%c: %d\n", i, i);
	}

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 3 -------------------- 
	// | Napisz program sprawdzaj�cy ile jest sp�g�osek |
	// | i samog�osek we wprowadzonym tek�cie.           |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 3.\n");

	char Text_A[100];
	int Vowels = 0;
	int Consonants = 0;

	printf("Podaj tekst (program nie dzia�a dla polskich znak�w): ");
	fgets(Text_A, sizeof(Text_A), stdin);

	for (int i = 0; i < strlen(Text_A); i++) {
		char Char_A = tolower(Text_A[i]);

		if (Char_A >= 'a' && Char_A <= 'z') {
			if (Char_A == 'a' || Char_A == 'e' || Char_A == 'i' || Char_A == 'o' || Char_A == 'u' || Char_A == 'y') {
				Vowels++;
			}
			else {
				Consonants++;
			}
		}
	}

	printf("Liczba samog�osek: %d\n", Vowels);
	printf("Liczba sp�g�osek: %d\n", Consonants);

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 4 -------------------- 
	// | Napisz program, kt�ry wypisuje strumie�         |
	// | wej�ciowy w odwrotnej kolejno�ci, zamieniaj�c   |
	// | ma�e litery na du�e.                            |
	// | Przyk�ad:                                       |
	// | Test -> TEST                                    |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// ---------------------------------------------------

	printf("Zadanie 4.\n");

	char Text_B[100];
	printf("Podaj tekst: ");
	fgets(Text_B, sizeof(Text_B), stdin);

	printf("Odwr�cony tekst: ");
	for (int i = 0; Text_B[i] > 0; i++) {
		if (Text_B[i] >= 'a' && Text_B[i] <= 'z') {
			printf("%c", Text_B[i] - ('a' - 'A'));
		}
		else {
			printf("%c", Text_B[i]);
		}
	}

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 5 -------------------- 
	// | Napisz program, kt�ry wczytuje jedn� dodatni�   |
	// | liczb� ca�kowit� i wypisuje s�owami jej cyfry.  |
	// | Przyk�ad:                                       |
	// | 0 -> zero                                       |
	// | 928 -> dziewi�� dwa osiem                       |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 5.\n");

	char Number[100];

	printf("Podaj dodatni� liczb� ca�kowit�: ");
	fgets(Number, sizeof(Number), stdin);

	printf("Podana powy�ej liczba s�ownie: ");
	for (int i = 0; i < strlen(Number); i++) {
		switch (Number[i]) {
			case '0': printf("zero "); 
				break;
			case '1': printf("jeden "); 
				break;
			case '2': printf("dwa "); 
				break;
			case '3': printf("trzy "); 
				break;
			case '4': printf("cztery "); 
				break;
			case '5': printf("pi�� "); 
				break;
			case '6': printf("sze�� "); 
				break;
			case '7': printf("siedem "); 
				break;
			case '8': printf("osiem "); 
				break;
			case '9': printf("dziewi�� "); 
				break;
		default: 
			break;
		}
	}
	printf("\n");

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 6 -------------------- 
	// | Mamy dwa ci�gi znak�w:                          |
	// | s1 = "abcdefghijklmnopqrstuvwxyz",              |
	// | s2 = "zyxwvutsrqponmlkjihgfedcba".              |
	// | Napisz program, kt�ry ka�dej literze ci�gu      |
	// | wej�ciowego znalezionej na pozycji n w ci�gu s1 |
	// | przypisuje odpowiadaj�c� jej liter� z ci�gu s2  |
	// | na pozycji n, natomiast nie znalezione znaki    |
	// | wypisuje bez zmian.                             |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 6.\n");

	char String_A[] = "abcdefghijklmnopqrstuvwxyz";
	char String_B[] = "zyxwvutsrqponmlkjihgfedcba";
	char Input[100];
	char Output[100];

	printf("Podaj tekst: ");
	fgets(Input, sizeof(Input), stdin);

	int i, j;
	for (i = 0; Input[i] != '\0'; i++) {
		char Char_B = Input[i];
		int Founds = 0;

		for (j = 0; String_A[j] != '\0'; j++) {
			if (Char_B == String_A[j]) {
				Output[i] = String_B[j];
				Founds = 1;
				break;
			}
		}

		if (!Founds) {
			Output[i] = Char_B;
		}
	}

	Output[i] = '\0';

	printf("Zakodowany tekst: %s", Output);

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	return 0;
}