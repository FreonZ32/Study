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
	cout << "������� ������: "; cin.getline(str, n);
	//c_isalnum(str);
	//c_isalpha(str);
	//c_isblank(str);
	//c_iscntrl(str);
	//c_isdigit(str);

}

void c_isalnum(char* str)
{	//���������, �������� �� ������ str[i] ������(���������, ���� ��������) ���� ���������� ������. � ������ ������, ������ ����� (�� 0).
	//������� �� ������������ ������!!!
	int i = 0;
	while (isalnum(str[i]))i++;
	cout << "������ " << i << " �������� �������� �������� - ���������!" << endl;
}
void c_isalpha(char* str)
{	//���������, �������� �� ������ str[i] ������(���������, ���� ��������). � ������ ������, ������ ����� (�� 0).
	//������� �� ������������ ������!!!
	int i = 0;
	while (isalpha(str[i]))i++;
	cout << "������ " << i << " �������� �������� �������!" << endl;
}
void c_isblank(char* str)
{	//���������, �������� �� ������ "������". ��� ������� ��������������� ������� " " � "\t".
	//������� �� ������������ ������!!!
	//���������� �� �������������: ���������������� � C99 (C++11).
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
{	//���������, �������� �� ������ �����������. ��� ������������ ��������������� ����� ������� ��� \n, \t, \v, \f, \r � ������.
	//������� �� ������������ ������!!!
	char str_example[] = "First line \nsecond line";
	cout << str_example << endl;	//������ ������ � ������������ ���������
	int i = 0;
	cout << "������ �� ������ ������������ �������: \n";
	while (!iscntrl(str_example[i]))
	{
		cout << str_example[i];
		i++;
	}
}
void c_isdigit(char* str)
{	//���������, �������� �� ������ ���������� ������ �� 0 �� 9;
	//������� �� ������������ ������!!!
	int i = 0;
	while (isdigit(str[i]))i++;
	cout << "������ " << i << " �������� �������� �������." << endl;
}