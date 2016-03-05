#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
   float x,y;
   string nazwa;

public:
   void wyswietl()
   {
      cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
   }
   Punkt(string n="S", float a=0, float b=0)
   {
      nazwa = n;
      x = a;
      y = b;
   }
};

class Kolo :public Punkt //klasa Kolo dziedziczy publicznie z klasy Punkt
{
  
   string nazwa;
protected:
   float r;
public:
   void wyswietl()
   {
      cout<<"Kolo o nazwie: "<<nazwa<<endl;
      cout<<"Srodek kola: "<<endl;
      Punkt::wyswietl();
      cout<<"Promien: "<<r<<endl;
      cout<<"Pole kola : "<<M_PI*r*r<<endl;
   }

   Kolo(string nk="Kolko", string np="S", float a=0, float b=0, float pr=1)
   :Punkt(np,a,b)
   {
      nazwa = nk;
      r = pr;
   }
};

class Kula :public Kolo
{
	string nazwa;

public:
	void Wyswietl()
	{
		cout << "Kula o nazwie: " << nazwa << endl;
		cout << "Srodek kuli: " << endl;
		Kolo::wyswietl();
		cout << "Promien: " << Kolo::r << endl;
		cout << "Objetosc kuli : " << (4 * M_PI*Kolo::r*Kolo::r*Kolo::r) / 3 << endl;
	}
	Kula(string nak = "kulka", string nazk = "koleczko", string pkt = "S", float a = 0, float b = 0, float pr = 1)
		: Kolo(nazk, pkt, a, b, pr)
	{
		nazwa = nak;
	}
};

int main()
{
    Kolo k1;
    k1.wyswietl();

    return 0;
}
