#pragma once
#include"Stdafx.h"

template<typename T>
void allocate(T**& arr2, int& rows, int& cols);

template<typename T>
void FillRand(T arr[], const unsigned int n);
template<typename T>
void D_FillRand(T** arr2, const unsigned int rows, const unsigned int cols);
