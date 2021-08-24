#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define CAB cout << endl;system("pause");system("cls");main();
#define NUMBIN cout << "\nEnter a number: "; cin >> numberin;

int Factorial(int numberin);
double Power(double numberin, int count);
int Fibonachchi(int numberin);	//Up to the number /My code
int Fibonachchi2(int numberin);	//Number of numbers	/My code
void Fibonachchi3(int numberin);
void Fibonachchi4(int numberin, int a = 0, int b = 1,int c = 0);

void main()
{
	//setlocale(LC_ALL, "rus");
	double numberin, pow;
	int choise, fact, lvl, facttest;
	cout << "What do you want to calculate?\nFactorial of a number - \t1\nExponentiation - \t\t2\nFibonacci Series (UTTN) - \t3\nFibonacci Series (NON) - \t4\nI choose - "; cin >> choise;
	if (choise == 1)
	{
		NUMBIN;
		facttest = numberin;
		if (numberin < 0)
		{
			cout << "It is impossible to calculate the factorial of a negative number!"; CAB;
		}
		else if (numberin == 0 || numberin == 1)
		{
			cout << "The factorial of the numbers 0 and 1 is 1!"; CAB;
		}
		else if (facttest != numberin)
		{
			cout << "The factorial can only be an integer!"; CAB;
		}
		fact = Factorial(numberin);
		cout << "Factorial of a number: " << numberin << " equal to:" << fact << endl;
	}
	else if (choise == 2)
	{
		cout << "Enter the number and degree: "; cin >> numberin >> lvl;
		pow = Power(numberin, lvl),
			cout << "Number " << numberin << " in the extent " << lvl << " equal to: " << pow;
	}
	else if (choise == 3)
	{
		NUMBIN;
		int k = 0;
		while (Fibonachchi2(k) <= numberin)
		{
			cout << Fibonachchi2(k) << endl;
			k++;
		}
	}
	else if (choise == 4)
	{
		NUMBIN;
		for (int i = 0; i < numberin; i++)
		{
			cout << Fibonachchi(i) << endl;
		}
	}
	else if (choise == 5)
	{
		NUMBIN;
		Fibonachchi3(numberin);

	}
	else { cout << "Wrong choice!"; CAB; }
	CAB;
}

int Factorial(int numberin)
{

	/*if (numberin)
		return numberin * Factorial(numberin - 1);
	return 1;*/
	return numberin == 0 ? 1 : numberin * Factorial(numberin - 1);
}
double Power(double numberin, int count)
{
	/*if (count == 0)
		return 1;
	else if (count < 0)
		return 1./numberin * Power(numberin, count + 1);
	else
		return numberin * Power(numberin, count - 1);*/
	return count == 0 ? 1 : count > 0 ? numberin * Power(numberin, count - 1) : 1. / numberin * Power(numberin, count + 1);
}
int Fibonachchi(int numberin)
{
	if (numberin == 0)
		return 0;
	else if (numberin == 1)
		return 1;
	else return Fibonachchi(numberin - 1) + Fibonachchi(numberin - 2);
}
int Fibonachchi2(int numberin)
{
	if (numberin == 0)
		return 0;
	else if (numberin == 1)
		return 1;
	else return Fibonachchi(numberin - 1) + Fibonachchi(numberin - 2);
}
void Fibonachchi3(int numberin)
{
	static int a = 0, b = 1,c = 1;
	if (a > numberin)return;
	cout << a << endl;
	/*a = b;
	b = c;
	c = a + b;*/
	c = (a=b) + (b=c);
	Fibonachchi3(numberin);
}
void Fibonachchi4(int numberin, int a, int b,int c)
{
	if (c > numberin)return;
	cout << a << endl; c++;
	Fibonachchi4(numberin, b, a + b);
}
