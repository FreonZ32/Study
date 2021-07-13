#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;


//#define RANDARRAY	//a two-dimensional array with random values
//#define ARRAYSHOWMANY	//a one-dimensional array from 0 to 10 with the output of the number of repetitions for repeating numbers
#define ARRAYSHOWMANY2 
//#define ARRAYSHOWMANY3	//memset

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef RANDARRAY

	const int n = 5;	//line of arrow
	const int k = 2;	//number of line

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
			cout << "The number - " << arr[i];
			while (arr[i] == arr[i + 1]) n += 1, i++;
			cout << " is repeated " << n << " times" << endl; n = 1;
		}
	}
#endif // ARRAYSHOWMANY

#ifdef ARRAYSHOWMANY2

	/*const int S = 10;
	int arr[S] = {};
	int n = 0;
	for (int i = 0; i < S; cout << arr[i++] << "\t")
	{
		arr[i] = rand() % 10;
	}
	cout << endl;
	for (int i = 0; i < S;n=0, i++)
		for (int j = 0; j < S; j++)
		{
			if (arr[i] == arr[j])n++;
			if (j == S - 1 && n > 1)cout << arr[i] << " out " << n << endl;
		}*/
		
	int const sz = 10;
	int arr[sz] = { };
	short stat = 0;

	for (int i = 0; i < sz; cout << arr[i++] << "\t")
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < sz; i++) {
		for (int j = i + 1; j < sz; j++) {
			if (arr[i] == arr[j]) {
				for (int n = j - 1; n >= 0; n--) {
					if (arr[j] == arr[n])
						stat++;
				}
				if (stat == 1) {
					cout << arr[i] << " " << stat;
				}
				stat = 0;
			}
		}
	}


#endif // ARRAYSHOWMANY2

#ifdef ARRAYSHOWMANY3
	const int S = 10;
	int arr[S] = {};
	int a[100];
	for (int i = 0; i < S; cout << arr[i++] << "\t")
	{
		arr[i] = rand() % 10;
	}
	cout << endl;
	memset(a, 0, sizeof(a));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		a[arr[i]]++;
	}
	for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (a[i] > 1)
		{
			cout << "Цифра " << i << " встречается " << a[i] << " раз" << "\n";
		}

	}
#endif // ARRAYSHOWMANY3

}