float ocena;
ocena = 5.0;
 cout<<"Twoja ocena to: " ocena <<endl;
#include <iostream>

using namespace std;

class Pracownik{
public:
    string imie;
    string nazwisko;
    Pracownik(){};
    Pracownik(string pImie, string pNazwisko);
    string zwrocDane(){
    return imie + " " + nazwisko;
    }
};
class Nauczyciel: public Pracownik{
public:
    string przedmiot;
    Nauczyciel(){};
    Nauczyciel(string pImie, string pNazwisko, string pPrzedmiot){
    imie=pImie;
    nazwisko=pNazwisko;
    przedmiot=pPrzedmiot;
    };
    Nauczyciel(string pImie, string pNazwisko): Pracownik(pImie, pNazwisko){};
    string zwrocDane(){
    return imie + " " + nazwisko + " przedmiot: " + przedmiot;
    };
};
int main()
{
    Nauczyciel nauczyciel;
    nauczyciel.imie="Ala";
    nauczyciel.nazwisko="Kowalska";
    nauczyciel.przedmiot="angielski";
    return 0;
}
