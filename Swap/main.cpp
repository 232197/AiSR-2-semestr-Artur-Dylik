#include "menu.h"
#include "funkcje_swap.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define L_WIERSZY 4
#define L_KOLUMN  4

#define INT_MAX 2147483647

int main()
{
	srand(time(NULL));
	int tablica[L_WIERSZY][L_KOLUMN] = { {1, 2, 3, 4 }, {1, 2, 3, 4 },  {1, 2, 3, 4 },  {1, 2, 3, 4 } };
	int tablica1[L_WIERSZY][L_KOLUMN] = {{5,5,5,5 }, {5,5,5,5  },  {5,5,5,5 },  {5,5,5,5 } };
	int* ptr = &tablica[0][0];
	int* ptr1 = &tablica1[0][0];
	int tab_sort_temp[L_WIERSZY * L_KOLUMN] = { 0 };
	char opcja = 0;

	while (opcja != 'k')
	{
		menu();
		opcja = _getch();

		switch (opcja)
		{
		case '1':
			wprowadz_dane(tablica);
			break;

		case '2':
			wyswietl_dane(tablica);
			break;

		case '3':

			printf_s("Srednia wartosci znajdujacych sie w tabeli wynosi: %f\n", srednia(tablica));
			printf_s("Mediana wartosci znajdujacych sie w tabeli wynosi: %f\n", mediana(tablica, tab_sort_temp));
			break;

		case '4':
			zamien_min_max(tablica);
			printf_s("Zamieniono wartosc minimalna z maksymalna.\n");
			break;

		case '5':
			wprowadz_dane_losowo(tablica);
			printf_s("Wygenerowano dane losowo.\n");
			break;

		case 'z':
			zapisz_dane(tablica);
			printf_s("Zapisano dane do pliku.\n");
			break;

		case 'w':
			wczytaj_dane(tablica);
			printf_s("Odczytano dane z pliku.\n");
			break;

		case 'k':
			//zakonczenie programu
			break;
		case 'b':
			printf_s("bracket swap \n\n");
			printf_s("przed swapem\n");
			printf_s("tablica 1\n");
			wyswietl_dane(tablica);
			printf_s("tablica 2\n");
			wyswietl_dane(tablica1);
			swap_bracket(tablica, tablica1,8);
			printf_s("po swapie\n");
			printf_s("tablica 1\n");
			wyswietl_dane(tablica);
			printf_s("tablica 2\n");
			wyswietl_dane(tablica1);
			break;

		case 's':
			printf_s("star swap \n\n");
			printf_s("przed swapem\n");
			printf_s("tablica 1\n");
			wyswietl_dane(tablica);
			printf_s("tablica 2\n");
			wyswietl_dane(tablica1);
			swap_star(&ptr, &ptr1, 8);
			printf_s("po swapie\n");
			printf_s("tablica 1\n");
			wyswietl_dane(tablica);
			printf_s("tablica 2\n");
			wyswietl_dane(tablica1);
			break;

		default:
			printf_s("Wybierz wlasciwa opcje.\n\n");
			break;
		}
	}

	return 0;
}