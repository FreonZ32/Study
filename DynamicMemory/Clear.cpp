#include"Clear.h"

template<typename T>
void clear(T**& arr2, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++) delete[] arr2[i];
	delete[] arr2;
}