#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FACTORIAL	//��������� ����� (�������� 5 = 1*2*3*4*5 = 120)
//#define EXTENT	//���������� � �������
//#define ASKIIdefolt	//����� ������� ASKII
//#define ASKIISTDIO	//����� ������� ASKII ����� Printf � ���������� Stdio.h

//#define FACTORIAL2	//��������� (��� �����)
//#define EXTENT2	//���������� � ������� (��� �����)
//#define ASKII2

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef FACTORIAL
	double k; //�������� �����
	int n; //���������� ��� �������� ����� ����� ��� ��� (� � ����� for ������������ ��� ���������� ��� ������� ����������)
	unsigned long long int f = 1; //�������� ��������� �����

	cout << "������� �����: "; cin >> k;
	n = k;

	if (k < 0)
	{
		cout << "��������� ����� ���� ������ ������������� ������!" << endl;
	}
	else if (n != k)
	{
		cout << "����������� ����� ���� ������ ����� �����!" << endl;
	}
	else if (k == 0)
	{
		cout << "���������: 0! = 0";
	}
	else
	{
		n = 2;
		for (int i = 0; i != k - 1; i++)
		{
			f = f * n; n++;
		}
		if (k > 20)
		{
			cout << "� ����� ������� ����� �� ��������, ��� ��� ���� ������ ���������: " << k << "! = " << f << endl;
			//unsigned long long ����� ��������� ����� �� 18, 446, 744, 073, 709, 551, 615
			//� ������ ���������� ����� 20 ������ �� ����������� � ������
		}
		else
			cout << "��������� ����� " << k << "! = " << f << endl;
	}
	system("pause");
	system("cls");
	main();
#endif // FACTORIAL

#ifdef EXTENT
	signed long long int a, b, r = 1;
	cout << "������� ����� ������� ������ ��������� � �������: "; cin >> a;
	cout << "������� �������: "; cin >> b;

	for (int c = 0; c < b; c++)
	{
		r *= a;
	}
	cout << a << "^" << b << "=" << r << endl;

	system("pause");
	system("cls");
	main();
#endif // EXTENT

#ifdef ASKIIdefolt
	//� ��� � �� �����, ������ ��������� ������� ������������ �� ���������. ������� �� ������, ����������� ����������?
	//��������� ���� ������� �� ����� ��� � ����� �� ����������!
	int n = 0;
	for (int i = 0; i < 256; i++)
	{
		if (n < 16)
		{
			cout << i << ":" << (char)i << " ";
			n++;
			if (i < 10)
			{
				cout << "  ";
			}
			else if (i < 100)
			{
				cout << " ";
			}
		}
		else
		{
			n = 0;
			cout << endl;
		}
	}
	cout << endl;
#endif // ASKIIdefolt

#ifdef ASKIISTDIO
	int n = 0;
	for (int i = 0; i < 256; i++)
	{
		if (n < 16)
		{
			printf("%d = %c", i, i);
			n++;
			if (i < 10)
			{
				cout << "  ";
			}
			else if (i < 100)
			{
				cout << " ";
			}
		}
		else
		{
			n = 0;
			cout << endl;
		}
	}
	cout << endl;
#endif // ASKIISTDIO

#ifdef FACTORIAL2
	int n;
	int f = 1;
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL2



#ifdef EXTENT2
	double a;
	double n;
	double N = 1;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a << " ^ " << i << " = " << N << endl;
		N *= a;
	}
	cout << a << " ^ " << n << " = " << N << endl;
#endif // EXTENT2

#ifdef ASKII2
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
#endif // ASKII2

}