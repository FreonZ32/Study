#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define CAB cout << endl;system("pause");system("cls");main();
#define NUMBIN cout << "\n������� �����: "; cin >> numberin;

int Factorial(int numberin);
double Power(double numberin, int count);
int Fibonachchi(int numberin);

void main()
{
	setlocale(LC_ALL, "rus");
	double numberin, pow;
	int choise, fact, lvl, facttest;
	cout << "��� ������ ���������?\n��������� ����� - \t1\n���������� � ������� - \t2\n��� ��������� - \t3\n������� - "; cin >> choise;
	if (choise == 1)
	{
		NUMBIN;
		facttest = numberin;
		if (numberin < 0)
		{
			cout << "���������� ��������� ��������� ��������������� �����!"; CAB;
		}
		else if (numberin == 0 || numberin == 1)
		{
			cout << "��������� ����� 0 � 1 ����� 1!"; CAB;
		}
		else if (facttest != numberin)
		{
			cout << "��������� ����� ���� ������ �������������!"; CAB;
		}
		fact = Factorial(numberin);
		cout << "��������� �����: " << numberin << " �����: " << fact << endl;
	}
	else if (choise == 2)
	{
		cout << "������� ����� � �������: "; cin >> numberin >> lvl;
		pow = Power(numberin, lvl),
			cout << "����� " << numberin << " � ������� " << lvl << " ����o: " << pow;
	}
	else if (choise == 3)
	{
		NUMBIN;
		for (int i = 0; i < numberin; i++)
		{
			cout << Fibonachchi(i) << endl;
		}
	}
	else { cout << "�������� ������� ������!"; CAB; }
	CAB;
}

int Factorial(int numberin)
{

	if (numberin)
		return numberin * Factorial(numberin - 1);
	return 1;
}
double Power(double numberin, int count)
{
	if (count == 0)
		return 1;
	else if (count < 0)
		return 1 / numberin * Power(numberin, count + 1);
	else
		return numberin * Power(numberin, count - 1);
}
int Fibonachchi(int numberin)
{
	if (numberin == 0)
		return 0;
	else if (numberin == 1)
		return 1;
	else return Fibonachchi(numberin - 1) + Fibonachchi(numberin - 2);
}
