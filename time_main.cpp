#include "time.h"

int menu()
{
	char ch;
	do
	{
		cout << "(e)nter\n";		//������ ����� �������
		cout << "(d)isplay\n";		//���������� ��� ��������
		cout << "(u)pdate\n";		//�������� �������
		cout << "(q)uit\n";			//����� �� ���������
		cout << "�������� �������: ";
		cin >> ch;
	} while (!strchr("eduq", tolower(ch)));
	return tolower(ch);
}

void main()
{
	
}