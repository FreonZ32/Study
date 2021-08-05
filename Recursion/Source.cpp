#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define CAB cout << endl;system("pause");system("cls");main();
#define NUMBIN cout << "\nВведите число: "; cin >> numberin;

int Factorial(int numberin);
double Power(double numberin, int count);
int Fibonachchi(int numberin);

void main()
{
	setlocale(LC_ALL, "rus");
	double numberin, pow;
	int choise, fact, lvl, facttest;
	cout << "Что хотите вычислить?\nФакториал числа - \t1\nВозведение в степень - \t2\nРяд Фибоначчи - \t3\nВыбираю - "; cin >> choise;
	if (choise == 1)
	{
		NUMBIN;
		facttest = numberin;
		if (numberin < 0)
		{
			cout << "Невозможно вычислить факториал отрицательногог числа!"; CAB;
		}
		else if (numberin == 0 || numberin == 1)
		{
			cout << "Факториал чисел 0 и 1 равен 1!"; CAB;
		}
		else if (facttest != numberin)
		{
			cout << "Факториал может быть только целочисленным!"; CAB;
		}
		fact = Factorial(numberin);
		cout << "Факториал числа: " << numberin << " равен: " << fact << endl;
	}
	else if (choise == 2)
	{
		cout << "Введите число и степень: "; cin >> numberin >> lvl;
		pow = Power(numberin, lvl),
			cout << "Число " << numberin << " в степени " << lvl << " равнo: " << pow;
	}
	else if (choise == 3)
	{
		NUMBIN;
		for (int i = 0; i < numberin; i++)
		{
			cout << Fibonachchi(i) << endl;
		}
	}
	else { cout << "Неверный вариант выбора!"; CAB; }
	CAB;
}

int Factorial(int numberin)
{

	if (numberin)
		return numberin * Factorial(numberin - 1);
	return 1;
}
double Power(double numberin, int count)
{
	if (count == 0)
		return 1;
	else if (count < 0)
		return 1 / numberin * Power(numberin, count + 1);
	else
		return numberin * Power(numberin, count - 1);
}
int Fibonachchi(int numberin)
{
	if (numberin == 0)
		return 0;
	else if (numberin == 1)
		return 1;
	else return Fibonachchi(numberin - 1) + Fibonachchi(numberin - 2);
}
