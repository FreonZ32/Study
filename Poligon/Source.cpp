#include<iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

void FillRand(int arr[], int& n);
void Print(int arr[], int& n);

void push_back(int** arr, int& n, int r_value);  //Принимаем указатель на массив по указателю
void push_front(int** arr, int& n, int l_value);
void insert(int** arr, int& n, int insert_value, int insert_index);

void pop_back(int** arr, int& n);
void pop_front(int** arr, int& n);
void erase(int** arr, int& n, int pop_index);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	int r_value;
	cout << "Введите добавляемое значение в конец массива: "; cin >> r_value;
	push_back(&arr, n, r_value);
	Print(arr, n);

	int l_value;
	cout << "Введите добавляемое значение в начало массива: "; cin >> l_value;
	push_front(&arr, n, l_value);
	Print(arr, n);

	int insert_value;
	int insert_index;
	cout << "Введите добавлемое значение: "; cin >> insert_value;
	cout << "Введите индекс массива в который хотите вставить значение: "; cin >> insert_index;
	insert(&arr, n, insert_value, insert_index);
	Print(arr, n);

	cout << "Удаление последнего элемента в массиве: " << endl;
	pop_back(&arr, n);
	Print(arr, n);

	cout << "Удаление первого элемента в массиве: " << endl;
	pop_front(&arr, n);
	Print(arr, n);

	int pop_index;
	cout << "Введите удаляемый индекс: "; cin >> pop_index;
	erase(&arr, n, pop_index);
	Print(arr, n);

	delete[] arr;
}
void FillRand(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void push_back(int** arr, int& n, int r_value)
{
	//Добавление элементов в массив

	//1) Создаём буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2) Копируем исходный массив в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = (*arr)[i];
	}
	//3) Удаляем исходный массив:
	delete[] *arr;
	//4) Подменяем исходный массив новым (буферным) массивом, за счёт подмены адреса:
	*arr = buffer;
	//5) Только после всех этих действий можно добавить значение в конец массива
	(*arr)[n] = r_value;
	//6) После добавления элемента в массив, количество его элементов увеличивается 
	//на 1:
	n++;
}
void push_front(int** arr, int& n, int l_value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = (*arr)[i];

	}
	delete[] *arr;
	*arr = buffer;
	(*arr)[0] = l_value;
	n++;
}
void insert(int** arr, int& n, int insert_value, int insert_index)
{
	int* buffer = new int[++n];
	for (int i = 0; i < insert_index; i++)
	{
		buffer[i] = (*arr)[i];
	}
	for (int i = insert_index + 1; i < n; i++)
	{
		buffer[i] = (*arr)[i - 1];
	}
	delete[] *arr;
	*arr = buffer;
	(*arr)[insert_index] = insert_value;
}
void pop_back(int** arr, int& n)
{
	int* buffer = new int[n-1];
	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = (*arr)[i];
	}
	delete[] *arr;
	*arr = buffer;
	n--;
}
void pop_front(int** arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n+1; i++)
	{
		buffer[i] = (*arr)[i+1];
	}
	delete[] *arr;
	*arr = buffer;
}
void erase(int** arr, int& n, int pop_index)
{
	int* buffer = new int[--n];
	for (int i = 0; i < pop_index; i++)
	{
		buffer[i] = (*arr)[i];
	}
	for (int i = pop_index; i < n; i++)
	{
		buffer[i] = (*arr)[i + 1];
	}
	delete[] *arr;
	*arr = buffer;
}