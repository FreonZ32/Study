#include"PopBackAndFront.h"

template<typename T>
T* push_back(T arr[], int& n, int value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}
template<typename T>
void push_row_back2_0(T**& arr2, int& rows, int& cols)
{
	T** buffer = new T * [rows + 1];
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr2[i];
	}
	delete[] arr2;
	buffer[rows] = new T[cols]{};
	arr2 = buffer;
	++rows;
}
template<typename T>
void D_push_back_cols(T** arr2, int& rows, int& cols, int value)
{
	cols += value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols]{};
		for (int j = 0; j < cols - value; j++)
		{
			buffer[j] = arr2[i][j];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}

template<typename T>
T* push_front(T arr[], int& n, int value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
template<typename T>
void push_row_front2_0(T**& arr2, int& rows, int& cols)
{
	++rows;
	T** buffer = new T * [rows];
	for (int i = 0; i < rows - 1; i++)
	{
		buffer[i + 1] = arr2[i];
	}
	buffer[0] = new T[cols]{};
	delete[] arr2;
	arr2 = buffer;
}
template<typename T>
void D_push_cols_front(T** arr2, int& rows, int& cols, int value)
{
	cols += value;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols]{};
		for (int j = 0; j < cols; j++)
		{
			buffer[j + value] = arr2[i][j];
		}
		delete[] arr2[i];
		arr2[i] = buffer;
	}
}