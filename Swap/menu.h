#pragma once
#ifndef __menu_H__
#define __menu_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define L_WIERSZY 4
#define L_KOLUMN  4

#define INT_MAX 2147483647

void wprowadz_dane(int tab[][L_KOLUMN]);
void wprowadz_dane_losowo(int tab[][L_KOLUMN]);
void wyswietl_dane(int tab[][L_KOLUMN]);
void wyswietl_dane_posortowane(int tab[]);
void zapisz_dane(int tab[][L_KOLUMN]);
void wczytaj_dane(int tab[][L_KOLUMN]);
void menu(void);

#endif /*__menu_H__*/
