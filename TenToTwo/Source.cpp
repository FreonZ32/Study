#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 20;
	int arr[SIZE]{};
	int ten;
	cout << "������� ���������� �����: "; cin >> ten;
	for (int i = 0; i < SIZE; i++)
	{	
		if (ten&1)arr[i] = 2;
		else arr[i] = 1;
		if (ten == 1) i = SIZE - 1;
		else ten = ten / 2;
	}
	cout << "�������� �����: ";
	for (int i = SIZE-1; i >= 0; i--)
	{
		if (arr[i] == 0);
		else if (arr[i] == 2) cout << "1";
		else cout << "0";
	}
}