#include"AllocateAndFillrand.h"

template<typename T>
void allocate(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) arr2[i] = new T[cols]{};
}

template<typename T>
void FillRand(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 / 2.0;
	}
}
template<typename T>
void D_FillRand(T** arr2, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = rand() % 100 / 2.0;
		}
	}
}