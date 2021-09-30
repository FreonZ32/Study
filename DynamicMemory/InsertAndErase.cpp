#include"InsertAndErase.h"

template<typename T>
T* insert(T arr[], int& n, int indif, int value)
{
	if (indif >= n) { cout << "Индекс превышает размер массива!\t"; return arr; }
	else
	{
		T* buffer = new T[n + 1];
		for (int i = 0, k = 0; i < n; i++, k++)
		{
			if (i == indif)k++;
			buffer[k] = arr[i];
		}
		delete[] arr;
		arr = buffer;
		arr[indif] = value;
		n++;
		return arr;
	}
}
template<typename T>
void insert_row2_0(T**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " Индекс больше массива! \n";
	else
	{
		T** buffer = new T * [rows + 1];
		for (int i = 0; i < rows; i++)
		{
			if (i >= index)buffer[i + 1] = arr2[i];
			else buffer[i] = arr2[i];
		}
		buffer[index] = new T[cols]{};
		delete[] arr2;
		arr2 = buffer;
		rows++;
	}
}
template<typename T>
void D_insert_cols(T** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		cols += value;
		for (int i = 0; i < rows; i++)
		{
			T* buffer = new T[cols]{};
			for (int j = 0; j < cols - value; j++)
			{
				if (j >= index)buffer[j + value] = arr2[i][j];
				else buffer[j] = arr2[i][j];
			}
			delete[] arr2[i];
			arr2[i] = buffer;
		}
	}
}

template<typename T>
T* erase(T arr[], int& n, int indif)
{
	if (indif >= n) { cout << "Индекс превышает размер массива!\t"; return arr; }
	else
	{
		T* buffer = new T[n - 1];
		for (int i = 0, k = 0; i < n; i++)
		{
			if (i == indif)k++;
			buffer[i] = arr[i + k];
		}
		delete[] arr;
		arr = buffer;
		n--;
		return arr;
	}
}
template<typename T>
void erase_row2_0(T**& arr2, int& rows, int& cols, int index)
{
	if (index >= rows)cout << " Индекс больше массива! \n";
	else
	{
		--rows;
		T** buffer = new T * [rows];
		for (int i = 0; i < rows; i++)
		{
			if (i >= index)buffer[i] = arr2[i + 1];
			else buffer[i] = arr2[i];
		}
		delete[] arr2;
		arr2 = buffer;
	}
}
template<typename T>
void D_erase_cols(T** arr2, int& rows, int& cols, int index, int value)
{
	if (index >= cols)cout << " Индекс больше массива! \n";
	else
	{
		cols -= value;
		for (int i = 0; i < rows; i++)
		{
			T* buffer = new T[cols]{};
			for (int j = 0; j < cols; j++)
			{
				if (j >= index)buffer[j] = arr2[i][j + value];
				else buffer[j] = arr2[i][j];
			}
			delete[] arr2[i];
			arr2[i] = buffer;
		}
	}
}