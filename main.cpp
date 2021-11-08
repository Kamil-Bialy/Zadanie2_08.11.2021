#include <iostream>

using namespace std;

class Uczen
{
	public:
		string imie, nazwisko, klasa;
		int rok_urodzenia, grupa;
		
		void metryczka()
		{
			cout << "--------------------------------------" << endl;
			cout << "Imie i nazwisko autora: Kamil Bialy" << endl;
			cout << "Klasa: 3Cg" << endl;
			cout << "--------------------------------------\n\n" << endl;
		}
};

void wprowadzDane(Uczen *u)
{
	cout << "Podaj imie ucznia: " << endl;
	cin >> u->imie;
	cout << "Podaj nazwisko ucznia: " << endl;
	cin >> u->nazwisko;
	cout << "Podaj rok urodzenia ucznia: " << endl;
	cin >> u->rok_urodzenia;
	cout << "Podaj klase ucznia: " << endl;
	cin >> u->klasa;
	cout << "Podaj grupe ucznia: " << endl;
	cin >> u->grupa;
}

void wyswietlDane(Uczen *u)
{
	cout << "\nImie ucznia: " << u->imie << endl;
	cout << "Nazwisko ucznia: " << u->nazwisko << endl;
	cout << "Rok urodzenia ucznia: " << u->rok_urodzenia << endl;
	cout << "Klasa ucznia: " << u->klasa << endl;
	cout << "Grupa ucznia: " << u->grupa << endl;
}


int main() 
{
	
	Uczen *uczen = new Uczen();
	
	uczen->metryczka();
	wprowadzDane(uczen);
	wyswietlDane(uczen);
	
	delete uczen;
	
	return 0;
}
