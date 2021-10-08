#include<iostream>
#include<Windows.h>
using namespace std;
using::cin;
using::cout;
using::endl;

void ASCII();
int SringLength(char str[]);
void to_upper(char* str, int a = ((int)'а'), int z = ((int)'я'), int l = -32);
void to_lower(char* str);
void shrink(char* str);


void main()
{
	setlocale(LC_ALL, "rus");
	//char str[] = { 'H', 'e','l', 'l', 'o', 0};
	//char str[] = "Hello";
	const int n = 20;
	char str[20]{};
	cout << " Введите строку: "; 
	//cin >> str;	//ввод строки (каждый пробел - разделение)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.getline(str, n);	//ввод строк с пробелами
	cout << str << endl;
	to_upper(str);
	cout << str << endl;
	to_lower(str);
	cout << str << endl;
	shrink(str);
	cout << str << endl;
	//cout << SringLength(str);

	//ASCII();
}

void ASCII()
{
	for (int i = 0; i < 256; i++)
	{
		cout << i << "\t" << (char)i << endl;
	}
}

int SringLength(char str[])
{
	int n = 0;
	for (; str[n]; n++);
	return n;
}

void to_upper(char* str, int a, int z, int l)
{
	for (int i = 0; str[i]; i++)
	{
		if (((int)str[i] >= a) && (int)str[i] <= z) str[i] = char((int)str[i] + l);
	}
}

void to_lower(char* str)
{
	to_upper(str, ((int)'А'), ((int)'Я'), 32);
}

void shrink(char* str)
{
	
}