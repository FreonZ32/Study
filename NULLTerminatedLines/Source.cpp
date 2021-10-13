#include<iostream>
#include<Windows.h>
#include<stdlib.h>
using namespace std;
using::cin;
using::cout;
using::endl;

void ASCII();
int SringLength(char str[]);
void to_upper(char* str, int a = ((int)'а'), int z = ((int)'я'), int l = -32);
void to_lower(char* str);
void shrink(char* str);
void is_palindrome(char* str);

void is_int_numer(char* str, char* cout_n, char f, char s, unsigned short& t_o_n, unsigned short n = 2);
void is_bin_numer(char* str, char* cout_b, char f, char s, unsigned short& t_o_n, unsigned short n = 1);
void is_hex_numer(char* str, char* cout_h, char f, char s, unsigned short& t_o_n, unsigned short n = 3);

unsigned long long int to_int_number(char* str, unsigned short t_o_n);
unsigned long long int bin_to_dec(char* str, unsigned short& t_o_n);
unsigned int hex_to_dec(char* str, unsigned short& t_o_n);

char cout_n[] = "Это десятичное ";
char cout_b[] = "Это двоичное ";
char cout_h[] = "Это шестнадцетеричное ";

void is_mac_adress(char* str, unsigned short int& type_of_adress);
void is_ip_adress(char* str, unsigned short int& type_of_adress);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	const int n = 50;
	char str[50]{};
	unsigned short type_of_number = 0;
	unsigned long long int number = 0;
	unsigned short int type_of_adress = 0;

	//ASCII();

	//cout << " Введите строку(на русском языке): "; cin.getline(str, n);	//ввод строк с пробелами

	//cout << "Переводит строку в верхний регистр: \t"; to_upper(str);
	//cout << str << endl;
	//cout << "Переводит строку в нижний регистр: \t"; to_lower(str);
	//cout << str << endl;
	//cout << "Удаляет лишние пробелы из предложения: \t";  shrink(str);
	//cout << str << endl;
	//cout << "Проверяет, является ли строка палиндромом: \t";  is_palindrome(str);
	//cout << str << endl;

	//cout << " \nВведите строку с числом )0b(двоичное),1b(десятичное),0x(шестнадцатеричная): "; cin.getline(str, n);
	//is_int_numer(str, cout_n, '1','b', type_of_number);
	//is_bin_numer(str, cout_b, '0','b', type_of_number);
	//is_hex_numer(str, cout_h, '0','x', type_of_number);

	////cout << type_of_number;

	//number = to_int_number(str, type_of_number);
	//if(number!=0)cout << endl << number;
	//number = bin_to_dec(str, type_of_number);
	//if (number != 0)cout << endl << number;
	//number = hex_to_dec(str, type_of_number);
	//if (number != 0)cout << endl << number;

	cout << "Введите свой адрес(без сокращений): "; cin >> str;
	is_mac_adress(str,type_of_adress);
	is_ip_adress(str, type_of_adress);
	switch (type_of_adress)
	{
	case 1: cout << "Ето MAC aдресс!\n"; break;
	case 2: cout << "Ето ip aдресс!\n"; break;
	default:cout << "Не правильно введен адрес!";	
	}
	system("PAUSE");
	system("cls");
	main();
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
	for (int i = 0, k = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ' && str[i + 1] != 0)
		{
			for (int j = 0; str[j]; j++)str[i+j] = str[i+j+1];
			i--;
		}
	}
}
void is_palindrome(char* str)
{
	int l = 0;
	bool palindrom = true;
	for (; str[l]; l++);
	l--;
	for (int i = 0;l>i; i++, l--)
	{
		if (str[i] != str[l])palindrom = false;
	}
	if (!palindrom)cout << "Это не палиндром!";
	else cout << "Это палиндром!";
}

