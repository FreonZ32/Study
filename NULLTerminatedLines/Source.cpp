#include<iostream>
#include<Windows.h>
using namespace std;
using::cin;
using::cout;
using::endl;

int SringLength(char str[]);


void main()
{
	setlocale(LC_ALL, "rus");
	//char str[] = { 'H', 'e','l', 'l', 'o', 0};
	//char str[] = "Hello";
	const int n = 20;
	char str[20]{};
	cout << " ¬ведите строку: "; 
	//cin >> str;	//ввод строки (каждый пробел - разделение)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.getline(str, n);	//ввод строк с пробелами
	cout << str << endl;
	cout << SringLength(str);

}
int SringLength(char str[])
{
	int n =0;
	/*for (int i = 0; str[i]; i++)
	{
		if ((int)str[i] != 0)n++;
	}*/
	for (; str[n]; n++);
	return n;
}