#include <iostream>
#include "pytanie.h"
#include <fstream>//zeby moc skorzystac z pliku txt
#include <cstdlib>//funkcja exit do wyjscia z pliku
#include <string>
#include <algorithm>
#include <string>



using namespace std;

void Pytanie::wczytaj()
{
	fstream plik;//korzystamy z pliku txt
	plik.open("quiz.txt", ios::in);
	//plik.open("quiz.txt", ios::in);//otwarcie w formie odczytu -> in jest metod¹ klasy  ios

	if (plik.good() == false)//plik to obiekt, a na jego rzecz wywolujemy metodê good
	{
		cout << "Nie udalo sie otworzyc pliku";
		exit(0);
	}

	int nr_linii = (nr_pytania - 1) * 6 + 1;
	int aktualny_nr = 1;//nasz licznik linii, ktory bedzie inkrementowany- zeby wieziec ile juz przeczytalismy
	string linia;//do przechowywania bie¿¹cej linii pobranej z pliku

	while (getline (plik, linia))//petla while czytaj¹ca z pliku pojedyncza linie - sama sie zakonczy po przeczytaniu wszytkich
	{

		if (aktualny_nr == nr_linii) tresc = linia; 
		if (aktualny_nr == nr_linii+1) a = linia;
		if (aktualny_nr == nr_linii + 2) b = linia;
		if (aktualny_nr == nr_linii + 3) c = linia;
		if (aktualny_nr == nr_linii + 4) d = linia;
		if (aktualny_nr == nr_linii + 5) poprawna = linia;
		aktualny_nr++;//licznik czytanyc linia po linii wierszy
		
	}
	plik.close();//close to metoda wywolywana na obiekcie plik

}

void Pytanie::zadaj()
{
	cout << endl << tresc << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl; 
	cout << "-----------------------" << endl;
	cout << endl << "Odpowiedz: ";
	cin >> odpowiedz;
	transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);//zadziala zarowno dla wielkiej jak i malej litery
}

void Pytanie::sprawdz()
{
	if (odpowiedz == poprawna)
	{
		punkt = 1;
	}
	else punkt = 0;
}


