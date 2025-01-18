#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main() {
	SetConsoleOutputCP(1250);

	// -------------------- Zadanie 1 -------------------- 
	// | Napisz program, w którym zaprezentujesz u¿ycie  |
	// | obiektu klasy std::string w celu inicjalizacji, |
	// | przechowywania danych wejœciowych u¿ytkownika,  |
	// | oraz kopiowania, ³¹czenia i okreœlenia d³ugoœci |
	// | ci¹gu tekstowego.                               |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 1.\n");

	char Name[100] = "Pawe³ Kowalski ";
	char Album[] = "324516";

	strcat(Name, Album);
	printf("Po³¹czone teksty: %s\n", Name);

	strcpy(Name, Album);
	printf("Skopiowany tekst: %s\n", Name);

	size_t Length_A = strlen(Name);
	printf("D³ugoœæ tekstu: %d", Length_A);

	printf("\n\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 2 -------------------- 
	// | W jêzyku C ka¿demu znakowi alfanumerycznemu     |
	// | odpowiada kod liczbowy nazywany kodem ASCII.    |
	// | Napisz program, który wypisze "fragment"        |
	// | tablicy ASCII, czyli wartoœci kodów znaków od   |
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
	// | Napisz program sprawdzaj¹cy ile jest spó³g³osek |
	// | i samog³osek we wprowadzonym tekœcie.           |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 3.\n");

	char Text_A[100];
	int Vowels = 0;
	int Consonants = 0;

	printf("Podaj tekst (program nie dzia³a dla polskich znaków): ");
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

	printf("Liczba samog³osek: %d\n", Vowels);
	printf("Liczba spó³g³osek: %d\n", Consonants);

	printf("\n");

	system("pause");
	printf("\n\n");

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// -------------------- Zadanie 4 -------------------- 
	// | Napisz program, który wypisuje strumieñ         |
	// | wejœciowy w odwrotnej kolejnoœci, zamieniaj¹c   |
	// | ma³e litery na du¿e.                            |
	// | Przyk³ad:                                       |
	// | Test -> TEST                                    |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// ---------------------------------------------------

	printf("Zadanie 4.\n");

	char Text_B[100];
	printf("Podaj tekst: ");
	fgets(Text_B, sizeof(Text_B), stdin);

	printf("Odwrócony tekst: ");
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
	// | Napisz program, który wczytuje jedn¹ dodatni¹   |
	// | liczbê ca³kowit¹ i wypisuje s³owami jej cyfry.  |
	// | Przyk³ad:                                       |
	// | 0 -> zero                                       |
	// | 928 -> dziewiêæ dwa osiem                       |
	// |                                                 |
	// |              Autor: Filip Lisowski              |
	// --------------------------------------------------- 

	printf("Zadanie 5.\n");

	char Number[100];

	printf("Podaj dodatni¹ liczbê ca³kowit¹: ");
	fgets(Number, sizeof(Number), stdin);

	printf("Podana powy¿ej liczba s³ownie: ");
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
			case '5': printf("piêæ "); 
				break;
			case '6': printf("szeœæ "); 
				break;
			case '7': printf("siedem "); 
				break;
			case '8': printf("osiem "); 
				break;
			case '9': printf("dziewiêæ "); 
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
	// | Mamy dwa ci¹gi znaków:                          |
	// | s1 = "abcdefghijklmnopqrstuvwxyz",              |
	// | s2 = "zyxwvutsrqponmlkjihgfedcba".              |
	// | Napisz program, który ka¿dej literze ci¹gu      |
	// | wejœciowego znalezionej na pozycji n w ci¹gu s1 |
	// | przypisuje odpowiadaj¹c¹ jej literê z ci¹gu s2  |
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