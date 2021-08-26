#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	const int L = 6, C = 6;
	int l = 0,k = 0;
	char arr[L][C] = {};
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (i == 0 && (j >= 2 && j <= 4))
			{
				arr[i][j] = (char)l+49;
				l++;
			}
			else if (j == 0 && (i >=2 && i <=4))
			{
				arr[i][j] = (char)k+97;
				k++;
			}
			else if (j == 1)
				arr[i][j] = (char)219;
			else if (i == 1)
				arr[i][j] = (char)254;
			else arr[i][j] = (char)255;
		}
	}

	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << arr[i][j];
		}cout << endl;
	}

}
