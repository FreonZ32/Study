#include"Print.h"

template<typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
template<typename T>
void D_Print(T** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename T>
void Print2_0(T** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(*(arr2 + i) + j) << " ";
		}cout << endl;
	}
}