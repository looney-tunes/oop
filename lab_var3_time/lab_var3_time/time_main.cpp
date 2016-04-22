#include "time.h"

int menu()
{
	char ch;
	do
	{
		cout << "(e)nter\n";		//Ввести новый элемент
		cout << "(d)isplay\n";		//Отобразить все элементы
		cout << "(u)pdate\n";		//Изменить элемент
		cout << "(q)uit\n";			//Выйти из программы
		cout << "Выберете команду: ";
		cin >> ch;
	} while (!strchr("eduq", tolower(ch)));
	return tolower(ch);
}

void main()
{
	
}