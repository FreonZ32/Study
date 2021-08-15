#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define DECIMAL_N_S
//#define HEXADECIMAL_N_S
//#define HEXADECIMAL_N_S2
//#define HEXADECIMAL_N_S3

void main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 32;
	int arr[SIZE]{};
	int ten,sixteen;

#ifdef DECIMAL_N_S
	cout << "Введите десятичное число: "; cin >> ten;
	for (int i = 0; i < SIZE; i++)
	{
		if (ten & 1)arr[i] = 2;
		else arr[i] = 1;
		if (ten == 1) i = SIZE - 1;
		else ten = ten / 2;
	}
	cout << "Двоичное число: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		if (arr[i] == 0);
		else if (arr[i] == 2) cout << "1";
		else cout << "0";
	}
#endif // DECIMAL_N_S

#ifdef HEXADECIMAL_N_S
	cout << "Введите десятичное число: "; cin >> sixteen;
	int num, abc;
	for (int i = 0; i < SIZE; i++)
	{
		if (sixteen == 0)
			arr[i] = 16;
		else arr[i] = sixteen % 16;
		sixteen = sixteen / 16;
	}
	cout << "Шестнадцетеричное число: 0x";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		switch (arr[i])
		{
		case (10): cout << "A"; break;
		case (11): cout << "B"; break;
		case (12): cout << "C"; break;
		case (13): cout << "D"; break;
		case (14): cout << "E"; break;
		case (15): cout << "F"; break;
		case (16): cout << ""; break;
		default: cout << arr[i];
		}
	}
#endif // HEXADECIMAL_N_S

#ifdef HEXADECIMAL_N_S2
	cout << "Введите десятичное число: "; cin >> sixteen;
	bool sw = true;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = sixteen % 16;
		sixteen = sixteen / 16;
	}
	cout << "Шестнадцетеричное число: 0x";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		for (int j = SIZE - 1; sw; j--)
			if (arr[j] == 0)
			{
				cout << ""; i--;
			}
			else sw = false;
		if (arr[i] >= 10)
			cout << char(55 + i);
		else cout << arr[i];
		/*switch (arr[i])
		{
		case (10): cout << "A"; break;
		case (11): cout << "B"; break;
		case (12): cout << "C"; break;
		case (13): cout << "D"; break;
		case (14): cout << "E"; break;
		case (15): cout << "F"; break;
		default: cout << arr[i];
		}*/
	}
#endif // HEXADECIMAL_N_S2

#ifdef HEXADECIMAL_N_S3
cout << "Введите десятичное число: "; cin >> sixteen;
int i = 0;
for (; sixteen; arr[i] = sixteen % 16, sixteen /= 16, i++) {}
cout << "Шестнадцетеричное число: 0x";
for (i--; i >= 0; i--)
{
	if (arr[i] >= 10) cout << char(55 + arr[i]);
	else cout << arr[i];
} 
#endif // HEXADECIMAL_N_S3

}