#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	const int X = 5;
	int a[X] = { 1,2,3,4,5 };
	int* impostorA;
	int i = 1;
	impostorA = a;
	impostorA[1] = 3;
	impostorA[2] = 2;
	*(impostorA + 3) = 5;
	*(impostorA + 4) = 4;
	for (int i = 0; i < X; i++)
		cout << *(impostorA + i) << " ";
}