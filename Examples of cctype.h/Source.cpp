#include<iostream>
#include<ctype.h>
#include<Windows.h>
using namespace std;
using::cout;
using::cin;
using::endl;

void c_isalnum(char* str);


void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 50;
	char str[50]{};
	cout << "Введите строку: "; cin.getline(str, n);
	c_isalnum(str);


}

void c_isalnum(char* str)
{	//Проверяет, является ли символ буквой(заглавной, либо строчной) либо десятичной цифрой.
	//Результат будет истинным, если либо isalpha, либо isdigit также вернут true.
	//Зависит от используемой локали!!!
	int i = 0;
	while (isalnum(str[i]))i++;
	cout << "Первые " << i << " символов являются буквенно - цифровыми!" << endl;
}