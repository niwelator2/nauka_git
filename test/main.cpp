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
    cout << "Dane nauczyciela 1: " << nauczyciel.zwrocDane() << endl;
    Nauczyciel nauczyciel2("Adam","Nowak","niemiecki");
    cout << "Dane nauczyciela 2: " << nauczyciel2.zwrocDane() << endl;
    Nauczyciel nauczyciel3=Nauczyciel("Jan", "Ostrowski", "polski");
    cout << "Dane nauczyciela 3: " << nauczyciel3.zwrocDane() << endl;
    return 0;
}
