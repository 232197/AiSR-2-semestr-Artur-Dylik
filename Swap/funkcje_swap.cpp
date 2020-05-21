#include "funkcje_swap.h"


float srednia(int tab[][L_KOLUMN])
{
	printf_s("srednia\n");
	int srednia = { 0 };
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumny = 0; kolumny < L_KOLUMN; kolumny++)
		{
			srednia += tab[wiersze][kolumny];
		}
	}
	return (float)((float)srednia / (float)(L_WIERSZY * L_KOLUMN));
}

float mediana(int tab[][L_KOLUMN], int tab_sort[])
{
	printf_s("mediana\n");
	int licznik = 0;
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumny = 0; kolumny < L_KOLUMN; kolumny++)
		{
			tab_sort[licznik] = tab[wiersze][kolumny];
			++licznik;
		}
	}
	for (int kolumny = 0; kolumny < (L_WIERSZY * L_KOLUMN) - 1; kolumny++)
	{
		if (tab_sort[kolumny] < tab_sort[kolumny + 1])
		{
			int temp = tab_sort[kolumny];
			tab_sort[kolumny] = tab_sort[kolumny + 1];
			tab_sort[kolumny + 1] = temp;
		}
	}
	return tab_sort[L_KOLUMN * L_WIERSZY / 2];
}

void zamien_min_max(int tab[][L_KOLUMN])
{
	printf_s("zamien_min_max\n");
	int min[3] = { INT_MAX,0,0 };
	int max[3] = { 0,0,0 };
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumny = 0; kolumny < L_KOLUMN; kolumny++)
		{
			if (tab[wiersze][kolumny] < min[0])
			{
				min[0] = tab[wiersze][kolumny];
				min[1] = wiersze;
				min[2] = kolumny;
			}
			if (tab[wiersze][kolumny] > max[0])
			{
				max[0] = tab[wiersze][kolumny];
				max[1] = wiersze;
				max[2] = kolumny;
			}
		}
	}
	tab[max[1]][max[2]] = min[0];
	tab[min[1]][min[2]] = max[0];
}

void swap(int **a, int **b)
{
	//swaps pointers to the first element
	int temp = **a; **a = **b;
	**b = temp;
}

void swap_bracket(int a[][L_WIERSZY], int b[][L_WIERSZY], int ilosc_elementow_do_zamiany)
{
	//swaps n consequtive elements of the 2d array using [] operator
	int temp1 = NULL, temp2 = NULL;
	int i = 0, j = 0;
	while (ilosc_elementow_do_zamiany > 0) {
		temp1 = a[i][j];
		temp2 = b[i][j];
		a[i][j] = temp2;
		b[i][j] = temp1;
		++j;
		if (j == L_WIERSZY) {
			j = 0;
			i++;
		}
		ilosc_elementow_do_zamiany--;
	}
}

void swap_star(int **a, int **b, int ilosc_elementow_do_zamiany)
{
	//swaps n consequtive elements of the 2d array using * operator
	int temp1 = NULL, temp2 = NULL;
	int i = 0, j = 0;
	while (ilosc_elementow_do_zamiany > 0) {
		temp1 = *(*a + i * L_WIERSZY + j);
		temp2 = *(*b + i * L_WIERSZY + j);
		*(*a + i * L_WIERSZY + j) = temp2;
		*(*b + i * L_WIERSZY + j) = temp1;
		j++;
		if (j == L_WIERSZY) {
			i++;
			 j = 0;
		}
		ilosc_elementow_do_zamiany--;
	}
}