#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void EndAndAgain(int arr[], int& n, int indif, int value, int escape);
void FillRand(int arr[], int &n);
void Print(int arr[], int &n);
int* puch_back(int arr[], int &n, int value);
int* puch_front(int arr[], int& n, int value);
int* insert(int arr[], int& n,int indif, int value);
int* replacement(int arr[], int& n, int indif, int value);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int indif);
int invalue(int &value);
int inindif(int& indif);
void Display(int arr[], int& n, int indif, int value, int escape);
void body(int arr[], int& n, int indif, int value, int escape);

void main()
{
	//setlocale(LC_ALL, "rus");
	int n = 0;
	bool escape = false;
	int value = 0, indif = 0;
	cout << "Enter the size of the array: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	body(arr, n, indif, value, escape);
}

void EndAndAgain(int arr[], int& n, int indif, int value, int escape)
{
	Print(arr, n), system("pause"), system("cls"), body(arr, n, indif, value, escape);
}
void FillRand(int arr[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], int &n)
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
	if (indif > n)
	{
		cout << " The value exceeds the size of the array!\n";
		return arr;
	}
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
int* replacement(int arr[], int& n, int indif, int value)
{
	if (indif > n)
	{
		cout << " The value exceeds the size of the array!\n";
		return arr;
	}
	int* buffer = new int[n];
	for (int i = 0; i < n; i++)
	{
		if (i == indif) { buffer[i] = value; i++; }
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	return arr;
}
int* pop_back(int arr[], int& n)
{
	if (n-- == 1)
	{
		cout << " Where is less? \n";
		return arr;
	}
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
	if (n-- == 1)
	{
		cout << " Where is less? \n";
		return arr;
	}
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
	if (indif > n)
	{
		cout << " The value exceeds the size of the array!\n";
		return arr;
	}
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
int invalue(int &value)
{
	cout << " Enter additional value: >"; cin >> value;
	return value;
}
int inindif(int &indif)
{
	cout << " Enter the index: >"; cin >> indif;
	return indif;
}
void Display(int arr[], int& n, int indif, int value, int escape)
{
	cout << "\n\tWhat do you want to do? \n 1) Insertion in the end of the array \n 2) Insert values in the beginning of the array \n 3) Insertion of the value of the index \n "
		<< "4) Replacing the value of index \n 5) Deleting the last element of the array \n 6) Deleting the zero element of the array "
		<<"\n 7) Deleting an array according to the specified index \n 8) Create a new array \n 9) Exit from the program \n>";
	switch (_getch())
	{
	case '1':arr = puch_back(arr, n, invalue(value)), EndAndAgain(arr, n, indif, value, escape); break;
	case '2':arr = puch_front(arr, n, invalue(value)), EndAndAgain(arr, n, indif, value, escape); break;
	case '3':arr = insert(arr,n,inindif(indif),invalue(value)), EndAndAgain(arr, n, indif, value, escape); break;
	case '4':arr = replacement(arr, n, inindif(indif), invalue(value)), EndAndAgain(arr, n, indif, value, escape); break;
	case '5':arr = pop_back(arr,n), EndAndAgain(arr, n, indif, value, escape); break;
	case '6':arr = pop_front(arr,n), EndAndAgain(arr, n, indif, value, escape); break;
	case '7':arr = erase(arr,n,inindif(indif)), EndAndAgain(arr, n, indif, value, escape); break;
	case '8': delete[] arr, system("pause"), system("cls"), main(); break;
	case '9': delete[] arr, escape = true; cout << endl << " Exit "; break;
	default: cout << "Error!", delete[] arr;
	}
}

void body(int arr[], int& n, int indif, int value, int escape)
{
	do
	{
		Print(arr, n);
		Display(arr, n, indif, value, escape);
	} while (escape);
}

