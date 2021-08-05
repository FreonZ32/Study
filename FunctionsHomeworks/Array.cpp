#include"Array.h"

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
double Array(double arr[][C], int rangeRand, char Unique, bool uniq, int R, int C)
{
	for (int i = 0; i < R * C; i++)
	{

		do
		{
			arr[i / C][i % C] = (double(rand() % rangeRand) / 1.1);
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
float Array(float arr[][C], int rangeRand, char Unique, bool uniq, int R, int C)
{
	for (int i = 0; i < R * C; i++)
	{

		do
		{
			arr[i / C][i % C] = (float(rand() % rangeRand) / 0.1);
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
short Array(short arr[][C], int rangeRand, char Unique, bool uniq, int R, int C)
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
char Array(char arr[][C], int rangeRand, char Unique, bool uniq, int R, int C)
{
	for (int i = 0; i < R * C; i++)
	{

		do
		{
			arr[i / C][i % C] = char(65 + (rand() % rangeRand));
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
