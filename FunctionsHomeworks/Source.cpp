#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define RETURN cout << "What did you inject me with ? You're rubbing some kind of game into me, let's do it again!\n";system("pause");system("cls");main();
#define CLEARANDBACK system("pause");system("cls");main();
const int R = 2;
const int C = 10;
int move;
	//Прототипы / Prototypes
int Array(int arr[][C], int rangeRand, char Unique = 'n', bool uniq = false, int R = 2, int C = 10);
int Aout(int arr[][C], int R, int C);
int Sum(int arr[][C], int R, int C);
int Avg(int arr[][C], int R, int C);
int maxValueIn(int arr[][C], int R, int C);
int minValueIn(int arr[][C], int R, int C);
int ShiftLeft(int arr[][C], int m, int R, int C);
int ShiftRight(int arr[][C], int m, int R, int C);
int Sort(int arr[][C], int R, int C);
int SortByShell(int arr[][C], int R, int C);

void main()
{
	setlocale(LC_ALL, "rus");
	int rangeRand;
	char Unique = 'n';
	int arr[R][C];
	cout << "What range of values do you want? >| "; cin >> rangeRand;
	if (rangeRand >= 20)
	{
		cout << "Create a unique array? y/n "; cin >> Unique;
		if (Unique == 'y' || Unique == 'n'){ Array(arr, rangeRand, Unique); }
		else { RETURN; }	//При отсутствии {} во время вызова define и функций возникают ошибки через раз. / If there is no {} during the call of define and functions, errors occur every other time.
	}
	else Array(arr, rangeRand);
	Aout(arr,R,C);
	int item, move = 0;
	cout << "What do you want to do?\n"
		<< char(17) << " The sum of the numbers - 1\n"
		<< char(17) << " Arithmetic mean - 2\n"
		<< char(17) << " The maximum value in the array - 3\n"
		<< char(17) << " The minimum value in the array - 4\n"
		<< char(17) << " Shifting the array to the right - 5\n"
		<< char(17) << " Shifting the array to the left - 6\n"
		<< char(17) << " Sorting by array selection - 7\n"
		<< char(17) << " Sorting by an array using the Shell method - 8\n\n"
		<< "I choose >| "; cin >> item;
	if (item == 5 || item == 6) {cout << " And how much should I move it ? >|"; cin >> move;}
	else if (item < 1 || item > 8) { RETURN; }
	switch (item)
	{
	case 1: cout << "The sum of all the numbers = " << Sum(arr, R, C) << endl; break;
	case 2: cout << "Arithmetic mean  = " <<  Avg(arr,R,C) << endl; break;
	case 3: cout << "The maximum value in the array = " << maxValueIn(arr,R,C) << endl; break;
	case 4: cout << "The minimum value in the array = " << minValueIn(arr,R,C) << endl; break;
	case 5: cout << "Shift the array to the right by " << move << " values:\n", ShiftRight(arr, move, R, C); break;
	case 6: cout << "Shifting the array to the left by " << move << " values:\n", ShiftLeft(arr, move, R, C); break;
	case 7: cout << "Sorted array:\n", Sort(arr, R, C); break;
	case 8: cout << "Sorted array using the Shell method:\n", SortByShell(arr, R, C); break;
	default: cout << "Something went wrong\n"; break;
	}
	CLEARANDBACK;
}

int Array(int arr[][C], int rangeRand, char Unique, bool uniq, int R, int C)
{
	for (int i = 0; i < R * C; i++)
	{

		do
		{
			arr[i / C][i % C] = rand() % rangeRand;
			if (Unique == 'n')break;
			else if (Unique == 'y')
			{
				uniq = true;
				for (int j = 0; j < i; j++)
				{
					if (arr[i / C][i % C] == arr[j / C][j % C])
					{
						uniq = false;
						break;
					}
				}
			}
		} while (!uniq);
	}return 0;
}
int Aout(int arr[][C], int R, int C)
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << arr[i][j] << "\t";
		}cout << endl;
	}cout << endl; return 0;
}
int Sum(int arr[][C], int R, int C)
{
	int summa = 0;
	for (int i = 0; i < R * C; i++)
	{
		summa += arr[i / C][i % C];
	}
	return summa;
}
int Avg(int arr[][C], int R, int C)
{
	return Sum(arr, R, C) / (R * C);
}
int maxValueIn(int arr[][C], int R, int C)
{
	int max = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (max <= arr[i / C][i % C]) max = arr[i / C][i % C];
	return max;
}
int minValueIn(int arr[][C], int R, int C)
{
	int min = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (min >= arr[i / C][i % C]) min = arr[i / C][i % C];
	return min;
}
int ShiftLeft(int arr[][C], int m, int R, int C)
{
	int buf = 0;
	for (int i = 0; i < m; i++)
	{
		buf = arr[0][0];
		for (int j = 0; j < R * C - 1; j++)
		{

			arr[j / C][j % C] = arr[(j + 1) / C][(j + 1) % C];
			if (j == R * C - 2)
			{
				arr[0][R * C - 1] = buf;
				break;
			}
		}
	} Aout(arr,R,C); return 0;
}
int ShiftRight(int arr[][C], int m, int R, int C)
{
	int buf = 0;
	for (int i = 0; i < m; i++)
	{
		buf = arr[0][R * C - 1];
		for (int j = R * C - 1; j >= 0; j--)
		{

			arr[j / C][j % C] = arr[(j - 1) / C][(j - 1) % C];
			if (j == 0)
			{
				arr[0][0] = buf;
				break;
			}
		}
	} Aout(arr,R,C); return 0;
}
int Sort(int arr[][C], int R, int C)
{
	int iter = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R*C; i++)
		{
				if (arr[k / C][k % C] < arr[i/C][i%C]) swap(arr[k / C][k % C], arr[i/C][i%C]);
				iter++;
		}
	cout << "Iterations completed: " << iter << endl;
	Aout(arr,R,C);
	return 0;
}
int SortByShell(int arr[][C], int R, int C)
{
	int iter = 0;
	int j, step;
	int tmp;
	for (step = R * C / 2; step > 0; step /= 2)
		for (int i = step; i < R * C; i++)
		{
			tmp = arr[i / C][i % C];
			for (j = i; j >= step; j -= step)
			{
				if (tmp < arr[j / C][j % C - step]) 
				{
					arr[j / C][j % C] = arr[j / C][j % C - step];
				iter++;
				}
				else
					break;
			}
			arr[j / C][j % C] = tmp;
		}
	cout << "Iterations completed: " << iter << endl;
	Aout(arr,R,C);
	return 0;
}