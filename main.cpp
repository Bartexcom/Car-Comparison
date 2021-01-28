#include <iostream>

using namespace std;

class Car
{
public:
    string marka;
    string model;
    int rocznik;
    int przebieg;
    int moc;
    float silnik
    ;
    void Wczytaj()
    {
        cout << "WCZYTYWANIE NOWEGO MODELU "<< endl;
        cout << "Podaj Marke: ";
        cin>> marka;
        cout << "Podaj Model: ";
        cin >> model;
        cout << "Podaj Rocznik: ";
        cin >> rocznik;
        cout << "Podaj Przebieg (KM): ";
        cin >> przebieg;
        cout << "Podaj Moc (KM): ";
        cin >> moc;
        cout << "Podaj Silnik (L): ";
        cin >> silnik;
    }

    void Wypisz()
    {
        cout << endl << endl << endl << "OTO TWOJE WYNIKI: " << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Rocznik: " << rocznik << endl;
        cout << "Przebieg: " << przebieg << endl;
        cout << "Moc: " << moc << endl;
        cout << "Silnik: " << silnik << endl;

    }
};




int main()
{
   Car v1;
   v1.Wczytaj();
   v1.Wypisz();


   Car v2;
   v2.Wczytaj();
   v2.Wypisz();

     cout << endl << endl << endl  << "POROWNANIE MODELI: " << endl;
     cout << "Marka:         " << v1.marka << " Vs " << v2.marka << endl;
     cout << "Model:         " << v1.model << " Vs " << v2.model << endl;
     cout << "Model:         " << v1.rocznik << " Vs " << v2.rocznik << endl;
     cout << "Przebieg (KM): " << v1.przebieg << " Vs " << v2.przebieg << endl;
     cout << "Moc (KM):      " << v1.moc << " Vs " << v2.moc << endl;
     cout << "Silnik (L):    " << v1.silnik << " Vs " << v2.silnik << endl;





    return 0;
}

