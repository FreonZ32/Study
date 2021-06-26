#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS //Арифметические операторы
//#define ASSIGMENT_OPERATORS //Оператор присываивания
//#define INCREMENT_DECREMENT
//#define HOMEWORK
//#define COMPAND_ASSIGNMENTS
//#define COMPARISON_OPERATORS
//#define BITS_OPERATORS

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef ASSIGMENT_OPERATORS
	//int a = 2;  //Переменной А присвоить значение 2
	//int b = a + 3; //Перменной b присвоить значение выражения a+3

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

#endif // ASSIGMENT_OPERATORS


#ifdef ARITHMETICAL_OPERATORS
	int a = 17;
	double b = 5;
	cout << "Результат от деления" << b / a << endl;
	cout << "Остаток от делания" << b % a << endl
#endif // ARITHMETICAL_OPERATORS

#ifdef INCREMENT_DECREMENT
		int i = 3;
	++i; //Prefix increment
	i++; //Postfix increment
	--i; //Prefix decrement
	i--; //Suffix decrement


#endif // INCREMENT_DECREMENT

#ifdef HOMEWORK
	/*int i = 3;
	i = ++i + 1 + ++i * 2;
	cout << i << endl;*/

	/*int i = 3;
	i = ++i + 1 + (++i *= 2);
	cout << i << endl;*/

	/*int i = 3;
	i += i++ 1 + ( ++i *= 2 );
	cout << i << endl;*/
#endif //HOMEWORK

#ifdef COMPAND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	//a = a + b;
	a += b;
	cout << a << endl;

#endif //COMPAND_ASSIGNMENT

#ifdef COMPARISON_OPERATORS

	cout << (!true == false) << endl;

#endif //COMPARISON_OPERATORS

#ifdef BITS_OPERATORS
	//+-*
		// ~ - Not
		// | - OR
		// & - AND
		// ^ - XOR
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	/*a += b;
	b = a - b;
	a = a - b;
	cout << a << "\t" << b << endl;*/
	a ^= b;
	b ^= a;
	a ^= b;
	cout << a << "\t" << b << endl;
#endif //BITS_OPERATORS

}