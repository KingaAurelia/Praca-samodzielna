using namespace std;
#include <iostream>
#include "event.hpp"

void Event::load()
{
	cout << endl << "Nazwa wydarzenia: ";
	cin >> name;
	cout << endl << "Dzien: ";
	cin >> day;
	cout << endl << "Miesiac: ";
	cin >> month;
	cout << endl << "Rok: ";
	cin >> year;
	cout << endl << "Godzina: ";
	cin >> hour;
	cout << endl << "Minuta: ";
	cin >> minutes;
}

void Event::show()
{
	cout << endl<< name << " " << day << "." << month << "." << year << " "<<hour << ":" << minutes << endl;

}

Event::Event(string n, int d, int m, int y, int h, int mins)//konstruktor Event klasy Event
{
	name = n;
	day = d;
	month = m;
	year = y;
	hour = h;
	minutes = mins;
}

Event::~Event()//destruktor wywola sie w momencie nbiszczenia obiektu
{
	cout << "To ja, destruktor sie nazywam" << endl;
}