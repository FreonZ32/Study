#include"Sort.h"

int Sort(int arr[][C], int R, int C)
{
	int iter = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R * C; i++)
		{
			if (arr[k / C][k % C] < arr[i / C][i % C]) swap(arr[k / C][k % C], arr[i / C][i % C]);
			iter++;
		}
	return iter;
}
int Sort(double arr[][C], int R, int C)
{
	int iter = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R * C; i++)
		{
			if (arr[k / C][k % C] < arr[i / C][i % C]) swap(arr[k / C][k % C], arr[i / C][i % C]);
			iter++;
		}
	return iter;
}
int Sort(float arr[][C], int R, int C)
{
	int iter = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R * C; i++)
		{
			if (arr[k / C][k % C] < arr[i / C][i % C]) swap(arr[k / C][k % C], arr[i / C][i % C]);
			iter++;
		}
	return iter;
}
int Sort(short arr[][C], int R, int C)
{
	int iter = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R * C; i++)
		{
			if (arr[k / C][k % C] < arr[i / C][i % C]) swap(arr[k / C][k % C], arr[i / C][i % C]);
			iter++;
		}
	return iter;
}
int Sort(char arr[][C], int R, int C)
{
	int iter = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R * C; i++)
		{
			if ((int)arr[k / C][k % C] < (int)arr[i / C][i % C]) swap(arr[k / C][k % C], arr[i / C][i % C]);
			iter++;
		}
	return iter;
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
	return iter;
}
int SortByShell(double arr[][C], int R, int C)
{
	int iter = 0;
	int j, step;
	double tmp;
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

	return iter;
}
int SortByShell(float arr[][C], int R, int C)
{
	int iter = 0;
	int j, step;
	float tmp;
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
	return iter;
}
int SortByShell(short arr[][C], int R, int C)
{
	int iter = 0;
	int j, step;
	short tmp;
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
	return iter;
}
int SortByShell(char arr[][C], int R, int C)
{
	int iter = 0;
	int j, step;
	char tmp;
	for (step = R * C / 2; step > 0; step /= 2)
		for (int i = step; i < R * C; i++)
		{
			tmp = arr[i / C][i % C];
			for (j = i; j >= step; j -= step)
			{
				if ((int)tmp < (int)arr[j / C][j % C - step])
				{
					arr[j / C][j % C] = (int)arr[j / C][j % C - step];
					iter++;
				}
				else
					break;
			}
			arr[j / C][j % C] = tmp;
		}
	return iter;
}