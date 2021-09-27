#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

template<typename T>
void allocate(T**& arr2, int& rows, int& cols);

void FillRand(int arr[], const unsigned int n);
template<typename T>
void D_FillRand(T** arr2, const unsigned int rows, const unsigned int cols);

void Print(int arr[], const unsigned int n);
template<typename T>
void Print2_0(T** arr2, const unsigned int rows, const unsigned int cols);

int* push_back(int arr[], int& n, int value);
template<typename T>
void push_row_back2_0(T**& arr2, int& rows, int& cols);

int* puch_front(int arr[], int& n, int value);
template<typename T>
void push_row_front2_0(T**& arr2, int& rows, int& cols);

int* insert(int arr[], int& n, int indif, int value);
template<typename T>
void insert_row2_0(T**& arr2, int& rows, int& cols, int index);

int* pop_back(int arr[], int& n);
template<typename T>
void pop_row_back2_0(T**& arr2, int& rows, int& cols);

int* pop_front(int arr[], int& n);
template<typename T>
void pop_row_front2_0(T**& arr2, int& rows, int& cols);

int* erase(int arr[], int& n, int indif);
template<typename T>
void erase_row2_0(T**& arr2, int& rows, int& cols, int index);

template<typename T>
void clear(T**& arr2, int& rows, int& cols);

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Enter the size of the array:"; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Enter additional value:"; cin >> value;
	cout << "1)Insertion to the end: \t\t";
	arr = puch_back(arr, n, value);
	Print(arr, n);
	cout << "2)Insertion to the beginning: \t\t";
	arr = puch_front(arr, n, value);
	Print(arr, n);
	int indif;
	cout << "Enter Insert Indifier: "; cin >> indif;
	if (indif >= n)cout << "Index exceeds the size of the array!";
	else
	{
		cout << "3)Insertion values ​​for the Indicator: \t";
		arr = insert(arr, n, indif, value);
		Print(arr, n);
	}
	cout << "4)Deleting value at the end: \t\t";
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << "5)Delete value at the beginning: \t\t";
	arr = pop_front(arr, n);
	Print(arr, n);
	cout << "Enter the deletion index: "; cin >> indif;
	if (indif >= n)cout << "Index exceeds the size of the array!";
	else
	{
		cout << "3)Deleting the value of the Indicator: \t";
		arr = erase(arr, n, indif);
		Print(arr, n);
	}
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	int rows = 0, cols = 0;
	int value, index;
	cout << "Enter the number of rows: "; cin >> rows;
	cout << "Enter the number of columns: "; cin >> cols;
	////////////////////
	//int** arr2 = new int* [rows];
	//double** arr2 = new double* [rows];
	//float** arr2 = new float* [rows];
	//short** arr2 = new short* [rows];
	char** arr2 = new char* [rows];
	/// ////////////////
	allocate(arr2, rows, cols);
	////////////////////
	D_FillRand(arr2, rows, cols);
	Print2_0(arr2, rows, cols);
	cout << "Adds a string to the end of the array" << endl;
	push_row_back2_0(arr2, rows, cols);
	Print2_0(arr2, rows, cols);
	cout << "Adds a string to the beginning of the array" << endl;
	push_row_front2_0(arr2, rows, cols);
	Print2_0(arr2, rows, cols);
	cout << "Adds a string to an array by specified index" << endl;
	cout << "Введите индекс: "; cin >> index;
	insert_row2_0(arr2, rows, cols, index);
	Print2_0(arr2, rows, cols);
	cout << "Removes the string from the end of the array" << endl;
	pop_row_back2_0(arr2, rows, cols);
	Print2_0(arr2, rows, cols);
	cout << "Removes the string from the beginning of the array" << endl;
	pop_row_front2_0(arr2, rows, cols);
	Print2_0(arr2, rows, cols);
	cout << "Removes the row from the array at the specified index" << endl;
	cout << "Enter the index: "; cin >> index;
	erase_row2_0(arr2, rows, cols, index);
	Print2_0(arr2, rows, cols);
	////////////////////
	clear(arr2, rows, cols);
#endif // DYNAMIC_MEMORY_2
}

template<typename T>
void allocate(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) arr2[i] = new T[cols] {};
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

template<typename T>
void D_FillRand(T** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = rand() % 100/2.0;	//division at 2.0 exclusively for visualizing work with the types of Float and Double
		}
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << "|" << endl;
}
template<typename T>
void Print2_0(T** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(*(arr2 + i) + j) << " ";
		}cout << endl;
	}
}

int* push_back(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}
template<typename T>
void push_row_back2_0(T**& arr2, int& rows, int& cols)
{
	T** buffer = new T* [rows+1];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i];
	}
	delete[] arr2;
	buffer[rows] = new T[cols] {};
	arr2 = buffer;
	++rows;
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
template<typename T>
void push_row_front2_0(T**& arr2, int& rows, int& cols)
{
	++rows;
	T** buffer = new T* [rows];
	for (int i = 0; i < rows-1; i++)
	{
		buffer[i+1] = arr2[i];
	}
	buffer[0] = new T[cols] {};
	delete[] arr2;
	arr2 = buffer;
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
template<typename T>
void insert_row2_0(T**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " Index more than array! \n";
	else
	{
		T** buffer = new T* [rows + 1];
		for (int i = 0; i < rows; i++)
		{
			if (i >= index)buffer[i + 1] = arr2[i];
			else buffer[i] = arr2[i];
		}
		buffer[index] = new T[cols] {};
		delete[] arr2;
		arr2 = buffer;
		rows++;
	}
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
template<typename T>
void pop_row_back2_0(T**& arr2, int& rows, int& cols)
{
	--rows;
	T** buffer = new T* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;
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
template<typename T>
void pop_row_front2_0(T**& arr2, int& rows, int& cols)
{
	T** buffer = new T* [rows-1];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i + 1];
	}
	delete[] arr2;
	arr2 = buffer;
	rows--;
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
template<typename T>
void erase_row2_0(T**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " Index more than array! \n";
	else
	{
		--rows;
		T** buffer = new T*[rows];
		for (int i = 0; i < rows; i++)
		{
			if (i >= index)buffer[i] = arr2[i + 1];
			else buffer[i] = arr2[i];
		}
		delete[] arr2;
		arr2 = buffer;
	}
}

template<typename T>
void clear(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;
}


