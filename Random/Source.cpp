#include<iostream>
using namespace std;

//#define RANDARRAY	//a two-dimensional array with random values
//#define ARRAYSHOWMANY	//a one-dimensional array from 0 to 10 with the output of the number of repetitions for repeating numbers

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef RANDARRAY

	const int n = 5;	//массив
	const int k = 2;	//номер массива

	int arr[k][n];
	for (int i = 0; i < n; i++)
	{
		arr[0][i] = rand();
		arr[1][i] = arr[0][i] % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[0][i] << "-" << arr[1][i] << "  ";
	} cout << endl;
#endif // RANDARRAY

#ifdef ARRAYSHOWMANY
	//srand(time(0));	//un-comment to check different options (variants)

	const int S = 10;
	int arr[S] = {};
	int n = 1;
	for (int i = 0; i < S; i++)	//filling the array with random numbers
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < S; i++)	//sortirovochka
		for (int j = i + 1; j < S; j++) 
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
	for (int i = 0; i < S; cout << arr[i] << "\t", i++) {}	//just for visual, what numbers are in the array
	cout << endl;
	for (int i = 0; i < S; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			cout << "The number: " << arr[i];
			while (arr[i] == arr[i + 1]) n += 1 , i++;
			cout << " is repeated: " << n << " times" << endl; n = 1;
		}
	}
#endif // ARRAYSHOWMANY

}