#include <iostream>

using namespace std;

//#define UNIT1   //Квадрат NxN из *
//#define UNIT2   //Треугольник нижний левый (угол прямой)
//#define UNIT3   //Треугольник верхний левый (угол прямой)
//#define UNIT4   //Треугольник верхний правый (угол прямой)
//#define UNIT5    //Треугольник нижний правый (угол прямой)
//#define UNIT7    //Квадрат + и -

//#define TREU1   //Треугольник верхний левый (угол прямой)
//#define TREU2   //Треугольник верхний правый (угол прямой)
//#define TREU3   //Сломанный треугольник (хз что с ним)

void main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите размер фигуры: "; cin >> n;


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
        if (n & 1); //Без этого if при нечетном n + и - будут выстраиваться в ряды!
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