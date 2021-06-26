#include<iostream>
using namespace std;

//#define ROMB1   //������ (�������� �����)
//#define ROMB2   //������ (������ �����)
//#define ROMB3   //������ � ��������


void main()
{
    setlocale(LC_ALL, "rus");
    int n, m;
    cout << "������� ������ �����(" << "�������� "; cout << "������ "; cout << "�����!): "; cin >> n; //����������� ��� �������� ���-���� ����
    m = n / 2;

#ifdef ROMB1
    if (n & 1)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == m - i || j == m + i)
                    cout << '*';
                else cout << ' ';
            }
            cout << endl;
        }

        for (int i = m; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i - m || j == m + n - i - 1)
                    cout << '*';
                else cout << ' ';
            }
            cout << endl;
        }
        system("pause");
        system("cls");
        main();
    }
    else
    {
        cout << "�� ����� ������ �����!" << endl;
        system("pause");
        system("cls");
        main();
    }
#endif // ROMB1

#ifdef ROMB2
    if (n & 1)
    {
        cout << "�� ����� �������� �����!" << endl;
        system("pause");
        system("cls");
        main();
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n - m - i) cout << "/";
                if (j == n - m + i) cout << "\\";
                else cout << " ";
            } cout << endl;
        }
        for (int i = m + 1; i <= n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == m - n + i) cout << "\\";
                if (j == m + n - i) cout << "/";
                else cout << " ";
            } cout << endl;
        }
        system("pause");
        system("cls");
        main();
    }
#endif // ROMB2

#ifdef ROMB3
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) cout << " "; cout << "/";
        for (int j = 0; j < i * 2; j++) cout << " "; cout << "\\";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
        for (int j = i * 2; j < (n - 2 + 1) * 2; j++) cout << " "; cout << "/";
        cout << endl;
    }
#endif // ROMB3
}