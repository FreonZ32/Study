#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

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

	//int arr[10] = {3,6,9,12,15,18,21,24,27,30};

	//int* a = &arr[0];

	//for (int i = 0; i < 10; i++)
	//{
	//	//cout << arr+i << "=" << *(arr + i) << endl;
	//	cout << a << " = " << *a << endl;
	//	a++;
	//}

	char arr[] = "Hello!";
	char* a = arr;

	cout << "a = " << a << endl;

	char* a3 = &arr[3];
	char* a0 = &arr[0];

	cout << "a3 = " << *a3 << endl;
	cout << "a0 = " << (int)a0 << endl;
	cout << "diff = " << a3 - a0 << endl;
	
}