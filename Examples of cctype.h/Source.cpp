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
	cout << "������� ������: "; cin.getline(str, n);
	c_isalnum(str);


}

void c_isalnum(char* str)
{	//���������, �������� �� ������ ������(���������, ���� ��������) ���� ���������� ������.
	//��������� ����� ��������, ���� ���� isalpha, ���� isdigit ����� ������ true.
	//������� �� ������������ ������!!!
	int i = 0;
	while (isalnum(str[i]))i++;
	cout << "������ " << i << " �������� �������� �������� - ���������!" << endl;
}