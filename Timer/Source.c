#include<iostream>
#include <Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;



#define tab "\t"

void main()
{
	setlocale(LC_ALL, "rus");

	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)
			{
				cout << h << ":" << m << ":" << s << endl;
				Sleep(10);
				system("CLS");
			}
		}
	}
}