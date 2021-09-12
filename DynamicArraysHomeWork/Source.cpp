#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void DA_filling(int arr[],int number, int range);	//Filling the main arrow
void DA_Out(int arr[], int number);	//Displaying the main array
void DA_EvenAndUneven(int arr[],int number, int &runeven, int &reven);	//Calculation of even and odd numbers for new arrays
void DA_DE(int arr[], int arrEven[],int arrUneven[], int number);	//Fill out new arrays
void DA_DE_OUT(int arrEven[], int arrUneven[], int &runeven, int &reven);	//Displaying new arrays on the screen

void main()
{
	setlocale(LC_ALL, "rus");
	int number;
	int range;
	int even = 0;
	int uneven = 0;

	cout << "Enter the size of the array and it's limit: "; cin >> number >>range;
	int* arr = new int[number];

	DA_filling(arr,number,range);
	DA_Out(arr, number);
	DA_EvenAndUneven(arr,number,even, uneven);
	int* arrEven = new int[even];
	int* arrOdd = new int[uneven];
	DA_DE(arr, arrEven, arrOdd, number);
	DA_DE_OUT(arrEven,arrOdd, even, uneven);

	delete[] arr;
	delete[] arrEven;
	delete[] arrOdd;
}

void DA_filling(int arr[],int number, int range)
{
for (int i = 0; i < number; i++)
	{
		arr[i] = rand() % range;
	}
}
void DA_Out(int arr[], int number)
{
	cout << "Base Array: ";
	for (int i = 0; i < number; cout << arr[i++] << " ");
	cout << endl;
}
void DA_EvenAndUneven(int arr[], int number, int &even, int &uneven)
{
	for (int i = 0; i < number; i++)
	{
		if (arr[i] & 1)uneven++;
		else even++;
	}
	cout << " Even = " << even << endl << " Uneven = " << uneven << endl;
}
void DA_DE(int arr[], int arrEven[], int arrUneven[], int number)
{
	int k = 0, l = 0;
	for (int i = 0; i < number; i++)
	{
		if (arr[i] & 1) 
		{ 
			arrUneven[k] = arr[i];
			k++; 
		}
		else  
		{ 
			arrEven[l] = arr[i];
			l++;
		}
	}
}
void DA_DE_OUT(int arrEven[], int arrUneven[], int &even, int &uneven)
{
	cout << "Array \"Even\" with even numbers: ";
	for (int i = 0; i < even; cout << arrEven[i] << " ", i++);
	cout << endl << "Array \"Odd\" with uneven numbers: ";
	for (int i = 0; i < uneven; cout << arrUneven[i] << " ", i++);
}