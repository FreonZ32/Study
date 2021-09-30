#pragma once
#include"Stdafx.h"

template<typename T>
T* push_back(T arr[], int& n, int value);
template<typename T>
void push_row_back2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_push_back_cols(T** arr2, int& rows, int& cols, int value);

template<typename T>
T* push_front(T arr[], int& n, int value);
template<typename T>
void push_row_front2_0(T**& arr2, int& rows, int& cols);
template<typename T>
void D_push_cols_front(T** arr2, int& rows, int& cols, int value);
