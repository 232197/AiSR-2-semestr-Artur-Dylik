#include "menu.h"

void wprowadz_dane(int tab[][L_KOLUMN])
{
	printf_s("wprowadz_dane\n");
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumny = 0; kolumny < L_KOLUMN; kolumny++)
		{
			scanf_s("%d", &tab[wiersze][kolumny]);
		}
	}
}

void wprowadz_dane_losowo(int tab[][L_KOLUMN])
{
	printf_s("wprowadz_dane_losowo\n");
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumny = 0; kolumny < L_KOLUMN; kolumny++)
		{
			tab[wiersze][kolumny] = (rand() % 100) + 0;
		}
	}
}

void wyswietl_dane(int tab[][L_KOLUMN])
{
	int temp = 0;
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumny = 0; kolumny < L_KOLUMN; kolumny++)
		{
			printf_s("%4d", tab[wiersze][kolumny]);
		}
		printf_s("\n");
	}
	printf_s("\n");
}

void wyswietl_dane_posortowane(int tab[])
{
	printf_s("wyswietl_dane_posortowane\n");
}

void zapisz_dane(int tab[][L_KOLUMN])
{
	printf_s("zapisz_dane\n");
}

void wczytaj_dane(int tab[][L_KOLUMN])
{
	printf_s("wczytaj_dane\n");
}

void menu(void)
{
	printf_s("\n");
	printf_s("1 - wprowadz dane\n");
	printf_s("2 - wyswietl dane\n");
	printf_s("3 - oblicz srednia i mediane\n");
	printf_s("4 - zamien wartosc minimalna z maksymalna\n");
	printf_s("5 - generuj dane losowo\n");
	printf_s("z - zapisz dane do pliku\n");
	printf_s("w - wczytaj dane z pliku\n");
	printf_s("b - bracket swap\n");
	printf_s("s - star swap\n");
	printf_s("k - koniec programu\n");
	printf_s("\n");
}