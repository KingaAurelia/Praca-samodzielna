// Quiz obiektowo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "pytanie.h"
using namespace std;


int main()
{
	//Pytanie p1; MOGA BYC TAK, ALE LATWIEJ/CZYTELNIEJ PÊTL¥ I TABLIC¥: NA DOLE
	//p1.nr_pytania = 1;
	//p1.wczytaj();
	//p1.zadaj();
	//p1.sprawdz();

	//Pytanie p2;
	//p2.nr_pytania = 2;
	//p2.wczytaj();
	//p2.zadaj();
	//p2.sprawdz();

	//Pytanie p3;
	//p3.nr_pytania = 3;
	//p3.wczytaj();
	//p3.zadaj();
	//p1.sprawdz();

	//Pytanie p4;
	//p4.nr_pytania = 4;
	//p4.wczytaj();
	//p4.zadaj();
	//p4.sprawdz();
	//
	//Pytanie p5;
	//p5.nr_pytania = 5;
	//p5.wczytaj();
	//p5.zadaj();
	//p5.sprawdz();

	Pytanie p[5]; //jest 5 obiektow ale numerujemy je od 0

	int suma = 0;
	for (int i = 0; i <= 4; i++)
	{
		p[i].nr_pytania = i+1;//bo 1 pytanie ma u nas nr1
		p[i].wczytaj();
		p[i].zadaj();
		p[i].sprawdz();
		suma += p[i].punkt;

		
	}


	cout << "KONIEC QUIZU! PUNKTY = " <<suma;

	return 0;
}
