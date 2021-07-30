#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "GREEN TEXT\n";
    SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    cout << "RED TEXT\n";
    SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return 0;
}