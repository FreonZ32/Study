#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define DYNAMIC_MEMORY_1
//#define DYNAMIC_MEMORY_2

template<typename T>
void allocate(T**& arr2, int& rows, int& cols);

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
T* push_back(T arr[], int& n, int value);
template<typename T>
void push_row_back2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_push_back_cols(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* push_front(T arr[], int& n, int value);
template<typename T>
void push_row_front2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_push_cols_front(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* insert(T arr[], int& n, int indif, int value);
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
	int n, value, indif;
	cout << "Введите размер массива: "; cin >> n;
	
	//int* arr = new int[n];
	//double* arr = new double[n];
	float* arr = new float[n];
	//short* arr = new short[n];
	//char* arr = new char[n];

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
	int rows = 0, cols = 0;
	int value, index;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество столбцов: "; cin >> cols;
	
	int** arr2 = new int* [rows];
	//double** arr2 = new double* [rows];
	//float** arr2 = new float* [rows];
	//short** arr2 = new short* [rows];
	//char** arr2 = new char* [rows];

	allocate(arr2, rows, cols);

	D_FillRand(arr2, rows, cols, 200, 300);
	D_Print(arr2, rows, cols);
	cout << "Добавление строк в конец: " << endl;
	cout << "Введите значение: "; cin >> value;
	D_push_back_cols(arr2, rows, cols, value);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Добавление строк в начало: " << endl;
	cout << "Введите значение: "; cin >> value;
	D_push_cols_front(arr2, rows, cols, value);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Добавление строк по индексу: " << endl;
	cout << "Введите значение: "; cin >> value;
	cout << "Введите индекс: "; cin >> index;
	D_insert_cols(arr2, rows, cols, index, value);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Удаление строк в конце: " << endl;
	cout << "Введите значение: "; cin >> value;
	D_pop_cols_back(arr2, rows, cols, value);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Удаление строк в начале: " << endl;
	cout << "Введите значение: "; cin >> value;
	D_pop_cols_front(arr2, rows, cols, value);
	D_Print(arr2, rows, cols);
	//system("PAUSE");
	cout << "Удаление строк по индексу: " << endl;
	cout << "Введите значение: "; cin >> value;
	cout << "Введите индекс: "; cin >> index;
	D_erase_cols(arr2, rows, cols, index, value);
	D_Print(arr2, rows, cols);
	//system("PAUSE");


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
void allocate(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) arr2[i] = new T[cols]{};
}

template<typename T>
void FillRand(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100/2.0;
	}
}
template<typename T>
void D_FillRand(T** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = rand() % 100/2.0;
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
T* push_back(T arr[], int& n, int value)
{
	T* buffer = new T[n + 1];
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
template<typename T>
void D_push_back_cols(T** arr2, int& rows, int& cols, int value)
{
	cols += value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols] {};
		for (int j = 0; j < cols-value;j++)
		{
			buffer[j] = arr2[i][j];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}

template<typename T>
T* push_front(T arr[], int& n, int value)
{
	T* buffer = new T[n + 1];
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
template<typename T>
void D_push_cols_front(T** arr2, int& rows, int& cols,int value)
{
	cols += value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols] {};
		for (int j = 0; j < cols; j++)
		{
			buffer[j+value] = arr2[i][j];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}

template<typename T>
T* insert(T arr[], int& n, int indif, int value)
{
	if (indif >= n) { cout << "Индекс превышает размер массива!\t"; return arr; }
	else
	{
		T* buffer = new T[n + 1];
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
	if (index >= rows)cout << " Индекс больше массива! \n";
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
template<typename T>
void D_insert_cols(T** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		cols += value;
		for (int i = 0; i < rows; i++)
		{
			T* buffer = new T[cols] {};
			for (int j = 0; j < cols - value; j++)
			{
				if (j >= index)buffer[j + value] = arr2[i][j];
				else buffer[j] = arr2[i][j];
			}
			delete[] arr2[i];
			arr2[i] = buffer;
		}
	}
}

template<typename T>
T* pop_back(T arr[], int& n)
{
	n--;
	T* buffer = new T[n];
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
template<typename T>
void D_pop_cols_back(T** arr2, int& rows, int& cols, int value)
{
	cols -= value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols] {};
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr2[i][j];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}

template<typename T>
T* pop_front(T arr[], int& n)
{
	T* buffer = new T[n - 1];
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
template<typename T>
void D_pop_cols_front(T** arr2, int& rows, int& cols, int value)
{
	cols -= value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols] {};
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr2[i][j+value];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}

template<typename T>
T* erase(T arr[], int& n, int indif)
{
	if (indif >= n) { cout << "Индекс превышает размер массива!\t"; return arr; }
	else
	{
		T* buffer = new T[n - 1];
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
	if (index >= rows)cout << " Индекс больше массива! \n";
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
void D_erase_cols(T** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		cols -= value;
		for (int i = 0; i < rows; i++)
		{
			T* buffer = new T[cols] {};
			for (int j = 0; j < cols; j++)
			{
				if (j >= index)buffer[j] = arr2[i][j + value];
				else buffer[j] = arr2[i][j];
			}
			delete[] arr2[i];
			arr2[i] = buffer;
		}
	}
}

template<typename T>
void clear(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;
}


