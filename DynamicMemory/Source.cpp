#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
void puch_back(int*& arr, int& n, int value);
void puch_front(int*& arr, int& n, int value);
void insert(int*& arr, int& n, int indif, int value);
void pop_back(int*& arr, int& n);
void pop_front(int*& arr, int& n);
void erase(int*& arr, int& n, int indif);

void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "������� �������������� ��������: "; cin >> value;
	cout << "1)������� �������� � �����: \t\t";
	puch_back(arr, n, value);
	Print(arr, n);
	cout << "2)������� �������� � ������: \t\t";
	puch_front(arr, n, value);
	Print(arr, n);
	int indif;
	cout << "������� ����������� �������: "; cin >> indif;
	if (indif >= n)cout << "������ ��������� ������ �������!";
	else
	{
		cout << "3)������� �������� �� ������������: \t";
		insert(arr, n, indif, value);
		Print(arr, n);
	}
	cout << "4)�������� �������� � �����: \t\t";
	pop_back(arr, n);
	Print(arr, n);
	cout << "5)�������� �������� � ������: \t\t";
	pop_front(arr, n);
	Print(arr, n);
	cout << "������� ����������� ��������: "; cin >> indif;
	if (indif >= n)cout << "������ ��������� ������ �������!";
	else
	{
		cout << "3)�������� �������� �� ������������ : \t";
		erase(arr, n, indif);
		Print(arr, n);
	}
	delete[] arr;
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}cout << "|" << endl;
}
void puch_back(int*& arr, int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
}
void puch_front(int*& arr, int& n, int value)
{
	int* buffer = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
}
void insert(int*& arr, int& n, int indif, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0, k = 0; i < n; i++, k++)
	{
		if (i == indif)k++;
		buffer[k] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[indif] = value;
	n++;
}
void pop_back(int*& arr, int& n)
{
	n--;
	int* buffer = new int[n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	//return arr;
}
void pop_front(int*& arr, int& n)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	n--;
}
void erase(int*& arr, int& n, int indif)
{
	int* buffer = new int[n - 1];
	for (int i = 0, k = 0; i < n; i++)
	{
		if (i == indif)k++;
		buffer[i] = arr[i + k];
	}
	delete[] arr;
	arr = buffer;
	n--;
}
