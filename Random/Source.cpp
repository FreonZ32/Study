#include<iostream>
#include<ctime>
using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::srand;


//#define RANDARRAY	//a two-dimensional array with random values
//#define ARRAYSHOWMANY	//a one-dimensional array from 0 to 10 with the output of the number of repetitions for repeating numbers
//#define ARRAYSHOWMANY2	//a lot of mistakes, but work (rand%10+100 & (char)arr will broke prg)
//#define ARRAYSHOWMANY3	//best way

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
	const int S = 10, r = 2;	//change S if you want
	int arr[S] = {};
	int arr2[r][S] = { {},{} };
	int n = 0;
	srand(time(0));
	for (int i = 0; i < S; cout << arr[i++] << " ")
	{
		arr[i] = rand() % 10;	// change if you want
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j] && i > arr2[1][arr[i]])
			{
				arr2[0][arr[i]]++;
				arr2[1][arr[i]] = i;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < S; i++)
		if (arr2[0][i] > 1)
			cout << "Number " << i << " was appeared " << arr2[0][i] + 1 << " times" << endl;
		else if (arr2[0][i] > 0)
			cout << "Number " << i << " was repeated " << arr2[0][i] + 1 << " times" << endl;

#endif // ARRAYSHOWMANY2

#ifdef ARRAYSHOWMANY3
	const unsigned int S = 10;

	int arr[S] = {};
	int sch = 0;	//switch
	int n=0;	//Number of appear
	//srand(time(0));
	for (int i = 0; i < S; cout << arr[i++] << " ")
	{
		arr[i] = rand() % 10+100;
	}
	cout << endl;
	for (int i = 0; i < S; n = 0,sch = 0, i++)
	{
			for (int j = 0; j < S; j++)
				if (arr[i] == arr[j]) n++;
			if(i>0)
				for (int j = 0; j < i; j++)
					if (arr[i] == arr[j])sch++;
			if (n > 1 && sch == 0)cout << "Число " << arr[i] << " повторяется " << n << " раз." << endl;
	}
	system("pause");
	system("cls");
	main();

#endif // ARRAYSHOWMANY3

	
}