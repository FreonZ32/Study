#include <iostream>

using namespace std;

//#define UNIT1   //������� NxN �� *
//#define UNIT2   //����������� ������ ����� (���� ������)
//#define UNIT3   //����������� ������� ����� (���� ������)
//#define UNIT4   //����������� ������� ������ (���� ������)
//#define UNIT5    //����������� ������ ������ (���� ������)
//#define UNIT7    //������� + � -

//#define TREU1   //����������� ������� ����� (���� ������)
//#define TREU2   //����������� ������� ������ (���� ������)
//#define TREU3   //��������� ����������� (�� ��� � ���)

void main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "������� ������ ������: "; cin >> n;


#ifdef UNIT1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        } cout << endl;
    }
#endif //UNIT1

#ifdef UNIT2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        } cout << endl;
    }
#endif //UNIT2

#ifdef UNIT3
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        } cout << endl;
    }
#endif //UNIT3

#ifdef UNIT4
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i) cout << "  ";
            else cout << "* ";

        } cout << endl;
    }
#endif //UNIT4

#ifdef UNIT5
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (j > i + 1) cout << "  ";
            else cout << "* ";

        } cout << endl;
    }
#endif //UNIT5

#ifdef UNIT7 
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k & 1) cout << "+ ";
            else cout << "- ";
            k++;
        } cout << endl;
        if (n & 1); //��� ����� if ��� �������� n + � - ����� ������������� � ����!
        else k++;
    }
#endif //UNIT6

#ifdef TREU1
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif // TREU1

#ifdef TREU2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif // TREU2

#ifdef TREU3
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i / 2.5; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n / 2.5; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
#endif // TREU3

}