#include<iostream>
#include<ctype.h>
#include<Windows.h>
using namespace std;
using::cout;
using::cin;
using::endl;

//http://cplusplus.com/reference/cctype/

void c_isalnum(char* str);
void c_isalpha(char* str);
void c_isblank(char* str);
void c_iscntrl(char* str);
void c_isdigit(char* str);

void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 50;
	char str[50]{};
	cout << "Введите строку: "; cin.getline(str, n);
	//c_isalnum(str);
	//c_isalpha(str);
	//c_isblank(str);
	//c_iscntrl(str);
	//c_isdigit(str);

}

void c_isalnum(char* str)
{	//Проверяет, является ли символ str[i] буквой(заглавной, либо строчной) либо десятичной цифрой. В случае истины, вернет число (не 0).
	//Зависит от используемой локали!!!
	int i = 0;
	while (isalnum(str[i]))i++;
	cout << "Первые " << i << " символов являются буквенно - цифровыми!" << endl;
}
void c_isalpha(char* str)
{	//Проверяет, является ли символ str[i] буквой(заглавной, либо строчной). В случае истины, вернет число (не 0).
	//Зависит от используемой локали!!!
	int i = 0;
	while (isalpha(str[i]))i++;
	cout << "Первые " << i << " символов являются буквами!" << endl;
}
void c_isblank(char* str)
{	//Проверяет, является ли символ "пустым". Под пустыми подразумеваются символы " " и "\t".
	//Зависит от используемой локали!!!
	//Примечание по совместимости: Стандартизирован в C99 (C++11).
	char c;
	int i = 0;
	while (str[i])
	{	
		c = str[i];
		if (isblank(c)) cout << endl;
		else cout << c; 
		i++;	
	}
}
void c_iscntrl(char* str)
{	//Проверяет, является ли символ управляющим. Под управляющими подразумеваются такие символы как \n, \t, \v, \f, \r и другие.
	//Зависит от используемой локали!!!
	char str_example[] = "First line \nsecond line";
	cout << str_example << endl;	//Пример строки с управляющими символами
	int i = 0;
	cout << "Строка до певого управляющего символа: \n";
	while (!iscntrl(str_example[i]))
	{
		cout << str_example[i];
		i++;
	}
}
void c_isdigit(char* str)
{	//Проверяет, является ли символ десятичным числом от 0 до 9;
	//Зависит от используемой локали!!!
	int i = 0;
	while (isdigit(str[i]))i++;
	cout << "Первые " << i << " символов являются цифрами." << endl;
}