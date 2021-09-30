#pragma once
#include"Stdafx.h"

template<typename T>
T* insert(T arr[], int& n, int indif, int value);
template<typename T>
void insert_row2_0(T**& arr2, int& rows, int& cols, int index);
template<typename T>
void D_insert_cols(T** arr2, int& rows, int& cols, int index, int value);

template<typename T>
T* erase(T arr[], int& n, int indif);
template<typename T>
void erase_row2_0(T**& arr2, int& rows, int& cols, int index);
template<typename T>
void D_erase_cols(T** arr2, int& rows, int& cols, int index, int value);
