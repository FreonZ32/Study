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
	case 'a': cout << "Влево" << endl; break;
		//case -28: cout << "Влево" << endl; break; //?
	case 'w': cout << "Вперед" << endl; break;
		//case -26: cout << "Вперед" << endl; break; //?
	case 's': cout << "Назад" << endl; break;
		//case -21: cout << "Назад" << endl; break; //?
	case 'd': cout << "Вправо" << endl; break;
		//case -94: cout << "Вправо" << endl; break; //?
	case 32: cout << "Прыжок" << endl; break;
	case 13: cout << "Огонь" << endl; break;
	case 27: gameEscape = true; cout << endl << "Выход"; break; //выход из игры
	case 104: history = !history; cout << "Переключение режима истории" << endl; break; //переключатель истории действий
	//case -32: history = !history; cout << "Переключение режима истории" << endl; break; //?
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