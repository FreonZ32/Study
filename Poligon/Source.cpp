#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstring>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	char str2[] = "Hello";
	int n = 20;
	char str[20]{};
	cout << "Input: "; cin >> str;
	int d = strlen(str);
	cout << d;
}