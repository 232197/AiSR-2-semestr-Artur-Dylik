#pragma once
#ifndef __funkcje_swap_H__
#define __funkcje_swap_H__


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define L_WIERSZY 4
#define L_KOLUMN  4

#define INT_MAX 2147483647

float mediana(int tab[][L_KOLUMN], int tab_sort[]);
float srednia(int tab[][L_KOLUMN]);
void zamien_min_max(int tab[][L_KOLUMN]);
void swap(int **a, int **b);
void swap_bracket(int a[][L_WIERSZY], int b[][L_WIERSZY], int ilosc_elementow_do_zamiany = 1);
void swap_star(int **a, int **b, int ilosc_elementow_do_zamiany = 1);


#endif /* __funkcje_swap_H__*/
