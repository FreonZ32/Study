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
	cout << "������� �����: "; cin >> numberin;
	cout << "������� �������: "; cin >> lvl;

	int fact = Factorial(numberin);
	int pow = Power(numberin, lvl);
	cout << "��������� �����: " << numberin << " �����: " << fact << endl;
	cout << "����� " << numberin << " � ������� " << lvl << " �����o: " << pow;
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
