// Wydarzenia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include "event.hpp"

int main()
{
    Event w1("Apokalipsa Zombie");
        //tu nastapi automatyczne wywolanie konstruktora--utworzenie obiektu - tylko nazwa jest zmieniona, reszta arg jest domyslna
    
    w1.show();

    return 0;
}

