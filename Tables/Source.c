#include<iostream>
#include <Windows.h>
using namespace std;

//#define BEAUTIFUL_MULTIPLICATION //таблица умножения в рамке
//#define MULTIPLICATION //таблица умножения
//#define PIFAGOR //таблица пифагора

//#define tab "\t\t\t\t\t\t\t\t\t\t\t"

#define FORE

void main()
{

	setlocale(LC_ALL, "rus");
	int k;

#ifdef BEAUTIFUL_MULTIPLICATION
	for (int i = 0; i < 97; i++)
	{
		cout << char(219);
	}
	putchar('\n');
	for (int i = 1; i < 11; i++)
	{
		cout << char(219) << '\t';
		for (int j = 1; j < 11; j++)
		{
			k = i * j;
			cout << j << "*" << i << "=" << k;
			if (k < 100)
				cout << '\t';
			else
				cout << "  ";
		}
		cout << '\t' << char(219);
		putchar('\n');
	}
	for (int i = 0; i < 97; i++)
	{
		cout << char(219);
	}
#endif // BEAUTIFUL_MULTIPLICATION

#ifdef MULTIPLICATION
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			k = i * j;
			cout << j << "*" << i << "=" << k << "\t";
		}
		putchar('\n');
	}
#endif // MULTIPLICATION

#ifdef PIFAGOR
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			k = i * j;
			cout << k << '\t';
		}
		printf("\n");
	}
#endif // PIFAGOR

#ifdef FORE
	const int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			k = i * j;
			if (i < 10) cout << " ";
			cout << i << " *";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (k < 100) cout << " ";
			else if (k < 10) cout << " ";
			cout << k << endl;
		}
	}
#endif // FORE

}