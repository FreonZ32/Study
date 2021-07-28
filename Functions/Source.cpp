#include<iostream>
using namespace std;

//Прототип функции / Function prototype
int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите 2 числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

//Реализация, определение функции / Implementation, function definition
int Add(int a, int b)	//Сложение
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)	//Вычитание
{
	return a - b;
}
int Mul(int a, int b)	//Умножение
{
	return a * b;
}
int Div(int a, int b)	//Деление
{
	return a / b;
}

