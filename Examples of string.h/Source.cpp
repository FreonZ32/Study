#include<iostream>
#include<Windows.h>
#include<string.h>
using namespace std;

//http://cplusplus.com/reference/cstring/strcspn/

#pragma warning(disable : 4996)		//для s_strcopy 

void s_memcpy(char* str_copy, char* str, int num);
void s_memmove(char* str,int pos1, int pos2, int num);
void s_strcpy(char* str_copy, char* str);
void s_strncpy(char* str_copy, char* str, int num);

void s_strcat(char* str, char* str1);
void s_strncat(char* str, char* str1, int num);

void s_memcmp(char* str, char* str1, int num);
void s_strcmp(char* str, char* str1);
void s_strcoll(char* str, char* str1);
void s_strncmp(char* str, char* str1, int num);
void s_strxfrm(char* str1, char* str, int num);		//Странные ошибкb?????????????? когда не закоммичен setlocale

void s_memchr(char* str, int value, int num);	//Посмотреть сайт, пункт Portability
void s_strchr(char* str, int value);
void s_strcspn(char* str, char* str1);



void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 50;
	int k = 0;
	char str[50]{};
	char str1[50]{};
	char str_copy[50]{};
	//cout << "Введите границу: "; cin >> k;	//Что тут происходит
	cout << "Введите строку: "; cin.getline(str, n);
	//s_memcpy(str_copy, str, strlen(str) + 1);
	//s_memmove(str, 2, 5, 3);
	//s_strcpy(str_copy, str);
	//s_strncpy(str_copy, str, 3);
	cout << "Введите втрорую строку: "; cin.getline(str1, n);
	//s_strcat(str, str1);
	//s_strncat(str, str1, 3);
	//s_memcmp(str, str1, 3);
	//s_strcmp(str, str1);
	//s_strcoll(str, str1);
	//s_strncmp(str, str1, 3);
	//s_strxfrm(str1, str, 2);
	//s_memchr(str, 'l', 4);
	//s_strchr(str, 'l');
	//s_strcspn(str1, str);
}

void s_memcpy(char* str_copy, char* str, int num)
{	//Копирует из str в str_copy столько байт, сколько указано в num с начала массива.
	//Можно копировать не только строки, но и массивы других типов!
	//При копировании создается двоичная копия, так что базовый тип не важен.
	//Не видит границ!
	memcpy(str_copy, str, num-2);	//num строки можно задать с помощью strlen
	cout << str << " - " << str_copy << endl;
}
void s_memmove(char* str, int pos1, int pos2, int num)
{	//Копирует значения байтов в кол-ве num с позиции pos1 на pos 2 в строке с возможностью наложения.
	//Можно копировать не только строки, но и массивы других типов!
	//При копировании создается двоичная копия, так что базовый тип не важен.
	//Не видит границ!
	memmove(str + pos2, str + pos1, num);
	cout << str << endl;
}
void s_strcpy(char* str_copy, char* str)
{	//Копирует строку (только ее) из str в str_copy  последосвательно до null значения.
	strcpy(str_copy, str);
	cout << str << " - " << str_copy << endl;
}
void s_strncpy(char* str_copy, char* str, int num)
{	//Копирует первые num символов из  str в str_copy.
	//Если копирование доходит до null то далее идет заполнение 0 до str[num].
	strncpy(str_copy, str, num);
	cout << str << " - " << str_copy << endl;
}

void s_strcat(char* str, char* str1)
{	//Присоединяет строку str1 в конец строки str;
	strcat(str, str1);
	cout << str << endl;
}
void s_strncat(char* str, char* str1, int num)
{	//Добавляет в str из str1 первые num символов + null значение.
	strncat(str, str1, num);
	cout << str << endl;
}

