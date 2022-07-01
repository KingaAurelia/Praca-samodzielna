#include <iostream>
using namespace std;

class Pytanie
{
public:
	//atrybuty:
	string tresc;
	string a, b, c, d;
	int nr_pytania;
	string poprawna;
	string odpowiedz;
	int punkt; //1 lub 0 w zaleznosci czy dobra odpowiedz

	//metody:
	void wczytaj();//wczytuje dane z pliku
	void zadaj(); //pokazuje pytanie, czyta odpowiedzi
	void sprawdz(); //sprawdza poprawnosc odpowiedzi


};