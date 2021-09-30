#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

template<typename T>
T** allocate(int& rows, int& cols);

template<typename T>
void FillRand(T arr[], const unsigned int n);
template<typename T>
void D_FillRand(T** arr2, const unsigned int rows, const unsigned int cols);

template<typename T>
void Print(T arr[], const unsigned int n);
template<typename T>
void D_Print(T** arr2, const unsigned int rows, const unsigned int cols);
template<typename T>
void Print2_0(T** arr2, const unsigned int rows, const unsigned int cols);

template<typename T>
T* push_back(T arr[], int& n, T value = 0);
template<typename T>
void push_row_back2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_push_back_cols(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* push_front(T arr[], int& n, T value = 0);
template<typename T>
void push_row_front2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_push_cols_front(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* insert(T arr[], int& n, int indif, T value = 0);
template<typename T>
void insert_row2_0(T**& arr2, int& rows, int& cols, int index);
template<typename T>
void D_insert_cols(T** arr2, int& rows, int& cols, int index, int value);

template<typename T>
T* pop_back(T arr[], int& n);
template<typename T>
void pop_row_back2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_pop_cols_back(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* pop_front(T arr[], int& n);
template<typename T>
void pop_row_front2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_pop_cols_front(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* erase(T arr[], int& n, int indif);
template<typename T>
void erase_row2_0(T**& arr2, int& rows, int& cols, int index);
template<typename T>
void D_erase_cols(T** arr2, int& rows, int& cols, int index, int value);

template<typename T>
void clear(T**& arr2, int& rows, int& cols);

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef DYNAMIC_MEMORY_1
	int n, indif;
	int value;
	cout << "Введите размер массива: "; cin >> n;
	
	//int* arr = new int[n];
	//double* arr = new double[n];
	//float* arr = new float[n];
	//short* arr = new short[n];
	char* arr = new char[n];

	FillRand(arr, n);
	cout << "Исходный массив: \t\t\t";
	Print(arr, n);
	cout << "Введите дополнительное значение: "; cin >> value; 
	cout << "1)Вставка значения в конец: \t\t";
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "2)Вставка значения в начало: \t\t";
	arr = push_front(arr, n, value);
	Print(arr, n);
	cout << "Введите индификатор вставки: "; cin >> indif;
	cout << "3)Вставка значения по индификатору: \t";
	arr = insert(arr, n, indif, value);
	Print(arr, n);
	cout << "4)Удаление значения в конце: \t\t";
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << "5)Удаление значения в начале: \t\t";
	arr = pop_front(arr, n);
	Print(arr, n);
	cout << "Введите индефикатор удаления: "; cin >> indif;
	cout << "3)Удаление значения по индификатору : \t";
	arr = erase(arr, n, indif);
	Print(arr, n);

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	int rows = 0, cols = 0,	index;
	int value;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество столбцов: "; cin >> cols;
	
	//int** arr2 = allocate<int>(rows, cols);
	//double** arr2 = allocate<double>(rows, cols);
	//float** arr2 = allocate<float>(rows, cols);
	//short** arr2 = allocate<short>(rows, cols);
	char** arr2 = allocate<char>(rows, cols);


	D_FillRand(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	//cout << "Добавление колонок в конец: " << endl;
	//cout << "Введите значение: "; cin >> value;
	//D_push_back_cols(arr2, rows, cols, value);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Добавление колонок в начало: " << endl;
	//cout << "Введите значение: "; cin >> value;
	//D_push_cols_front(arr2, rows, cols, value);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Добавление колонок по индексу: " << endl;
	//cout << "Введите значение: "; cin >> value;
	//cout << "Введите индекс: "; cin >> index;
	//D_insert_cols(arr2, rows, cols, index, value);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Удаление колонок в конце: " << endl;
	//cout << "Введите значение: "; cin >> value;
	//D_pop_cols_back(arr2, rows, cols, value);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Удаление колонок в начале: " << endl;
	//cout << "Введите значение: "; cin >> value;
	//D_pop_cols_front(arr2, rows, cols, value);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Удаление колонок по индексу: " << endl;
	//cout << "Введите значение: "; cin >> value;
	//cout << "Введите индекс: "; cin >> index;
	//D_erase_cols(arr2, rows, cols, index, value);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");


	cout << "Добавляет строку в конец массива" << endl;
	push_row_back2_0(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Добавляет строку в начало массива" << endl;
	push_row_front2_0(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Добавляет строку в массив по указанному индексу" << endl;
	cout << "Введите индекс: "; cin >> index;
	insert_row2_0(arr2, rows, cols, index);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Удаляет строку с конца массива" << endl;
	pop_row_back2_0(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Удаляет строку с начала массива" << endl;
	pop_row_front2_0(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Удаляет строку из массива по указанному индексу" << endl;
	cout << "Введите индекс: "; cin >> index;
	erase_row2_0(arr2, rows, cols, index);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	
	clear(arr2, rows, cols);
#endif // DYNAMIC_MEMORY_2
}

template<typename T>
T** allocate(int& rows, int& cols)
{
	T** arr2 = new T* [rows];
	for (int i = 0; i < rows; i++) arr2[i] = new T[cols]{};
	return arr2;
}

template<typename T>
void FillRand(T arr[], const unsigned int n)
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
			arr2[i][j] = rand() % 100;
		}
	}
}

template<typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
template<typename T>
void D_Print(T** arr2, const unsigned int rows, const unsigned int cols)
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

template<typename T>
T* push_back(T arr[], int& n, T value)
{
	T* buffer = new T[n + 1]{};
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
	T* buffer = new T[cols]{};
	arr2 = push_back(arr2, rows, buffer);
}
template<typename T>
void D_push_back_cols(T** arr2, int& rows, int& cols, int value)
{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < value; j++) arr2[i] = push_back(arr2[i], cols);
			cols -= value;
		}cols += value;
}

template<typename T>
T* push_front(T arr[], int& n, T value)
{
	T* buffer = new T[n + 1]{};
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
	//T* buffer = new T[cols]{};
	//arr2 = push_front(arr2, rows, buffer);
	arr2 = push_front(arr2, rows, new T[cols]{});
	
}
template<typename T>
void D_push_cols_front(T** arr2, int& rows, int& cols,int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++)arr2[i] = push_front(arr2[i], cols);
		cols -= value;
	}cols += value;
}

template<typename T>
T* insert(T arr[], int& n, int indif, T value)
{
	if (indif >= n) { cout << "Индекс превышает размер массива!\t"; return arr; }
	else
	{
		T* buffer = new T[n + 1]{};
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
}
template<typename T>
void insert_row2_0(T**& arr2, int& rows, int& cols, int index)
{
	T* buffer = new T[cols]{};
	arr2 = insert(arr2, rows, index, buffer);
}
template<typename T>
void D_insert_cols(T** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < value; j++)
			{
				arr2[i] = insert(arr2[i], cols, index + j);
			}cols -= value;
		}cols += value;
	}
}

