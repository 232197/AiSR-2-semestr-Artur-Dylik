#include <stdio.h>
#include <conio.h>
#include <iostream>


void plus()
{
	int a=0;
	int b=0;
	int c=0;
	printf_s("DODAWANIE:\n");
	printf_s("Podaj A   ");
	scanf_s("%d", &a);
	printf_s("\nPodaj B   ");
	scanf_s("%d", &b);
	c = a + b;
	printf_s("\nWYNIK:\n");
	printf_s("A+B=%d\n", c);
}


void minus()
{
	int a=0;
	int b=0;
	int c=0;
	printf_s("ODEJMOWANIE:\n");
	printf_s("Podaj odjemną A   ");
	scanf_s("%d", &a);
	printf_s("\nPodaj odjemnik B   ");
	scanf_s("%d", &b);
	c = a - b;
	printf_s("\nWYNIK:\n");
	printf_s("A-B=%d\n", c);
}
void razy()
{
	int a=0;
	int b=0;
	int c=0;
	printf_s("MNOŻENIE:\n");
	printf_s("Podaj A   ");
	scanf_s("%d", &a);
	printf_s("\nPodaj B   ");
	scanf_s("%d", &b);
	c = a * b;
	printf_s("\nWYNIK:\n");
	printf_s("AxB=%d\n", c);
}
void przez()
{
	float a=0;
	float b=0;
	float c=0;
	printf_s("DZIELENIE:\n");
	printf_s("Podaj dzielną A   ");
	scanf_s("%f", &a);
	printf_s("\nPodaj dzielnik B   ");
	scanf_s("%f", &b);
	c = a / b;
	printf_s("\nWYNIK:\n");
	printf_s("A/B=%.3f\n", c);
}

void menu()
{
	printf_s("KALKULATOR\n");
	printf_s("JAKIE WYKONAĆ DZIAŁANIE?\n");
	printf_s("1 - DODAJ\n");
	printf_s("2 - ODEJMIJ\n");
	printf_s("3 - POMNÓŻ\n");
	printf_s("4 - PODZIEL\n");
	printf_s("k - KONIEC\n");
}





int main(void)
{
	setlocale(LC_ALL, "pl_PL");
	char opcja = 0;
	while (opcja != 'k')
	{
		system("cls");
		menu();
		opcja = _getch();
		switch (opcja)
		{
		case '1':
			plus();
			system("pause");
			break;

		case '2':
			minus();
			system("pause");
			break;

		case '3':
			razy();
			system("pause");
			break;

		case '4':
			przez();
			system("pause");
			break;

		case 'k':
			printf_s("KONIEC\n");
			system("pause");
			exit(0);
			break;

			break;


		default:
			printf_s("CO DOKŁADNIE CHCESZ POLICZYĆ?\n ");
			system("pause");
			break;
		}
	}

	return 0;
}