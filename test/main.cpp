#include <iostream>

using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;
    void wyswietlDane()
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
};

int main()
{
    cout << "Stos!" << endl;
    Pracownik pracownik;
    Pracownik *w_pracownik=nullptr;
    w_pracownik=&pracownik;
    w_pracownik->imie="Jan";
    w_pracownik->nazwisko="Kowalski";
    w_pracownik->wyswietlDane();
    return 0;
}
