#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

int** allocate(int& rows, int& cols);

void FillRand(int arr[], const unsigned int n, int minRand = 0, int maxRand = 100);
void D_FillRand(int** arr2, const unsigned int rows, const unsigned int cols, int minRand = 0, int maxRand = 100);

void Print(int arr[], const unsigned int n);
void D_Print(int** arr2, const unsigned int rows, const unsigned int cols);
void Print2_0(int** arr2, const unsigned int rows, const unsigned int cols);

int* push_back(int arr[], int& n, int value = 0);
void push_row_back2_0(int**& arr2, int& rows, int& cols);
void D_push_back_cols(int** arr2, int& rows, int& cols, int value);

int* push_front(int arr[], int& n, int value = 0);
void push_row_front2_0(int**& arr2, int& rows, int& cols);
void D_push_cols_front(int** arr2, int& rows, int& cols, int value);

int* insert(int arr[], int& n, int indif, int value = 0);
void insert_row2_0(int**& arr2, int& rows, int& cols, int index);
void D_insert_cols(int** arr2, int& rows, int& cols, int index, int value);

int* pop_back(int arr[], int& n);
void pop_row_back2_0(int**& arr2, int& rows, int& cols);
void D_pop_cols_back(int** arr2, int& rows, int& cols, int value);

int* pop_front(int arr[], int& n);
void pop_row_front2_0(int**& arr2, int& rows, int& cols);
void D_pop_cols_front(int** arr2, int& rows, int& cols, int value);

int* erase(int arr[], int& n, int indif);
void erase_row2_0(int**& arr2, int& rows, int& cols, int index);
void D_erase_cols(int** arr2, int& rows, int& cols, int index, int value);

void clear(int**& arr2, int& rows, int& cols);

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
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "2)Вставка значения в начало: \t\t";
	arr = push_front(arr, n, value);
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

#ifdef DYNAMIC_MEMORY_2
	int rows = 0, cols = 0;
	int value, index;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество столбцов: "; cin >> cols;
	
	int** arr2 = allocate(rows, cols);

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
	
	//cout << "Добавляет строку в конец массива" << endl;
	//push_row_back2_0(arr2, rows, cols);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Добавляет строку в начало массива" << endl;
	//push_row_front2_0(arr2, rows, cols);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Добавляет строку в массив по указанному индексу" << endl;
	//cout << "Введите индекс: "; cin >> index;
	//insert_row2_0(arr2, rows, cols, index);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Удаляет строку с конца массива" << endl;
	//pop_row_back2_0(arr2, rows, cols);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Удаляет строку с начала массива" << endl;
	//pop_row_front2_0(arr2, rows, cols);
	//D_Print(arr2, rows, cols);
	////system("PAUSE");
	//cout << "Удаляет строку из массива по указанному индексу" << endl;
	//cout << "Введите индекс: "; cin >> index;
	//erase_row2_0(arr2, rows, cols, index);
	//D_Print(arr2, rows, cols);
	//system("PAUSE");
	
	clear(arr2, rows, cols);
#endif // DYNAMIC_MEMORY_2
}

int** allocate(int& rows, int& cols)
{
	int** arr2 = new int* [rows];
	for (int i = 0; i < rows; i++) arr2[i] = new int[cols] {};
	return arr2;
}


void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+minRand;
	}
}
void D_FillRand(int** arr2, const unsigned int rows, const unsigned int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = rand() % (maxRand - minRand) + minRand;
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
void D_Print(int** arr2, const unsigned int rows, const unsigned int cols)
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
void Print2_0(int** arr2, const unsigned int rows, const unsigned int cols)
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
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}
void push_row_back2_0(int**& arr2, int& rows, int& cols)
{
	int** buffer = new int* [rows+1];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i];
	}
	delete[] arr2;
	buffer[rows] = new int[cols] {};
	arr2 = buffer;
	++rows;
}
void D_push_back_cols(int** arr2, int& rows, int& cols, int value)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++) arr2[i] = push_back(arr2[i], cols);
		cols -= value;
	}cols += value;
	
}

int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
void push_row_front2_0(int**& arr2, int& rows, int& cols)
{
	++rows;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows-1; i++)
	{
		buffer[i+1] = arr2[i];
	}
	buffer[0] = new int[cols] {};
	delete[] arr2;
	arr2 = buffer;
}
void D_push_cols_front(int** arr2, int& rows, int& cols,int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++)arr2[i] = push_front(arr2[i], cols);
		cols -= value;
	}cols += value;
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
void insert_row2_0(int**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " Индекс больше массива! \n";
	else
	{
		int** buffer = new int* [rows + 1];
		for (int i = 0; i < rows; i++)
		{
			if (i >= index)buffer[i + 1] = arr2[i];
			else buffer[i] = arr2[i];
		}
		buffer[index] = new int[cols] {};
		delete[] arr2;
		arr2 = buffer;
		rows++;
	}
}
void D_insert_cols(int** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < value; j++)
			{
				arr2[i] = insert(arr2[i], cols, index+j);
			}cols -= value;
		}cols += value;
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
void pop_row_back2_0(int**& arr2, int& rows, int& cols)
{
	--rows;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;
}
void D_pop_cols_back(int** arr2, int& rows, int& cols, int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++) arr2[i] = pop_back(arr2[i], cols);
		cols += value;
	}cols -= value;
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
void pop_row_front2_0(int**& arr2, int& rows, int& cols)
{
	int** buffer = new int* [rows-1];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i + 1];
	}
	delete[] arr2;
	arr2 = buffer;
	rows--;
}
void D_pop_cols_front(int** arr2, int& rows, int& cols, int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < value; j++) arr2[i] = pop_front(arr2[i], cols);
		 cols += value;
	}cols -= value;
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
void erase_row2_0(int**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " Индекс больше массива! \n";
	else
	{
		--rows;
		int** buffer = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			if (i >= index)buffer[i] = arr2[i + 1];
			else buffer[i] = arr2[i];
		}
		delete[] arr2;
		arr2 = buffer;
	}
}
void D_erase_cols(int** arr2, int& rows, int& cols, int index, int value)
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

void clear(int**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;
}


