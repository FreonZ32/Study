#include<iostream>
#include<Windows.h>
#include<string.h>
using namespace std;
using::cout;
using::cin;
using::endl;

//http://cplusplus.com/reference/cstring/strcspn/

#pragma warning(disable : 4996)		//��� s_strcopy 

//Copying//�����������
void s_memcpy(char* str_copy, char* str, int num);
void s_memmove(char* str,int pos1, int pos2, int num);
void s_strcpy(char* str_copy, char* str);
void s_strncpy(char* str_copy, char* str, int num);

//Concatenation//������������
void s_strcat(char* str, char* str1);
void s_strncat(char* str, char* str1, int num);

//Comparison//���������
void s_memcmp(char* str, char* str1, int num);
void s_strcmp(char* str, char* str1);
void s_strcoll(char* str, char* str1);
void s_strncmp(char* str, char* str1, int num);
void s_strxfrm(char* str1, char* str, int num);		//�������� �����b?????????????? ����� �� ���������� setlocale

//Searching//�����
void s_memchr(char* str, int value, int num);	//���������� ����, ����� Portability
void s_strchr(char* str, int value);
void s_strcspn(char* str, char* str1);
void s_strpbrk(char* str, char* str1);
void s_strrchr(char* str, int value);
void s_strspn(char* str, char* str1);
void s_strstr(char* str, char* str1);
void s_strtok(char* str, char* str1);

//Other
void s_memset(char* str, int value, int num);
//void s_strerror(int value);	//���-�� ����������
void s_strlen(char* str);

void s_size_t();

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
	//s_strpbrk(str, str1);
	//s_strrchr(str, 'l');
	//s_strspn(str, str1);
	//s_strstr(str, str1);
	//s_strtok(str, str1);
	//s_memset(str, '-', 3);
	//s_strlen(str);
	
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
{	//����������� ������ str � ������������ � ������� ������ � �������� num �������� � str1, ��������� ������.
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
void s_strpbrk(char* str, char* str1)
{	//���� � ������ str ������ ��������� �������� �� ������ str1 � ���������� ��������� �� ���� ������.
	//� ������ ���������� ����������, ������� ����������� ������ �� ������� �������, ��������� ��������� �� ����.
	char* l;
	l = strpbrk(str, str1);		//� �������� ��������� ����� str ����� ������������ ��������� �� ������ �� ����� �������.
	if (l == 0) cout << "�������� �� �������! " << endl;
	else cout << "�������� " << *l << " ������� �� ������� " << (l - str + 1) << " ������ " << str << endl;
	//���������� ������ �������������� ������
	/*while (l != NULL)
	{
		printf("%c ", *l);
		l = strpbrk(l + 1, str1);
	}*/
}
void s_strrchr(char* str, int value)
{	//������� ��������� ��������� ������� value � ������ str � ���������� ��������� �� ����.
	//������ null ��� �� ����������� � ���������, �� ����� ������� ����� ������������ ��� ��������� ��������� �� ����� ������.
	char* l;
	l = strrchr(str, value);
	if (l != 0) cout << "��������� ��������� ������� �������� �� �������: " << (l - str + 1) << endl;
	else cout << "������ �� ������!" << endl;
}
void s_strspn(char* str, char* str1)
{	//���������� ������ ��������� ����� str, ������� ������� ������ �� ��������, ���������� ������ str1.
	//null ������� �������� �� �����������.
	int l;
	l = strspn(str, str1);
	if (l != 0) cout << "������ ������� ��������: " << l;
	else cout << "���������� �� �������!" << endl;
}
void s_strstr(char* str, char* str1)
{	//���������� ��������� �� ������ ���������� ������ (���������, ������� ������������������ ��������) �� str1 � ������ str.
	//���� ���������� �� �������, ���������� null;
	char* l;
	l = strstr(str, str1);
	if (l != 0) cout << "���������� ������� �� ������� " << (l-str+1) << endl;
	else cout << "���������� �� �������." << endl;
}
void s_strtok(char* str, char* str1)
{	//���������������� ����� ������� ������ ��������� �� ������� ������ str, ����������� ������� �������� (���� ����� ��) �� ������ str1;
	//����� ���������� ��������� ������������ ����� ��������.
	//���� ������� ����� �� 0, �� ��� ���������� ��������� �� null.
	char* l;
	l = strtok(str, str1);
	cout << "����� ����� ������� ��: " << endl;
	while (l != 0)
	{
		cout << l << endl;
		l = strtok(0, str1);	//��� ���������� ��������, ��������� ������� 0 �� ���������, � ���������� ����������� � ������ ����� ����� ����������� �������.
	}
}
void s_memset(char* str, int value, int num)
{	//��������� ������ num ���� str �������� value � ������� ������ ������ str;
	//������� ����������� �������� value � unsigned char!
	memset(str, value, num);
	cout << "���������� �������� � ������: " << str << endl;
}
void s_strlen(char* str)
{	//���������� ������ ������, ����������� ������ ���� ���������� (�� ������ � ������� ������ ��� �������������).
	printf("������ ������ ����� %u.\n", (unsigned)strlen(str));
}

void s_size_t()
{
	//��������� ������ �� �������� ����������� ������������� �����.
	//��� ���, ��������� ������������ ������ ������ ������� � ������ : size_t - ��� ���, ������������ ���������� sizeof,
	//� ������ ������������ � ����������� ���������� ��� ������������� �������� � ���������.
	//� <cstring> �� ������������ � �������� ���� ��������� num � �������� memchr, memcmp, memcpy, memmove, memset, strncat, strncmp,
	//strncpy � strxfrm, ������� �� ���� ������� ������������ ��� �������� ������������� ���������� ������ ��� ��������, �� ������� ������ �������������� �������.
	//�� ����� ������������ � �������� ������������� ���� ��� strcspn, strlen, strspn � strxfrm ��� �������� �������� � ����.
}
