#include<iostream>
#include<conio.h>
#include <ctime>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define KEYBIN	//Ввод и вывод массива / Array input and output
// GAME	//Игра, введи от 0 до 20 числа, если одно твое число сойдется с рандомным числом машины, то ты выиграл / Game, enter from 0 to 20 numbers, if one of your numbers matches the random number of the car, then you have won. 
//#define MAXANDMIN	//Вывод максимума и минимума, не меняя массив. Могут быть недочеты / Output of the maximum and minimum without changing the array. There may be shortcomings.
//#define SHIFT	//Сдвиг массива только направо / Shifting the array to the right only
//#define SHIFTTWO	//Сдвиг массива с выбором направления / Shifting an array with a choice of direction
//#define RANDANDSORT	//Рандомные числа, массив = 20, от 0 до 50, могут повторяться (метод выбора) / Random numbers, array = 20, from 0 to 50, can be repeated (selection method)
//#define RANDANDSORT2	//Рандомные числа без повторений, массив = 20, от 0 до 50 (метод выбора) / Random numbers without repetitions, array = 20, from 0 to 50 (selection method)
//#define RANDANDSORT3	//Рандомные числа без повторений, двумерный массив = 20, от 0 до 50 (метод выбора) ПЕРЕПИСАТЬ !!!

void main()
{
	setlocale(LC_ALL, "rus");

	//const int SIZE = 5;	//Разкомментировать для первых 3х дефайнов / Un-comment for the first 3 defines
	//int arr[SIZE];		//Разкомментировать для первых 3x дефайнов / Un-comment for the first 3 defines

#ifdef KEYBIN
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " " << endl;
#endif // KEYBIN

#ifdef GAME
	srand(time(NULL));
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
			cout << "Ты попал!" << endl;
		else if (arr[i] != n && i == SIZE - 1)
			cout << "Ты не попал! " << endl;
	}
#endif // GAME

#ifdef MAXANDMIN
	srand(time(0));
	for (int i = 0; i < SIZE;cout << arr[i] << " ", i++)
		arr[i] = rand() % 20; cout << endl;
	int max = arr[0], min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min >= arr[i]) min = arr[i];
		if (max <= arr[i]) max = arr[i];
	}
	cout << "Минимальное: " << min << endl;
	cout << "Максимальное: " << max;

	/*int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;;
	cout << (double)sum / SIZE << endl;*/

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
		for (int i = 0; i < n; i++)
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

#ifdef RANDANDSORT
	const int S = 20;
	int arr[S] = {};
	int buffer = 0;
	srand(time(0));
	for (int i = 0; i < S; cout << arr[i] << " ", i++)
	{
		arr[i] = rand() % 50;
	}
	for (int i = 0; i < S; i++)
		for (int j = i + 1; j < S; j++)
		{
			if (arr[i] >= arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	cout << endl;
	for (int i = 0; i < S; i++)
		cout << arr[i] << " "; cout << endl;

	system("pause");
	system("cls");
	main();
#endif // RANDANDSORT

#ifdef RANDANDSORT2
	const int S = 20;
	int arr[S] = {};
	int buffer = 0;
	srand(time(0));
	for (int i = 0; i < S; i++)
	{
		arr[i] = rand() % 50;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					arr[i] = 0; i--;
				}
			}
	}
	for (int i = 0; i < S; i++)
		cout << arr[i] << " ";
	for (int i = 0; i < S; i++)
		for (int j = i + 1; j < S; j++)
		{
			if (arr[i] >= arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	cout << endl;
	for (int i = 0; i < S; i++)
		cout << arr[i] << " "; cout << endl;
	system("pause");
	system("cls");
	main();
#endif // RANDANDSORT2

#ifdef RANDANDSORT3
	const int S = 20, r = 2; //r - row - Ряд; S - section - секция
	int arr[r][S] = { {}, {} };
	int buffer = 0;
	srand(time(0));
	for (int i = 0; i < S; i++)
	{
		arr[1][i] = arr[0][i] = rand() % 50;
		if (i > 0) for (int j = 0; j < i; j++) if (arr[0][i] == arr[0][j]) { arr[0][i] = 0; i--; }
	}
	for (int i = 0; i < S; i++)
		for (int j = i + 1; j < S; j++) if (arr[1][i] > arr[1][j]) swap(arr[1][i], arr[1][j]);

	for (int i = 0; i < S; i++) cout << arr[0][i] << "\t" << arr[1][i] << endl;
	system("pause");
	system("cls");
	main();
#endif // RANDANDSORT3
}