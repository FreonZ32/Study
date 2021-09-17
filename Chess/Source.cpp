#include<iostream>
using namespace std;

//#define CHESS1	//Большая доска из * SxS c квадратами SxS (свой код)
//#define CHESS2	//Табличка с чередующимися +- (через тернарник)
//#define CHESS3	//Большая доска SxS c квадратами SxS (через тернарник)
//#define CHESS4	//Маленькая доска в рамке
//#define CHESS5	//Маленькая доска в рамке (свой код)



#define WHITE_BOX   "\xDB\xDB"
#define BLACK_BOX   "  "

int main()
{
	setlocale(LC_ALL, "rus");
	int s, l = 0;
	char z = (char)42;
	char p = (char)32;
	cout << "Введите размер доски: "; cin >> s;
#ifdef CHESS1
	for (int h = 0; h < s; h++)
	{
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j <= s; j++)
			{
				if (s & 1)
				{
					if (l <= s / 2)
						for (int k = 0; k < s; k++)
						{
							cout << z << " ";
						}
				}
				else
				{
					if (l < s / 2)
						for (int k = 0; k < s; k++)
						{
							cout << z << " ";
						}
				}
				if (l < s / 2)
					for (int k = 0; k < s; k++)
					{
						cout << p << " ";
					}
				l++;

				if (j == s)
					cout << endl;
			} l = 0;
		}
		b = z; z = p; p = b;
	}
#endif // CHESS1

#ifdef CHESS2
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}cout << endl;
	}
#endif // CHESS2

#ifdef CHESS3
	for (int i = 0; i < s; i++)
	{
		l = 0;
		while (l < s)
		{
			for (int j = 0; j < s; j++)
			{
				for (int k = 0; k < s; k++)
				{
					cout << ((i + j) % 2 == 0 ? "* " : "  ");
				}
			}
			cout << endl;
			l++;
		}
	}
#endif // CHESS3

#ifdef CHESS4
	setlocale(LC_ALL, "C");
	s++;
	for (int i = 0; i <= s; i++)
	{
		for (int j = 0; j <= s; j++)
		{
			if (i == 0 && j == 0)cout << (char)218;
			else if (i == 0 && j == s)cout << (char)191;
			else if (i == s && j == 0)cout << (char)192;
			else if (i == s && j == s)cout << (char)217;
			else if (i == 0 || i == s)cout << (char)196 << (char)196;
			else if (j == 0 || j == s)cout << (char)179;
			else
			{
				if ((i + j) % 2 == 0)cout << (char)219 << (char)219;
				else cout << "  ";
				//cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			}
		}
		cout << endl;
	}
#endif // CHESS4

#ifdef CHESS5
	setlocale(LC_ALL, "C");
	cout << char(218);
	for (int i = 0; i < s * 2; i++)
		cout << char(196);
	cout << char(191);
	cout << endl;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j <= s + 1; j++)
		{

			if (j == 0 || j == s + 1)
				cout << (char)179;
			else if (i & 1)
			{
				if (j & 1)cout << "  ";
				else cout << (char)219 << (char)219;
			}
			else
				if (j & 1)cout << (char)219 << (char)219;
				else cout << "  ";
		}cout << endl;

	}
	cout << char(192);
	for (int i = 0; i < s * 2; i++)cout << (char)196;
	cout << char(217);
	cout << endl;
#endif // CHESS5

}