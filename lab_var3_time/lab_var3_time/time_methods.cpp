#include "time.h"

Time::Time()
{
}
Time::~Time()
{
}
void Time::setTime(int countTime)
{
	NN = countTime;
	do
	{
		cout << "������� ����: " << endl;
		cin >> Hour;
		if ((Hour < 0) && (Hour >= 24))
			cout << "������ �� ���������. ������� ������ ��������.\n" << endl;
	} while ((Hour >= 0) && (Hour < 24));
	do
	{
		cout << "������� ������: " << endl;
		cin >> Min;
		if ((Min < 0) && (Min >= 60))
			cout << "������ �� ���������. ������� ������ ��������.\n" << endl;
	} while ((Min >= 0) && (Min < 60));
	do
	{
		cout << "������� �������: " << endl;
		cin >> Sec;
		if ((Sec < 0) && (Sec >= 60))
			cout << "������ �� ���������. ������� ������ ��������.\n" << endl;
	} while ((Sec >= 0) && (Sec < 60));
}

void Time::getTime()
{
	cout << "NN: " << NN << "\tH:M:S: " << Hour << ":" << Min << ":" << Sec << "\n" << endl;
}