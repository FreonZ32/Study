#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int p; //����� �������� �������������
	int n;
	int m = 0;

	cout << "������� �����:" << endl; cin >> p;
	n = p;
	while (n)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	//cout << n << endl <<  p << endl << m << endl;
	if (m == p)
	{
		cout << "God damn, ��� ���������!" << endl << endl;
	}
	else
	{
		cout << "��� �� ���������" << endl << endl;
	}
	system("pause");
	system("CLS");
	main();


	/*unsigned long long int number; //�����, �������� � ����������
	cout << "������� �����: "; cin >> number;
	unsigned long long int mirror_number = 0; //����� ���������� ��������
	unsigned long long int buffer = number; //����� ���������� �����

	while (buffer)
	{
		mirror_number *= 10;
		mirror_number += buffer % 10; //������� ������
		buffer /= 10; //������� ����������� ����� ������

	}
	cout << number << endl;
	cout << mirror_number << endl;*/

}