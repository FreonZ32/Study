#include<iostream>
using namespace std;

//#define POITER_BASICS
#define POITERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef POITER_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;

	int* pr;
	int b = 3;
#endif // POITER_BASICS

#ifdef POITERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,4,8,13,21 };
	int* a = arr;
	//cout << arr << endl;
	//cout << *arr << endl;
	for (int i = 0; i < n; i++)	//Output of addresses of array elements, and then the values at these addresses.
	{
		cout << arr + i << " = " << *(arr + i) << "\t";
		cout << a << " = " << *a << endl;
		a++;
	}
	cout << endl;
	char arr2[] = "не очень-то полезные указатели, однако!";
	char* b = arr2;
	char* b0 = &arr2[12];
	cout << b0;
	
#endif // POITERS_AND_ARRAYS


	/*const int X = 5;
	int a[X] = { 1,2,3,4,5 };
	int* impostorA;
	int i = 1;
	impostorA = a;
	impostorA[1] = 3;
	impostorA[2] = 2;
	*(impostorA + 3) = 5;
	*(impostorA + 4) = 4;
	for (int i = 0; i < X; i++)
		cout << *(impostorA + i) << " ";*/

	/*int a = 5;
	int * b = &a;
	int c = *b;
	cout << c << " " << b+1 << " " << b;*/
}