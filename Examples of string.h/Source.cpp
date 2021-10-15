#include<iostream>
#include<Windows.h>
#include<string.h>
using namespace std;

//http://cplusplus.com/reference/cstring/strcspn/

#pragma warning(disable : 4996)		//��� s_strcopy 

void s_memcpy(char* str_copy, char* str, int num);
void s_memmove(char* str,int pos1, int pos2, int num);
void s_strcpy(char* str_copy, char* str);
void s_strncpy(char* str_copy, char* str, int num);

void s_strcat(char* str, char* str1);
void s_strncat(char* str, char* str1, int num);

void s_memcmp(char* str, char* str1, int num);
void s_strcmp(char* str, char* str1);
void s_strcoll(char* str, char* str1);
void s_strncmp(char* str, char* str1, int num);
void s_strxfrm(char* str1, char* str, int num);		//�������� �����b?????????????? ����� �� ���������� setlocale

void s_memchr(char* str, int value, int num);	//���������� ����, ����� Portability
void s_strchr(char* str, int value);
void s_strcspn(char* str, char* str1);



void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 50;
	int k = 0;
	char str[50]{};
	char str1[50]{};
	char str_copy[50]{};
	//cout << "������� �������: "; cin >> k;	//��� ��� ����������
	cout << "������� ������: "; cin.getline(str, n);
	//s_memcpy(str_copy, str, strlen(str) + 1);
	//s_memmove(str, 2, 5, 3);
	//s_strcpy(str_copy, str);
	//s_strncpy(str_copy, str, 3);
	cout << "������� ������� ������: "; cin.getline(str1, n);
	//s_strcat(str, str1);
	//s_strncat(str, str1, 3);
	//s_memcmp(str, str1, 3);
	//s_strcmp(str, str1);
	//s_strcoll(str, str1);
	//s_strncmp(str, str1, 3);
	//s_strxfrm(str1, str, 2);
	//s_memchr(str, 'l', 4);
	//s_strchr(str, 'l');
	//s_strcspn(str1, str);
}

void s_memcpy(char* str_copy, char* str, int num)
{	//�������� �� str � str_copy ������� ����, ������� ������� � num � ������ �������.
	//����� ���������� �� ������ ������, �� � ������� ������ �����!
	//��� ����������� ��������� �������� �����, ��� ��� ������� ��� �� �����.
	//�� ����� ������!
	memcpy(str_copy, str, num-2);	//num ������ ����� ������ � ������� strlen
	cout << str << " - " << str_copy << endl;
}
void s_memmove(char* str, int pos1, int pos2, int num)
{	//�������� �������� ������ � ���-�� num � ������� pos1 �� pos 2 � ������ � ������������ ���������.
	//����� ���������� �� ������ ������, �� � ������� ������ �����!
	//��� ����������� ��������� �������� �����, ��� ��� ������� ��� �� �����.
	//�� ����� ������!
	memmove(str + pos2, str + pos1, num);
	cout << str << endl;
}
void s_strcpy(char* str_copy, char* str)
{	//�������� ������ (������ ��) �� str � str_copy  ���������������� �� null ��������.
	strcpy(str_copy, str);
	cout << str << " - " << str_copy << endl;
}
void s_strncpy(char* str_copy, char* str, int num)
{	//�������� ������ num �������� ��  str � str_copy.
	//���� ����������� ������� �� null �� ����� ���� ���������� 0 �� str[num].
	strncpy(str_copy, str, num);
	cout << str << " - " << str_copy << endl;
}

void s_strcat(char* str, char* str1)
{	//������������ ������ str1 � ����� ������ str;
	strcat(str, str1);
	cout << str << endl;
}
void s_strncat(char* str, char* str1, int num)
{	//��������� � str �� str1 ������ num �������� + null ��������.
	strncat(str, str1, num);
	cout << str << endl;
}

