#include<iostream>
using namespace std;

//#define KEYBIN
//#define GAME
//#define WHAT
//#define KEYBINANDBACK
//#define MAXANDMIN
#define SHIFT


void main()
{
	setlocale(LC_ALL, "rus");
	//const int SIZE = 5;
	//int arr[SIZE];

#ifdef KEYBIN
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	/*for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " " << endl;*/
#endif // KEYBIN

#ifdef GAME
	int n = rand() % 20;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	cout << "Цель: " << n << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == n)
			cout << "попал" << endl;
	}
	system("pause");
	system("cls");
	main();
#endif // GAME

#ifdef WHAT
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // WHAT

#ifdef KEYBINANDBACKint 
	max = arr[0], min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "Минимальное: " << min << endl;
	cout << "Максимальное: " << max;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;;
	cout << (double)sum / SIZE << endl;;
#endif // KEYBINANDBACK

#ifdef MAXANDMIN
	
#endif // MAXANDMIN
	
#ifdef SHIFT
	const int n = 10;
	int h,buf; //h = howmany
	int arr[n] = {4,8,15,16,23,42,1977,2000,156,108}; //https://lostpedia.fandom.com/ru/wiki/%D0%A7%D0%B8%D1%81%D0%BB%D0%B0
	cout << "На сколько сдвинуть? - "; cin >> h;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	} cout << endl;
	for(int i = 0; i < h; i++)
	for (int i = 0; i < n; i++)
	{
		swap(arr[i],arr[n - 1]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	} cout << endl;
	system("pause");
	system("cls");
	main();
#endif // SHIFT

	
}