template<typename T>
T* pop_back(T arr[], int& n)
{
	n--;
	T* buffer = new T[n]{};
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
	delete[] arr2[rows-1];
	arr2 = pop_back(arr2, rows);
}
template<typename T>
void D_pop_cols_back(T** arr2, int& rows, int& cols, int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++) arr2[i] = pop_back(arr2[i], cols);
		cols += value;
	}cols -= value;
}

template<typename T>
T* pop_front(T arr[], int& n)
{
	T* buffer = new T[n - 1]{};
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
	delete[] arr2[0];
	arr2 = pop_front(arr2, rows);
}
template<typename T>
void D_pop_cols_front(T** arr2, int& rows, int& cols, int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++) arr2[i] = pop_front(arr2[i], cols);
		cols += value;
	}cols -= value;
}

template<typename T>
T* erase(T arr[], int& n, int indif)
{
	if (indif >= n) { cout << "Индекс превышает размер массива!\t"; return arr; }
	else
	{
		T* buffer = new T[n - 1]{};
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
}
template<typename T>
void erase_row2_0(T**& arr2, int& rows, int& cols, int index)
{
	delete[] arr2[index];
	arr2 = erase(arr2, rows, index);
}
template<typename T>
void D_erase_cols(T** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < value; j++)
			{
				arr2[i] = erase(arr2[i], cols, index);
			}cols += value;
		}cols -= value;
	}
}

template<typename T>
void clear(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;
}