void s_memcmp(char* str, char* str1, int num)
{	//Сравнивает первые num символов двух блоков памяти и возвращает 0, если они совпадают, либо большое значение если нет.
	//Если выдает значение <0 то первый несовпадающий байт в str меньше по значению чем тот же байт в str1.
	//НE заканчивает сравнение при захождение за null значение!!!
	int l;
	l = memcmp(str, str1, num);
	if (l > 0) cout << "Строки не совпадают" << endl;
	else if (l < 0) cout << "В первой строке несовпадение более меньшее по значению, строки не совпадают" << endl;
		else cout << "Строки идентичны" << endl;
}
void s_strcmp(char* str, char* str1)
{	//Сравнивает символы двух строк и возвращает 0, если они совпадают, либо большое значение если нет.
	//Если выдает значение <0 то первый несовпадающий байт в str меньше по значению чем тот же байт в str1.
	//Функция продолжает сравнение до null значения.
	int l;
	l = strcmp(str, str1);
	if (l > 0) cout << "Строки не совпадают" << endl;
	else if (l < 0) cout << "В первой строке несовпадение более меньшее по значению, строки не совпадают" << endl;
	else cout << "Строки идентичны" << endl;
}
void s_strcoll(char* str, char* str1)
{	//Сравнивает символы двух строк в выбранной на данный момент локали (LC_COLLATE) и возвращает 0, если они совпадают, либо большое значение если нет.
	//Если выдает значение <0 то первый несовпадающий байт в str меньше по значению чем тот же байт в str1.
	int l;
	l = strcoll(str, str1);
	if (l > 0) cout << "Строки не совпадают" << endl;
	else if (l < 0) cout << "В первой строке несовпадение более меньшее по значению, строки не совпадают" << endl;
	else cout << "Строки идентичны" << endl;
}
void s_strncmp(char* str, char* str1, int num)
{	//Действует по принципу команды strcmp но перебор идет до num значения, либо до null если num выходит за его пределы.
	int l;
	l = strncmp(str, str1, num);
	if (l > 0) cout << "Строки не совпадают" << endl;
	else if (l < 0) cout << "В первой строке несовпадение более меньшее по значению, строки не совпадают" << endl;
	else cout << "Строки идентичны" << endl;
}
void s_strxfrm(char* str1, char* str, int num)
{	//Преобразует строку str в сооитветствии с текущей локали и копирует num значений в str1, возвращая длинну.
	int l;	//Функция возвращает длинну равную колличеству копированных значений (или l == num).
	l = strxfrm(str1, str, num);
	l = strxfrm(0, str, 0);
	cout << str << " - " << str1 << endl;
	cout <<" Длинна первой строки: "<< l << endl;
}

void s_memchr(char* str, int value, int num)
{	//Ищет в первых num блоках строки str первое совпадение с value и возвращает УКАЗАТЕЛЬ на него. В том случае если значение не найдено, возвращает null;
	//Чтобы показать номер пункта, где было найдено значение можно воспользоваться выражением (указатель-строка+1);
	char* l;
	l =	(char*)memchr(str, value, num);
	if (l != 0)cout << "Значение найдено на позиции: " << l-str+1 << endl;
	else cout << "Похожих значений не найдено." << endl;
}
void s_strchr(char* str, int value)
{	//Возвращает указатель первого найденного значения, похожего на value из строки str.
	char* l;
	l = strchr(str, value);
	if (l != 0) cout << "Значение найдено на позиции: " << l - str + 1 << endl;
	else cout << "Значение не найдено." << endl;
	//Интересная модель множественного поиска.
	/*while (l != NULL)
	{
		printf("found at %d\n", l - str + 1);
		l = strchr(l + 1, value);
	}*/
}
void s_strcspn(char* str, char* str1)
{	//Проверяет str1 на вхождение любого символа из str, возвращая кол-во символов, прочитанных до первого вхождения.
	//Если совпадений не будет найдено, то функция вернет длинну str1.
	int l;
	l = strcspn(str, str1);
	cout << "Символы из " << str1 << " найдены на " << l+1 << " позиции в " << str << endl;
}

