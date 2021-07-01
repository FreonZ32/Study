#include<iostream>
#include<conio.h>
using namespace std;

//#define KEYBIN
//#define GAME
//#define WHAT
//#define KEYBINANDBACK
//#define MAXANDMIN
//#define SHIFT
//#define SHIFTTWO


void main()
{
	setlocale(LC_ALL, "rus");
	//const int SIZE = 5;	//Разкомментировать для всех, кроме SHIFT
	//int arr[SIZE];		//Разкомментировать для всех, кроме SHIFT

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
	int h, buf; //h = howmany
	int arr[n] = { 4,8,15,16,23,42,1977,2000,156,108 }; //https://lostpedia.fandom.com/ru/wiki/%D0%A7%D0%B8%D1%81%D0%BB%D0%B0
	cout << "На сколько сдвинуть? - "; cin >> h;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	} cout << endl;
	for (int i = 0; i < h; i++)
		for (int i = 0; i < h; i++)
		{
			swap(arr[i], arr[n - 1]);
		}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	} cout << endl;
	system("pause");
	system("cls");
	main();
#endif // SHIFT

#ifdef SHIFTTWO
	const int n = 10;
	int h, buf; //h = howmany
	char k, l = 'l', r = 'r';
	int arr[n] = { 4,8,15,16,23,42,1977,2000,156,108 };

	cout << "На сколько сдвинуть? - "; cin >> h;
	cout << "В какую сторону l / r? - "; cin >> k;
	
		for (int i = 0; i < n; i++)cout << arr[i] << " "; cout << endl;
	if (k == l)
		for (int i = 0; i < h; i++)
		{
			buf = arr[0];
			for (int j = 0; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = buf;
		}
	else if (k == r)
		for (int i = 0; i < h; i++)
		{
			buf = arr[n - 1];
			for (int j = n - 1; j >= 0; j--)
			{
				if (j > 0)
					arr[j] = arr[j - 1];
			}
			arr[0] = buf;
		}
	else
	{
		cout << endl << "Вы ввели неправильное направление сдвига!" << endl;
		system("pause");
		system("cls");
		main();
	}
	for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl;
#endif // SHIFTTWO

}