#include<iostream>
#include<conio.h>
using namespace std;
#define Escape 27

char key;
bool gameEscape = false;
bool history = true;

void Output()
{
	switch (_getch())
	{
	case 'a': cout << "�����" << endl; break;
		//case -28: cout << "�����" << endl; break; //?
	case 'w': cout << "������" << endl; break;
		//case -26: cout << "������" << endl; break; //?
	case 's': cout << "�����" << endl; break;
		//case -21: cout << "�����" << endl; break; //?
	case 'd': cout << "������" << endl; break;
		//case -94: cout << "������" << endl; break; //?
	case 32: cout << "������" << endl; break;
	case 13: cout << "�����" << endl; break;
	case 27: gameEscape = true; cout << endl << "�����"; break; //����� �� ����
	case 104: history = !history; cout << "������������ ������ �������" << endl; break; //������������� ������� ��������
	//case -32: history = !history; cout << "������������ ������ �������" << endl; break; //?
	}
}
void setup()
{
	system("Pause");
	system("CLS");
}
int main()
{
	setlocale(LC_ALL, "Rus");
	do
	{
		if (!history)
		{
			setup();
			Output();
		}
		else
		{
			Output();
		}
	} while (!gameEscape);
}