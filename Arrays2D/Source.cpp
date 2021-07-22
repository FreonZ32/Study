#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define EXAMPLE
//#define ARITH_MAX_MIX_SORT
//#define UNIQUENUMBERS
//#define SEARCH
//#define THE_MATRIX_ADD
//#define THE_MATRIX_MULT

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef EXAMPLE
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif // EXAMPLE

#ifdef ARITH_MAX_MIX_SORT
	const int R = 8; //Rows
	const int C = 5; //Cols
	int arr[R][C] = { {}, {}, {} };
	//Заполнение массива / Filling in the array
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; cout << arr[i][j++] << " ")
		{
			arr[i][j] = rand() % C;
		}
		cout << endl;
	} cout << endl;
	//Среденее арифметическое / Arithmetic mean
	//Максимальное и минимальное значение / Maximum and minimum values
	int totalyn = R * C;	//Всего чисел / Total numbers
	int sum = 0; //Сумма / amount
	int max = arr[0][0], min = arr[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			sum += arr[i][j];
			if (min > arr[i][j])min = arr[i][j];
			if (max < arr[i][j])max = arr[i][j];
		}
	}
	cout << "Arithmetic mean: " << (double)sum / totalyn << endl;
	printf("Arithmetic mean: %d\n", sum / totalyn); cout << endl;
	printf("Maximum value: %d\nMinimum value: %d\n", max, min);
	cout << endl;
	//Сортировочка / Sortirovochka / Sort 
	int iterations = 0;
	for (int k = 0; k < R * C; k++)
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				if (arr[k / 10][k % 10] < arr[i][j]) swap(arr[k / 10][k % 10], arr[i][j]);
				iterations++;
			}
		}
	cout << "Массив отсортирован за " << iterations << " итераций" << endl;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; cout << arr[i][j++] << " ");
		cout << endl;
	}
#endif // ARITH_MAX_MIX_SORT

#ifdef UNIQUENUMBERS
	const int R = 3; //Rows
	const int C = 10; //Cols
	int arr[R][C] = { {}, {}, {} };

	for (int i = 0; i < R * C; i++)
	{
		bool unique;
		do
		{
			arr[i / C][i % C] = rand() % (R * C);
			unique = true;
			for(int j = 0; j < i; j++)
			{
				if (arr[i / C][i % C] == arr[j / C][j % C])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; cout << arr[i][j++] << "\t");
		cout << endl;
	}
#endif // UNIQUENUMBERS

#ifdef SEARCH
	const int R = 3; //Rows
	const int C = 10; //Cols
	int arr[R][C] = { {}, {}, {} };
	//Заполнение массива и его вывод / Filling in the array and its output
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; cout << arr[i][j++] << " ")
		{
			arr[i][j] = rand() % C;
		}
		cout << endl;
	} cout << endl;
	//Поиск повторений / Search for repetitions
	for (int i = 0; i < R * C; i++)
	{
		bool already = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i / C][i % C] == arr[j / C][j % C])
			{
			already = true;
			break;
			}
		}
		if (already)continue;
		int count = 1;
		for (int j = i + 1; j < R*C; j++)
		{
			if (arr[i/C][i%C] == arr[j/C][j%C])count++;
		}
		if (count > 2)
			cout << "Number " << arr[i / C][i % C] << " was appeared " << count << " times" << endl;
		else if (count > 1)
			cout << "Number " << arr[i / C][i % C] << " was repeated " << count << " times" << endl;
	}
#endif // SEARCH

#ifdef THE_MATRIX_ADD
	const int R = 3; //Rows
	const int C = 5; //Cols
		//Заполнение массива / Filling in the array
	int arr1[R][C] = { {}, {}, {} };
	for (int i = 0; i < R * C; cout << arr1[i / C][i % C] << " ", i++)
		arr1[i / C][i % C] = rand() % C;
	cout << endl << "+" << endl;

	int arr2[R][C] = { {}, {}, {} };
	for (int i = 0; i < R * C; cout << arr2[i / C][i % C] << " ", i++)
		arr2[i / C][i % C] = rand() % C;
	cout << endl << "=" << endl;

	int arrsum[R][C] = { {}, {}, {} };
		//Сложение матриц / Matrix addition
	for (int i = 0; i < R * C; i++)
	{
		arrsum[i / C][i % C] = arr1[i / C][i % C] + arr2[i / C][i % C];
	}
		//Вывод / Cout
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)cout << arrsum[i][j] << " ";
#endif // THE_MATRIX_ADD

#ifdef THE_MATRIX_MULT
	const int R = 4;
	const int C = 5;
		//Объявление массивов и их заполнение / Declaring arrays and filling them
	int arr1[R][C] = { {}, {}, {} };
	cout << "Array №1:" << endl;
	for (int i = 0; i < R * C; i++)
	{
		arr1[i / C][i % C] = rand() % C;
		cout << arr1[i / C][i % C] << " ";
		if (i % C == C - 1)cout << endl;
	} cout << endl;

	cout << "Array №2:" << endl;
	int arr2[C][R] = { {}, {}, {}, {} };
	for (int i = 0; i < R * C; i++)
	{
		arr2[i / R][i % R] = rand() % C;
		cout << arr2[i / R][i % R] << " ";
		if (i % R == R - 1)cout << endl;
	} cout << endl;

	int arrMul[R][R] = { {}, {}, {} };
		//Умножение мариц и заполнение результирующего массива / Multiplying marits and filling in the resulting array
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++)
		{
			int sum = 0;
			for (int k = 0; k < C; k++)
			{
				sum += (arr1[i][k] * arr2[k][j]);
			}
			arrMul[i][j] = sum;
		}
	}
		//Вывод массива умноженных матриц / Output of an array of multiplied matrices
	cout << "Array №1*№2:" << endl;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++) cout << arrMul[i][j] << "\t";
		cout << endl;
	}
#endif // THE_MATRIX_MULT
}