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
		cout << "Введите часы: " << endl;
		cin >> Hour;
		if ((Hour < 0) && (Hour >= 24))
			cout << "Данные не корректны. Введите другое значение.\n" << endl;
	} while ((Hour >= 0) && (Hour < 24));
	do
	{
		cout << "Введите минуты: " << endl;
		cin >> Min;
		if ((Min < 0) && (Min >= 60))
			cout << "Данные не корректны. Введите другое значение.\n" << endl;
	} while ((Min >= 0) && (Min < 60));
	do
	{
		cout << "Введите секунды: " << endl;
		cin >> Sec;
		if ((Sec < 0) && (Sec >= 60))
			cout << "Данные не корректны. Введите другое значение.\n" << endl;
	} while ((Sec >= 0) && (Sec < 60));
}

void Time::getTime()
{
	cout << "NN: " << NN << "\tH:M:S: " << Hour << ":" << Min << ":" << Sec << "\n" << endl;
}