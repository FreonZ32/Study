#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
int* puch_back(int arr[], int &n, int value);

void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n];
	int* mainarr = &arr[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "¬ведите дополнительное значение: "; cin >> value;
	arr = puch_back(arr, n, value);
	Print(arr, n);
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
	}cout << endl;
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

