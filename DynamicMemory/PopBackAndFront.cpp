#include"PopBackAndFront.h"

template<typename T>
T* pop_back(T arr[], int& n)
{
	n--;
	T* buffer = new T[n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	return arr;
}
template<typename T>
void pop_row_back2_0(T**& arr2, int& rows, int& cols)
{
	--rows;
	T** buffer = new T * [rows];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i];
	}
	delete[] arr2;
	arr2 = buffer;
}
template<typename T>
void D_pop_cols_back(T** arr2, int& rows, int& cols, int value)
{
	cols -= value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols]{};
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr2[i][j];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}

template<typename T>
T* pop_front(T arr[], int& n)
{
	T* buffer = new T[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
template<typename T>
void pop_row_front2_0(T**& arr2, int& rows, int& cols)
{
	T** buffer = new T * [rows - 1];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i + 1];
	}
	delete[] arr2;
	arr2 = buffer;
	rows--;
}
template<typename T>
void D_pop_cols_front(T** arr2, int& rows, int& cols, int value)
{
	cols -= value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols]{};
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr2[i][j + value];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}