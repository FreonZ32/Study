#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int Factorial(int numberin);
int Power(int numberin, int count);

void main()
{
	setlocale(LC_ALL, "rus");
	int numberin,lvl;
	cout << "¬ведите число: "; cin >> numberin;
	cout << "¬ведите степень: "; cin >> lvl;

	int fact = Factorial(numberin);
	int pow = Power(numberin, lvl);
	cout << "‘акториал числа: " << numberin << " равен: " << fact << endl;
	cout << "„исло " << numberin << " в степени " << lvl << " равенo: " << pow;
}

int Factorial(int numberin)
{
	if (numberin > 0)
		return numberin * Factorial(numberin - 1);
	return 1;
}
int Power(int numberin,int count)
{
	if (count > 0)
	return numberin * Power(numberin, count - 1);
	return 1;
}
