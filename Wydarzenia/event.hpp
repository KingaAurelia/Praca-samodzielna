#pragma once
#include <iostream>
using namespace std;

class Event //pojedynczy event w kalendarzu 
{

	//atrybuty
	int day, month, year;
	int hour, minutes;
	string name;
public://udostepniony przeze mnie interfejs:

	//metody - zawieraja mechanizmy kontroli bledow zeby dane wprowadzone do prywatnych  atrybutow nie byly np zerowe
	
	Event(string = "brak", int = 1, int = 1, int = 2020, int = 12, int = 00);
		//naglowek konstruktora z typami argumentow i ich wartosciami domyslnymi
	//nazwa tego konstruktora jest przeciazona bo posiada wiecej niz 1 metode
	~Event();//naglowek destruktora, nie moze miec zadnych arg.
	void load(); //zapisuje dane z klawiatury
	void show(); //pokazuje na ekranie

};
