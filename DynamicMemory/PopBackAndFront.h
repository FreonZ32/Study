#pragma once
#include"Stdafx.h"

template<typename T>
T* pop_back(T arr[], int& n);
template<typename T>
void pop_row_back2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_pop_cols_back(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* pop_front(T arr[], int& n);
template<typename T>
void pop_row_front2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_pop_cols_front(T** arr2, int& rows, int& cols, int value);
