#include"Statistics.h"

int Sum(int arr[][C], int R, int C)
{
	int summa = 0;
	for (int i = 0; i < R * C; i++)
	{
		summa += arr[i / C][i % C];
	}
	return summa;
}
double Sum(double arr[][C], int R, int C)
{
	double summa = 0;
	for (int i = 0; i < R * C; i++)
	{
		summa += arr[i / C][i % C];
	}
	return summa;
}
float Sum(float arr[][C], int R, int C)
{
	float summa = 0;
	for (int i = 0; i < R * C; i++)
	{
		summa += arr[i / C][i % C];
	}
	return summa;
}
short Sum(short arr[][C], int R, int C)
{
	short summa = 0;
	for (int i = 0; i < R * C; i++)
	{
		summa += arr[i / C][i % C];
	}
	return summa;
}
char Sum(char arr[][C], int R, int C)
{
	cout << "Who folds the letters? Are you serious?\n";
	return 0;
}

int Avg(int arr[][C], int R, int C)
{
	return Sum(arr, R, C) / (R * C);
}
double Avg(double arr[][C], int R, int C)
{
	return (double)Sum(arr, R, C) / ((long long)R * C);
}
float Avg(float arr[][C], int R, int C)
{
	return (float)Sum(arr, R, C) / ((long long)R * C);
}
short Avg(short arr[][C], int R, int C)
{

	return Sum(arr, R, C) / (R * C);
}
char Avg(char arr[][C], int R, int C)
{
	cout << "Arithmetic mean of letters? Quite already?\n";
	return 0;
}

int maxValueIn(int arr[][C], int R, int C)
{
	int max = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (max <= arr[i / C][i % C]) max = arr[i / C][i % C];
	return max;
}
double maxValueIn(double arr[][C], int R, int C)
{
	double max = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (max <= arr[i / C][i % C]) max = arr[i / C][i % C];
	return max;
}
float maxValueIn(float arr[][C], int R, int C)
{
	float max = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (max <= arr[i / C][i % C]) max = arr[i / C][i % C];
	return max;
}
short maxValueIn(short arr[][C], int R, int C)
{
	short max = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (max <= arr[i / C][i % C]) max = arr[i / C][i % C];
	return max;
}
char maxValueIn(char arr[][C], int R, int C)
{
	char max = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if ((int)max <= (int)arr[i / C][i % C]) max = arr[i / C][i % C];
	return max;
}

int minValueIn(int arr[][C], int R, int C)
{
	int min = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (min >= arr[i / C][i % C]) min = arr[i / C][i % C];
	return min;
}
double minValueIn(double arr[][C], int R, int C)
{
	double min = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (min >= arr[i / C][i % C]) min = arr[i / C][i % C];
	return min;
}
float minValueIn(float arr[][C], int R, int C)
{
	float min = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (min >= arr[i / C][i % C]) min = arr[i / C][i % C];
	return min;
}
short minValueIn(short arr[][C], int R, int C)
{
	short min = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if (min >= arr[i / C][i % C]) min = arr[i / C][i % C];
	return min;
}
char minValueIn(char arr[][C], int R, int C)
{
	char min = arr[0][0];
	for (int i = 0; i < R * C; i++)
		if ((int)min >= (int)arr[i / C][i % C]) min = arr[i / C][i % C];
	return min;
}