void is_int_numer(char* str,char* cout_n, char f, char s, unsigned short& t_o_n, unsigned short n)
{
	bool int_number = false, integ = false ;
	if (str[0] == f && str[1] == s)
	{
		int_number = true;
		t_o_n = n;
		cout << cout_n;
		int i = 2;
			while (str[i])
			{ if (str[i] == '.' || str[i] == '/'|| str[i]==',')integ = true;i++; }
			if (integ) cout << "дробное число!";
			else cout << "целое число!";
	}
}
void is_bin_numer(char* str,char* cout_b, char f, char s, unsigned short& t_o_n, unsigned short n)
{
	is_int_numer(str, cout_b, f, s, t_o_n, n);
}
void is_hex_numer(char* str, char* cout_h, char f, char s, unsigned short& t_o_n, unsigned short n)
{
	is_int_numer(str, cout_h, f, s, t_o_n, n);
}

unsigned long long int to_int_number(char* str, unsigned short t_o_n)
{
	unsigned long long int numb = 0;
	if (t_o_n == 2)
	{
		for (int i = 2; str[i]; i++)
		{
			if (str[i] == 48)numb *= 10;
			else { numb += (((unsigned int)str[i]) - 48);numb *= 10; }
		}
		numb /= 10; return numb;
	}
	else return 0;
}
unsigned long long int bin_to_dec(char* str, unsigned short& t_o_n)
{
	unsigned long long int numb;
	int dec = 0, k = 1;
	if (t_o_n == 1)
	{
		numb = to_int_number(str, (t_o_n + 1));
		for (; numb ;numb/=10)
		{ dec += ((numb % 10) * k); k *= 2; }
		return dec;
	}
	else return 0;
}

unsigned int hex_to_dec(char* str, unsigned short& t_o_n)
{
	unsigned long long int dec = 0, k = 1, s = 0;
	if (t_o_n == 3)
	{
		for (s; str[s]; s++);
		for (--s; s >= 2; s--)
		{
			if ((int)str[s] >= 48 && (int)str[s] <= 57)
			{ dec += ((((unsigned int)str[s]) - 48) * k); k *= 16;}
			else
			{ dec += ((((unsigned int)str[s]) - 55) * k); k *= 16;}
		}
		return dec;
	}
	return 0;
}

void is_mac_adress(char* str, unsigned short int& type_of_adress)
{
	unsigned short int macSign = 0;
	bool macAbc = true, macSize = false; 
	unsigned short int sizeA = 0;
	for (int i = 2; i <= 15; i += 3)if((int)str[i] == 58||(int)str[i] ==45)macSign++;	//if(5) = true;
	for (; str[sizeA]; sizeA++)
	{ if ((((int)str[sizeA] >= 48 && (int)str[sizeA] <= 57) || ((int)str[sizeA] >= 65 && (int)str[sizeA] <= 70)) || ((int)str[sizeA] == 58 || (int)str[sizeA] == 45));
	else macAbc = false; }
	if (macSign == 5 && macAbc && sizeA == 17)type_of_adress = 1;
}
void is_ip_adress(char* str, unsigned short int& type_of_adress)
{
	unsigned short int ipSign = 0;
	unsigned short int sizeA = 0;
	bool trueNumbers = true;
	for (; str[sizeA]; sizeA++)if(str[sizeA] == 46)ipSign++;	//if(3) = true;
	//перед проверкой чисел, проверяем не выходит ли за пределы наша строка ip по точкам и знакам
	if ((ipSign == 3 && (sizeA >= 7 && sizeA <= 15)))
	{
		for (int i = 0; str[i]; i++)
		{
			if (trueNumbers)
			{
				char buffer[9]{};
				int k = 0, num = 0;
				for (int j = i; ((int)str[j] != 46 && str[j] != 0); j++, k++)buffer[k] = str[j];
				//Проверка в массиве buffer числа на отсутствие иных знаков, затем перевод его в число int.
				for (int i = 0; buffer[i]; i++) { if ((int)buffer[i] >= 48 && (int)buffer[i] <= 57)num = atoi(buffer); else trueNumbers = false; }
				//Проверка диапазона числа int (от 0 до 255)
				if (num >= 0 && num <= 255); else trueNumbers = false;
				//cout << buffer << " " << num;system("PAUSE");
				i += k;
			}
		}
	}
	else trueNumbers = false;
	if ((ipSign == 3 && (sizeA >= 7 && sizeA <= 15)) && trueNumbers)type_of_adress = 2;
}