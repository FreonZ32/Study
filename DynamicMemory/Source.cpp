#include"Stdafx.h"

#include"AllocateAndFillrand.h"
#include"Print.h"
#include"PushBackAndFront.h"
#include"InsertAndErase.h"
#include"PopBackAndFront.h"
#include"Clear.h"

#define DYNAMIC_MEMORY_1
//#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef DYNAMIC_MEMORY_1
	int n, value, indif;
	cout << "Введите размер массива: "; cin >> n;
	
	int* arr = new int[n];
	//double* arr = new double[n];
	//float* arr = new float[n];
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