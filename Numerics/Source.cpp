#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DEC_TO_BIN
#define DEC_TO_HEX

void main()
{
	setlocale(LC_ALL, "rus");
	
#ifdef DEC_TO_BIN
	const int n = sizeof(unsigned long long int) * 8;	//Максимальная разрядность двоичного числа
	unsigned long long int decimal;
	cout << "Введите число: "; cin >> decimal;
	int bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;
	}*/
	for (; decimal; decimal /= 2, i++)bin[i] = decimal % 2;

	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif // DEC

#ifdef DEC_TO_HEX
	unsigned long long int decimal; //десятичное число, введенне с клавиатуры
	const int n = 16;
	int hex[n] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	for (--i; i >= 0; i--)
	{
		/*if (hex[i] >= 10) cout << char(55 + hex[i]);
		else cout << hex[i];*/
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
#endif // DEC_TO_HEX


}