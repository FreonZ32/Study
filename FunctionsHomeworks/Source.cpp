#include "Stdafx.h"

//Прототипы / Prototypes
#include"Array.h"
#include"Auout.h"
#include"Statistics.h"
#include"Shift.h"
#include"Sort.h"

void main()
{
	setlocale(LC_ALL, "rus");
	int rangeRand;
	char Unique = 'n';

	int arr[R][C];
	//double arr[R][C];
	//float arr[R][C];
	//short arr[R][C];
	//char arr[R][C];	
	
	cout <<" What range of values do you want? >| "; cin >> rangeRand;	//!!! The value of variations should not be more than 25 with the type of char array  !!!!!
	if (rangeRand >= 20)
	{
		cout << "Create a unique array? y/n "; cin >> Unique;
		if (Unique == 'y' || Unique == 'n') { Array(arr, rangeRand, Unique); }
		else { RETURN; }	//При отсутствии {} во время вызова define и функций возникают ошибки через раз. / If there is no {} during the call of define and functions, errors occur every other time.
	}
	else Array(arr, rangeRand);
	Aout(arr, R, C);
	int item, move;
	cout << "What do you want to do?\n"
		<< char(17) << " The sum of the numbers - 1\n"
		<< char(17) << " Arithmetic mean - 2\n"
		<< char(17) << " The maximum value in the array - 3\n"
		<< char(17) << " The minimum value in the array - 4\n"
		<< char(17) << " Shifting the array to the right - 5\n"
		<< char(17) << " Shifting the array to the left - 6\n"
		<< char(17) << " Sorting by array selection - 7\n"
		<< char(17) << " Sorting by an array using the Shell method - 8\n\n"
		<< "I choose >| "; cin >> item;
	if (item == 5 || item == 6) { cout << " And how much should I move it ? >|"; cin >> move; }
	else if (item < 1 || item > 8) { RETURN; }
	switch (item)
	{
	case 1: cout << "The sum of all the numbers = " << Sum(arr, R, C) << endl; break;
	case 2: cout << "Arithmetic mean  = " << Avg(arr, R, C) << endl; break;
	case 3: cout << "The maximum value in the array = " << maxValueIn(arr, R, C) << endl; break;
	case 4: cout << "The minimum value in the array = " << minValueIn(arr, R, C) << endl; break;
	case 5: cout << "Shift the array to the right by " << move << " values:\n", ShiftRight(arr, move, R, C); break;
	case 6: cout << "Shifting the array to the left by " << move << " values:\n", ShiftLeft(arr, move, R, C); break;
	case 7: cout << "Array sorted by:" << Sort(arr, R, C) << " Iterations\n",Aout(arr, R, C); break;
	case 8: cout << "Sorted array using the Shell method by: " << SortByShell(arr, R, C) << " Iterations\n",Aout(arr, R, C); break;
	default: cout << "Something went wrong\n"; break;
	}
	CLEARANDBACK;
}