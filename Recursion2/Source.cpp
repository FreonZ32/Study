#include<iostream>
using namespace std;

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале!" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor-1);
	cout << floor << endl;
}
 
int factorial(int n)
{
	/*if (n == 0)return 1;
	return  n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}
double power(int a, int n)
{
	if (n == 0)return 1;
	return a * power(a, n - 1);
}
 
void main()
{
		setlocale(LC_ALL, "rus");
		/*cout << "Hello world!";
		main();*/
		int n;
		cout << "Введите число: "; cin >> n;
		cout << factorial(n);
}
