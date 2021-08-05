#include"Shift.h"

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
	} return 0;
}
double ShiftLeft(double arr[][C], int m, int R, int C)
{
	double buf = 0;
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
	} return 0;
}
float ShiftLeft(float arr[][C], int m, int R, int C)
{
	float buf = 0;
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
	} return 0;
}
short ShiftLeft(short arr[][C], int m, int R, int C)
{
	short buf = 0;
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
	} return 0;
}
char ShiftLeft(char arr[][C], int m, int R, int C)
{
	char buf = 0;
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
	} return 0;
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
	}return 0;
}
double ShiftRight(double arr[][C], int m, int R, int C)
{
	double buf = 0;
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
	}return 0;
}
float ShiftRight(float arr[][C], int m, int R, int C)
{
	float buf = 0;
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
	}return 0;
}
short ShiftRight(short arr[][C], int m, int R, int C)
{
	short buf = 0;
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
	} return 0;
}
char ShiftRight(char arr[][C], int m, int R, int C)
{
	char buf = 0;
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
	} return 0;
}