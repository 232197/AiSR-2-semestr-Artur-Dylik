#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void plu()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "DODAWANIE:" << endl;
	cout << "Podaj A	" << endl;
	cin >> a;
	cout << "Podaj B	" << endl;
	cin >> b;
	c = a + b;
	cout << "\nWYNIK:" << endl;
	cout << a << " + " << b << " = " << c << endl;
}


void minu()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "ODEJMOWANIE:" << endl;
	cout << "Podaj odjemną A	" << endl;
	cin >> a;
	cout << "Podaj odjemnik B	" << endl;
	cin >> b;
	c = a - b;
	cout << "\nWYNIK:" << endl;
	cout << a << " - " << b << " = " << c << endl;
}
void razy()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "MNOŻENIE:" << endl;
	cout << "Podaj A	" << endl;
	cin >> a;
	cout << "Podaj B   " << endl;
	cin >> b;
	c = a * b;
	cout << "\nWYNIK:" << endl;
	cout << a << " X " << b << " = " << c << endl;
}
void przez()
{
	float a = 0;
	float b = 0;
	float c = 0;
	cout << "DZIELENIE:" << endl;
	cout << "Podaj dzielną A	" << endl;
	cin >> a;
	cout << "Podaj dzielnik B	" << endl;
	cin >> b;
	c = a / b;
	cout << "\nWYNIK:" << endl;
	cout << a << " / " << b << " = " << c << endl;
}

void menu()
{
	cout << "KALKULATOR" << endl;
	cout << "JAKIE WYKONAĆ DZIAŁANIE?" << endl;
	cout << "1 - DODAJ" << endl;
	cout << "2 - ODEJMIJ" << endl;
	cout << "3 - POMNÓŻ" << endl;
	cout << "4 - PODZIEL" << endl;
	cout << "k - KONIEC" << endl;
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
			plu();
			system("pause");
			break;

		case '2':
			minu();
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
			cout<<"KONIEC"<<endl;
			system("pause");
			exit(0);
			break;

			break;


		default:
			cout<<"CO DOKŁADNIE CHCESZ POLICZYĆ?"<<endl;
			system("pause");
			break;
		}
	}

	return 0;
}