#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

bool Escape = false;
const int height = 4, length = 4;

void main()
{
	setlocale(LC_ALL, "rus");
	int** arr = new int* [height];
	for (int i = 0; i < height; i++)arr[i] = new int [length] {};
	for (int i = 0; i < height*length; i++)
	{
		arr[i / length][i % length] = rand() % (height*length);
		for (int j = 0; j < i; j++)
		{
			if (arr[j / length][j % length] == arr[i / length][i % length])
			{
				arr[i / length][i % length] = 0; i--;
			}
		}
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
	/*do
	{


	} while (Escape);*/
	for (int i = 0; i < height; i++)delete[] arr[i];
	delete[] arr;
}
