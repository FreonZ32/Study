#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define DEC

void main()
{
	setlocale(LC_ALL, "rus");
	
	const int n = sizeof(unsigned long long int)*8;	//Максимальная разрядность двоичного числа
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
}