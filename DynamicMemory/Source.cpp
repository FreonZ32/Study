#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

#ifdef DYNAMIC_MEMORY_1
void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
int* puch_back(int arr[], int& n, int value);
int* puch_front(int arr[], int& n, int value);
int* insert(int arr[], int& n, int indif, int value);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int indif);
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
void D_FillRand(int* arr2[], int& rows, int& cols);
void D_Print(int* arr2[], int& rows, int& cols);
//void D_puch_back_cols(int arr2[], int& rows, int& cols, int value);
#endif // DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
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
	if (indif >= n)cout << "Индекс превышает размер массива!";
	else
	{
		cout << "3)Удаление значения по индификатору : \t";
		arr = erase(arr, n, indif);
		Print(arr, n);
	}

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	int rows = 0, cols = 0;
	int value;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество столбцов: "; cin >> cols;
	int** arr2 = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr2[i] = new int[cols];
	}
	//////////////////////////////////////////////////////////////////
	D_FillRand(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	cout << &arr2 << endl;
	cout << "Введите доп значение: "; cin >> value;
	cols += value;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols - 1; j++)
		{
			buffer[i][j] = arr2[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;
	for (int i = 0; i < rows; i++)
	{
		for (int j = cols - value; j < cols; j++)
		{
			arr2[i][j] = 0;
		}
	}
	cout << &arr2 << endl;
	D_Print(arr2, rows, cols);
	//////////////////////////////////////////////////////////////////
	for (int i = 0; i < rows; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
}

#ifdef DYNAMIC_MEMORY_1
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
int* puch_back(int arr[], int& n, int value)
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
		buffer[i + 1] = arr[i];
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
	for (int i = 0, k = 0; i < n; i++, k++)
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
	int* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
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
	int* buffer = new int[n - 1];
	for (int i = 0, k = 0; i < n; i++)
	{
		if (i == indif)k++;
		buffer[i] = arr[i + k];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}

#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
void D_FillRand(int* arr2[], int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = rand() % 20;
		}
	}
}
void D_Print(int* arr2[], int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}
void D_puch_back_cols(int arr2, int& rows, int& cols, int value)
{
	
}
#endif // DYNAMIC_MEMORY_2
