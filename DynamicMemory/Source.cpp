#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
int* puch_back(int arr[], int &n, int value);
int* puch_front(int arr[], int& n, int value);
int* insert(int arr[], int& n,int indif, int value);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int indif);

void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	//int* mainarr = &arr[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите дополнительное значение: "; cin >> value;
	cout << "1)Вставка значения в конец: \t\t";
	arr = puch_back(arr, n, value);
	Print(arr, n);
	cout << "2)Вставка значения в начало: \t\t";
	arr = puch_front(arr, n, value);
	Print(arr, n);
	int indif;
	cout << "Введите индификатор вставки: "; cin >> indif;
	if (indif >= n)cout << "Индекс превышает размер массива!"; 
	else 
	{
		cout << "3)Вставка значения по индификатору: \t";
		arr = insert(arr, n, indif, value);
		Print(arr, n);
	}
	cout << "4)Удаление значения в конце: \t\t";
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << "5)Удаление значения в начале: \t\t";
	arr = pop_front(arr, n);
	Print(arr, n);
	cout << "Введите индефикатор удаления: "; cin >> indif;
	if(indif >=n)cout << "Индекс превышает размер массива!";
	else
	{
		cout << "3)Удаление значения по индификатору : \t";
		arr = erase(arr, n, indif);
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
		cout << arr[i] << "\t";
	}cout << "|" << endl;
}
int* puch_back(int arr[], int &n, int value)
{
	//1)
	int* buffer = new int[n + 1];
	//2)
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)
	delete[] arr;
	//4)
	arr = buffer;
	//5)
	arr[n] = value;
	n++;
	return arr;
}
int* puch_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int* insert(int arr[], int& n, int indif, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0, k = 0; i < n; i++,k++)
	{
		if (i == indif)k++;
		buffer[k] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[indif] = value;
	n++;
	return arr;
}
int* pop_back(int arr[], int& n)
{
	n--;
	int* buffer = new int[n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	return arr;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[n-1];
	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
int* erase(int arr[], int& n, int indif)
{
	int* buffer = new int[n-1];
	for (int i = 0,k = 0; i < n; i++)
	{
		if (i == indif)k++;
		buffer[i] = arr[i+k];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
