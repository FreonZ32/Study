#include<iostream>
#include<Windows.h>
using namespace std;
using::cin;
using::cout;
using::endl;

void ASCII();
int SringLength(char str[]);
void to_upper(char* str, int a = ((int)'�'), int z = ((int)'�'), int l = -32);
void to_lower(char* str);
void shrink(char* str);
void is_palindrome(char* str);

void is_int_numer(char* str, char* cout_n, char f, char s, unsigned short& t_o_n, unsigned short n = 2);
void is_bin_numer(char* str, char* cout_b, char f, char s, unsigned short& t_o_n, unsigned short n = 1);
void is_hex_numer(char* str, char* cout_h, char f, char s, unsigned short& t_o_n, unsigned short n = 3);

unsigned long long int to_int_number(char* str, unsigned short t_o_n);
unsigned long long int bin_to_dec(char* str, unsigned short& t_o_n);
unsigned int hex_to_dec(char* str, unsigned short& t_o_n);


char cout_n[] = "��� ���������� ";
char cout_b[] = "��� �������� ";
char cout_h[] = "��� ����������������� ";


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	const int n = 50;
	char str[50]{};
	unsigned short type_of_number = 0;
	unsigned long long int number = 0;

	//ASCII();

	cout << " ������� ������(�� ������� �����): "; cin.getline(str, n);	//���� ����� � ���������

	cout << "��������� ������ � ������� �������: \t"; to_upper(str);
	cout << str << endl;
	cout << "��������� ������ � ������ �������: \t"; to_lower(str);
	cout << str << endl;
	cout << "������� ������ ������� �� �����������: \t";  shrink(str);
	cout << str << endl;
	cout << "���������, �������� �� ������ �����������: \t";  is_palindrome(str);

	cout << " \n������� ������ � ������ )0b(��������),1b(����������),0x(�����������������): "; cin.getline(str, n);
	is_int_numer(str, cout_n, '1',' b', type_of_number);
	is_bin_numer(str, cout_b, '0', 'b', type_of_number);
	is_hex_numer(str, cout_h, '0', 'x', type_of_number);
	//cout << type_of_number;
	cout << to_int_number(str, type_of_number) << endl;
	cout << bin_to_dec(str, type_of_number);
	cout <<endl<< number;

	//cout << SringLength(str);

	
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
	to_upper(str, ((int)'�'), ((int)'�'), 32);
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
	if (!palindrom)cout << "��� �� ���������!";
	else cout << "��� ���������!";
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
			if (integ) cout << "������� �����!";
			else cout << "����� �����!";
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
	unsigned long long int numb, dec = 0, k = 1;
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

}