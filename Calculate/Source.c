#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double a, b;
	char s;
	cout << "Введите арифметическое выражение: ";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	/*if (s=='+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
		cout << a << "-" << b << "=" << a - b << endl;
	else if (s == '*')
		cout << a << "*" << b << "=" << a * b << endl;
	else if (s == '/')
		cout << a << "/" << b << "=" << a / b << endl;
	else
		cout << "ERROR: NoOperation" << endl;*/
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b; break;
	case '-': cout << a << " - " << b << " = " << a - b; break;
	case '*': cout << a << " * " << b << " = " << a * b; break;
	case '/': cout << a << " / " << b << " = " << a / b; break;
	default: cout << "ERROR: NoOPeration" << endl;
	}
	cout << endl;
	main();

}