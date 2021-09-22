#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

int** allocate(int& rows, int& cols);

void FillRand(int arr[], const unsigned int n);
void D_FillRand(int** arr2, const unsigned int rows, const unsigned int cols);

void Print(int arr[], const unsigned int n);
void D_Print(int** arr2, const unsigned int rows, const unsigned int cols);

int* push_back(int arr[], int& n, int value);
void push_row_back(int**& arr2, int& rows, int& cols);
void D_push_back_cols(int**& arr2, int& rows, int& cols, int value);

int* puch_front(int arr[], int& n, int value);
void push_row_front(int**& arr2, int& rows, int& cols);

int* insert(int arr[], int& n, int indif, int value);
void insert_row(int**& arr2, int& rows, int& cols, int index);

int* pop_back(int arr[], int& n);
void pop_row_back(int**& arr2, int& rows, int& cols);

int* pop_front(int arr[], int& n);
void pop_row_front(int**& arr2, int& rows, int& cols);

int* erase(int arr[], int& n, int indif);
void erase_row(int**& arr2, int& rows, int& cols, int index);

void clear(int**& arr2, int& rows, int& cols);

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "������� �������������� ��������: "; cin >> value;
	cout << "1)������� �������� � �����: \t\t";
	arr = puch_back(arr, n, value);
	Print(arr, n);
	cout << "2)������� �������� � ������: \t\t";
	arr = puch_front(arr, n, value);
	Print(arr, n);
	int indif;
	cout << "������� ����������� �������: "; cin >> indif;
	if (indif >= n)cout << "������ ��������� ������ �������!";
	else
	{
		cout << "3)������� �������� �� ������������: \t";
		arr = insert(arr, n, indif, value);
		Print(arr, n);
	}
	cout << "4)�������� �������� � �����: \t\t";
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << "5)�������� �������� � ������: \t\t";
	arr = pop_front(arr, n);
	Print(arr, n);
	cout << "������� ����������� ��������: "; cin >> indif;
	if (indif >= n)cout << "������ ��������� ������ �������!";
	else
	{
		cout << "3)�������� �������� �� ������������ : \t";
		arr = erase(arr, n, indif);
		Print(arr, n);
	}

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	int rows = 0, cols = 0;
	int value, index;
	cout << "������� ���������� �����: "; cin >> rows;
	cout << "������� ���������� ��������: "; cin >> cols;
	////////////////////
	/*int** arr2 = new int* [rows];
	for (int i = 0; i < rows; i++) arr2[i] = new int[cols] {};*/
	int** arr2 = allocate(rows, cols);
	////////////////////
	D_FillRand(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	cout <<"��������� ������ � ����� �������" << endl;
	push_row_back(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	cout << "��������� ������ � ������ �������" << endl;
	push_row_front(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	cout << "��������� ������ � ������ �� ���������� �������" << endl;
	cout << "������� ������: "; cin >> index;
	insert_row(arr2, rows, cols, index);
	D_Print(arr2, rows, cols);
	cout << "������� ������ � ����� �������" << endl;
	pop_row_back(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	cout << "������� ������ � ������ �������" << endl;
	pop_row_front(arr2, rows, cols);
	D_Print(arr2, rows, cols);
	cout << "������� ������ �� ������� �� ���������� �������" << endl;
	cout << "������� ������: "; cin >> index;
	erase_row(arr2, rows, cols, index);
	D_Print(arr2, rows, cols);
	////////////////////
	/*for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;*/
	clear(arr2, rows, cols);
#endif // DYNAMIC_MEMORY_2
}
int** allocate(int& rows, int& cols)
{
	int** arr2 = new int* [rows];
	for (int i = 0; i < rows; i++) arr2[i] = new int[cols] {};
	return arr2;
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void D_FillRand(int** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = rand() % 100;
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
void push_row_back(int**& arr2, int& rows, int& cols)
{
	++rows;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols] {};
	}
	for (int i = 0; i < rows-1; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			buffer[i][j] = arr2[i][j];
		}
	}
	for (int i = 0; i < rows-1; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;
}
void D_push_back_cols(int**& arr2, int& rows, int& cols, int value)
{
	/*cols += value;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols]{};
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols-value; j++)
		{
			buffer[i][j] = arr2[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;*/
}

int* puch_front(int arr[], int& n, int value)
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
	return arr;
}
void push_row_front(int**& arr2, int& rows, int& cols)
{
	++rows;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols] {};
	}
	for (int i = 0; i < rows-1; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			buffer[i+1][j] = arr2[i][j];
		}
	}
	for (int i = 0; i < rows-1; i++)
	{
		delete[] arr2[i];
	}
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
void insert_row(int**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " ������ ������ �������! \n";
	else
	{
		++rows;
		int** buffer = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			buffer[i] = new int[cols] {};
		}
		for (int i = 0; i < rows - 1; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i >= index)buffer[i + 1][j] = arr2[i][j];
				else buffer[i][j] = arr2[i][j];
			}
		}
		for (int i = 0; i < rows - 1; i++)
		{
			delete[] arr2[i];
		}
		delete[] arr2;
		arr2 = buffer;
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
void pop_row_back(int**& arr2, int& rows, int& cols)
{
	--rows;
	int** buffer = new int* [rows];
	for(int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			buffer[i][j] = arr2[i][j];
		}
	}
	for (int i = 0; i < rows+1; i++)
	{
		delete[] arr2[i];
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
void pop_row_front(int**& arr2, int& rows, int& cols)
{
	--rows;
	int** buffer = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			buffer[i][j] = arr2[i+1][j];
		}
	}
	for (int i = 0; i < rows+1; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;
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
void erase_row(int**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " ������ ������ �������! \n";
	else
	{
		--rows;
		int** buffer = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			buffer[i] = new int[cols];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i >= index)buffer[i][j] = arr2[i + 1][j];
				else buffer[i][j] = arr2[i][j];
			}
		}
		for (int i = 0; i < rows + 1; i++)
		{
			delete[] arr2[i];
		}
		delete[] arr2;
		arr2 = buffer;
	}
}

void clear(int**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;
}


