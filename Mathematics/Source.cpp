#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FACTORIAL	//Факториал числа (например 5 = 1*2*3*4*5 = 120)
//#define EXTENT	//Возведение в степень
//#define ASKIIdefolt	//Вывод таблицы ASKII
//#define ASKIISTDIO	//Вывод таблицы ASKII через Printf и библиотеку Stdio.h

//#define FACTORIAL2	//Факториал (код урока)
//#define EXTENT2	//Возведение в степень (код урока)
//#define ASKII2

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef FACTORIAL
	double k; //вводимое число
	int n; //переменная для проверки целое число или нет (а в цикле for используется как переменная при расчете факториала)
	unsigned long long int f = 1; //будующий факториал числа

	cout << "Введите число: "; cin >> k;
	n = k;

	if (k < 0)
	{
		cout << "Факториал может быть только положительным числом!" << endl;
	}
	else if (n != k)
	{
		cout << "Факториалом может быть только целое число!" << endl;
	}
	else if (k == 0)
	{
		cout << "Факториал: 0! = 0";
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
			cout << "Я такие большие числа не сохраняю, так что лови всякую билеберду: " << k << "! = " << f << endl;
			//unsigned long long может сохранять числа до 18, 446, 744, 073, 709, 551, 615
			//а значит факториалы более 20 просто не сохраняются в памяти
		}
		else
			cout << "Факториал числа " << k << "! = " << f << endl;
	}
	system("pause");
	system("cls");
	main();
#endif // FACTORIAL

#ifdef EXTENT
	signed long long int a, b, r = 1;
	cout << "Введите число которое будете возводить в степень: "; cin >> a;
	cout << "Введите степень: "; cin >> b;

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
	//Я так и не понял, почему некоторые символы отображаются не правильно. Убегают из строки, страновятся невидимыми?
	//Объясните этот феномен на уроке или в самом дз пожалуйста!
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
	cout << "Введите число: "; cin >> n;
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
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
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