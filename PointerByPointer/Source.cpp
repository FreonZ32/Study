#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int a = 2;
	int* pa = &a;
	cout << &a << endl;
	cout << pa << endl;
	cout << &pa << endl;
	int** ppa = &pa;
	cout << ppa << endl;
}