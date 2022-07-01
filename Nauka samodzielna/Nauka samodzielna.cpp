// Nauka samodzielna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Samochod {
public:

    //atrybuty:
    string marka;
    string model;
    int rocznik;
    int przebieg;
    
    //metody:
    void wczytaj()
    {
        std::cout << "Dodaj nowy samochod do bazy:" << std::endl;
        std::cout << "Podaj marke" << std::endl;
        std::cin>> marka;
        std::cout << "Podaj model" << std::endl;
        std::cin >> model;
        std::cout << "Podaj rocznik" << std::endl;
        std::cin >> rocznik;
        std::cout << "Podaj przebieg" << std::endl;
        std::cin >> przebieg;
    }
    void wypisz()
    {
        std::cout << "Twoj samochod to: " << std::endl;
        std::cout << "Marka: " << marka << std::endl;
        std::cout << "Model: " << model<< std::endl;
        std::cout << "Rocznik:" << rocznik<<  std::endl;
        std::cout << "Przebieg: "<< przebieg << std::endl;
       
    }
};


int main()
{
    Samochod s1;
    s1.wczytaj();
    s1.wypisz();

    Samochod s2;
    s2.wczytaj();
    s2.wypisz();
    


    return 0;
}