void s_memcmp(char* str, char* str1, int num)
{	//���������� ������ num �������� ���� ������ ������ � ���������� 0, ���� ��� ���������, ���� ������� �������� ���� ���.
	//���� ������ �������� <0 �� ������ ������������� ���� � str ������ �� �������� ��� ��� �� ���� � str1.
	//�E ����������� ��������� ��� ���������� �� null ��������!!!
	int l;
	l = memcmp(str, str1, num);
	if (l > 0) cout << "������ �� ���������" << endl;
	else if (l < 0) cout << "� ������ ������ ������������ ����� ������� �� ��������, ������ �� ���������" << endl;
		else cout << "������ ���������" << endl;
}
void s_strcmp(char* str, char* str1)
{	//���������� ������� ���� ����� � ���������� 0, ���� ��� ���������, ���� ������� �������� ���� ���.
	//���� ������ �������� <0 �� ������ ������������� ���� � str ������ �� �������� ��� ��� �� ���� � str1.
	//������� ���������� ��������� �� null ��������.
	int l;
	l = strcmp(str, str1);
	if (l > 0) cout << "������ �� ���������" << endl;
	else if (l < 0) cout << "� ������ ������ ������������ ����� ������� �� ��������, ������ �� ���������" << endl;
	else cout << "������ ���������" << endl;
}
void s_strcoll(char* str, char* str1)
{	//���������� ������� ���� ����� � ��������� �� ������ ������ ������ (LC_COLLATE) � ���������� 0, ���� ��� ���������, ���� ������� �������� ���� ���.
	//���� ������ �������� <0 �� ������ ������������� ���� � str ������ �� �������� ��� ��� �� ���� � str1.
	int l;
	l = strcoll(str, str1);
	if (l > 0) cout << "������ �� ���������" << endl;
	else if (l < 0) cout << "� ������ ������ ������������ ����� ������� �� ��������, ������ �� ���������" << endl;
	else cout << "������ ���������" << endl;
}
void s_strncmp(char* str, char* str1, int num)
{	//��������� �� �������� ������� strcmp �� ������� ���� �� num ��������, ���� �� null ���� num ������� �� ��� �������.
	int l;
	l = strncmp(str, str1, num);
	if (l > 0) cout << "������ �� ���������" << endl;
	else if (l < 0) cout << "� ������ ������ ������������ ����� ������� �� ��������, ������ �� ���������" << endl;
	else cout << "������ ���������" << endl;
}
void s_strxfrm(char* str1, char* str, int num)
{	//����������� ������ str � ������������� � ������� ������ � �������� num �������� � str1, ��������� ������.
	int l;	//������� ���������� ������ ������ ����������� ������������ �������� (��� l == num).
	l = strxfrm(str1, str, num);
	l = strxfrm(0, str, 0);
	cout << str << " - " << str1 << endl;
	cout <<" ������ ������ ������: "<< l << endl;
}

void s_memchr(char* str, int value, int num)
{	//���� � ������ num ������ ������ str ������ ���������� � value � ���������� ��������� �� ����. � ��� ������ ���� �������� �� �������, ���������� null;
	//����� �������� ����� ������, ��� ���� ������� �������� ����� ��������������� ���������� (���������-������+1);
	char* l;
	l =	(char*)memchr(str, value, num);
	if (l != 0)cout << "�������� ������� �� �������: " << l-str+1 << endl;
	else cout << "������� �������� �� �������." << endl;
}
void s_strchr(char* str, int value)
{	//���������� ��������� ������� ���������� ��������, �������� �� value �� ������ str.
	char* l;
	l = strchr(str, value);
	if (l != 0) cout << "�������� ������� �� �������: " << l - str + 1 << endl;
	else cout << "�������� �� �������." << endl;
	//���������� ������ �������������� ������.
	/*while (l != NULL)
	{
		printf("found at %d\n", l - str + 1);
		l = strchr(l + 1, value);
	}*/
}
void s_strcspn(char* str, char* str1)
{	//��������� str1 �� ��������� ������ ������� �� str, ��������� ���-�� ��������, ����������� �� ������� ���������.
	//���� ���������� �� ����� �������, �� ������� ������ ������ str1.
	int l;
	l = strcspn(str, str1);
	cout << "������� �� " << str1 << " ������� �� " << l+1 << " ������� � " << str << endl;
}

