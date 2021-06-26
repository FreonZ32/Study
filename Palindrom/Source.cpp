#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int p; //число вводимое пользователем
	int n;
	int m = 0;

	cout << "Введите число:" << endl; cin >> p;
	n = p;
	while (n)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	//cout << n << endl <<  p << endl << m << endl;
	if (m == p)
	{
		cout << "God damn, это палиндром!" << endl << endl;
	}
	else
	{
		cout << "Это не палиндром" << endl << endl;
	}
	system("pause");
	system("CLS");
	main();


	/*unsigned long long int number; //Число, вводимое с клавиатуры
	cout << "Введите число: "; cin >> number;
	unsigned long long int mirror_number = 0; //число записанное наоборот
	unsigned long long int buffer = number; //копия введенного числа

	while (buffer)
	{
		mirror_number *= 10;
		mirror_number += buffer % 10; //младший разряд
		buffer /= 10; //убираем сохраненный ранее разряд

	}
	cout << number << endl;
	cout << mirror_number << endl;*/

}