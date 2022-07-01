// Dziedziczenie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define PI 3.14159265358979323846
using namespace std;

class Point//klasa podstawowa
{

    float x, y;//wspolrzedne punktu
    string name;//nazwa punktu

public:
    void show()//wypisze punkt na ekranie
    {
        cout << name << "(" << x << ","<< y << ")" << endl;
    }
    Point(string n="S", float a=0, float b=0)//konstruktor z wartosciamu
    {
        name = n;
        x = a;
        y = b;
    }
};

class  Circle :public Point//klasa circle dziedziczy publicznie z klasy point
{
protected:

    float r;//promien r typu float - reszta sie dziedziczy
    string name;//przesloniecie danych rodzica

public:
    void show()
    {
        cout << "Kolo o nazwie: " << name << endl;//z kl pochodnej
        cout << "Srodek kola: " << endl;
        Point::show();//wypisanie pkt na ekranie-wywolanie metody z kl punkt od rodzica
        cout << "Promien: " <<r<< endl;
        cout << "Pole kola: " << PI * r * r << endl;//definiuje stala Pi
    }
    Circle(string cn="Kolko", string pn="S", float a=0, float b=0, float rad = 6)//konstruktor z nazwami i wspolrzednymi srodka kola
        :Point(pn, a, b)//wywolanie konstruktora point, ktory ustawi atrybuty punktu/dziedziczony konstruktor z pointa--lista inicjalizujaca
        //nie zastapi konstruktora ale bierze udzial w jego tworzeniu
    {
        name = cn;
        r = rad;
    }

};

class Sphere : public Circle ////klasa Sphere dziedziczy publicznie z klasy Circle

{
   
    string name;//nowy, prywatny atrybut przechowujacy nazwe Sphere, przeslaniajacy nazwe z Circle

public:
    
    void show()
    {
        cout << "Kula: " << name << endl;
        cout << "Promien: " << r << endl;
        cout << "Objetosc kuli: " << (4.0 / 3.0) * PI * r * r * r << endl;
    }

    Sphere(string sphereN = "Kula", string cn = "Kolko", string pn = "S")
        :Circle(pn, cn)
    {
        name = sphereN;
    }

};


int main()
{
    Sphere s1;

    s1.show();

    return 0;
}



//brudnopis:
//    Sphere(string sn = "Kula", string pn = "S", float a = 0, float b = 0, float rad = 1)////konstruktor z wykorzystaniem listy inicjalizujacej z kola/z nazwami i wspolrzednymi srodka kola
//        :Circle(rad, a, b)//wywolanie konstruktora circle, ktory ustawi atrybuty punktu/dziedziczony konstruktor z pointa--lista inicjalizujaca
//        //nie zastapi konstruktora ale bierze udzial w jego tworzeniu
//    {
//        name = sn;
//        r = rad;
//    }
//    void Circle::show()//pokazuje parametry kuli na ekranie i liczy/pokazuje jej objetosc v=4/3pir3
//    //do maina tylko klasa kula i wywolanie na jego rzecz metody show()
//    {
//        cout << "Kula o nazwie: " << name << endl;//z kl pochodnej
//        cout << "Srodek kuli: " << endl;
//        cout << "Promien: " << r << endl;
//        cout << "Objetosc kuli: " << PI * r * r << endl;//definiuje stala Pi
//    }
//};