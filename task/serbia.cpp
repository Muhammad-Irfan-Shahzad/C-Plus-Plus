#include<iostream>
#include<string>
#include <cstdio>
using namespace std;


//Klasa vozilo
class Vozilo {

protected:

	string nazivVozila;
	string markaVozila;
	int cenaIzdavanja;
	int izdat;


public:
	Vozilo(string nazivVozila, string markaVozila, int cenaIzdavanja);
	Vozilo();

	void pokreniVozilo();


	string getNazivVozila();
	void setNazivVozila(string naziv);

	string getMarkaVozila();
	void setMarkaVozila(string marka);

	int getCenaIzdavanja();
	void setCenaIzdavanja(int cena);

	int getIzdat();
	void setIzdat(int i);

};

class Motor : public Vozilo {

private:
	int ubrzanje;

public:

	Motor(string nazivVozila, string markaVozila, int ubrzanje, int cenaIzdavanja);


	int getUbrzanje();
	void setUbrzanje();


};

class Automobil : public Vozilo {

private:
	int maxBrzina;


public:

	Automobil(string nazivVozila, string markaVozila, int cenaIzdavanja, int maxBrzina);

	int getMaxBrzina();
	void setMaxBrzina(int max);

	void DaLiJeAutomobilSportski();

};

class Klijent {

private:

	string ime;
	string prezime;


public:

	Klijent(string ime, string prezime);

	string getIme();
	void setIme(string ime);

	string getPrezime();
	void setPrezime(string prezime);


};

class Agencija {


private:

	Vozilo *listaVozila;
	double zarada;
	int brojac;
	int kapacitet;


public:

	Agencija(int kapacitet);

	void dodajVozilo(Vozilo *v);
	void IzdajVozilo(Vozilo *v, Klijent *k);

	double getZarada();

	void SvaVozilaAgencije();
	void svaSlobodnaVozila();

	Vozilo* getVozilo(int i); //vraca vozilo sa zadatog broja



};
Klijent::Klijent(string ime, string prezime) {

	this->ime = ime;
	this->prezime = prezime;
}

string Klijent::getIme() { return this->ime; }

void Klijent::setIme(string ime) {
	this->ime = ime;
}

string Klijent::getPrezime() { return this->prezime; }
void Klijent::setPrezime(string prezime) {
	this->prezime = prezime;
}


Vozilo::Vozilo(string nazivVozila, string markaVozila, int cenaIzdavanja) {

	this->nazivVozila = nazivVozila;
	this->markaVozila = markaVozila;
	this->cenaIzdavanja = cenaIzdavanja;
	this->izdat = 0;
}

Vozilo::Vozilo() {


}

void Vozilo::pokreniVozilo() {

	cout << "Vozilo pod nazivom " << this->nazivVozila << " se pokrenulo";
}

string Vozilo::getNazivVozila() { return this->nazivVozila; }
void Vozilo::setNazivVozila(string naziv) { this->nazivVozila = naziv; }

string Vozilo::getMarkaVozila() { return this->markaVozila; }
void  Vozilo::setMarkaVozila(string marka) { this->markaVozila = marka; }

int Vozilo::getCenaIzdavanja() { return this->cenaIzdavanja; }
void Vozilo::setCenaIzdavanja(int cena) { this->cenaIzdavanja = cena; }

int Vozilo::getIzdat() { return this->izdat; }
void Vozilo::setIzdat(int i) { this->izdat = i; }


Motor::Motor(string nazivVozila, string markaVozila, int cenaIzdavanja, int ubrzanje) :Vozilo(nazivVozila, markaVozila, cenaIzdavanja) {

	this->ubrzanje = ubrzanje;
}

int Motor::getUbrzanje() { return this->ubrzanje; }
void Motor::setUbrzanje() { this->ubrzanje = ubrzanje; }


Automobil::Automobil(string nazivVozila, string markaVozila, int cenaIzdavanja, int maxBrzina) :Vozilo(nazivVozila, markaVozila, cenaIzdavanja) {
	this->maxBrzina = maxBrzina;
}

int Automobil::getMaxBrzina() { return this->maxBrzina; }
void Automobil::setMaxBrzina(int max) { this->maxBrzina = max; }

void Automobil::DaLiJeAutomobilSportski() {

	if (this->maxBrzina > 230) {

		cout << "automobil je sportski";
	}
	else {
		cout << "automobil nije sportski";

	}
}



Agencija::Agencija(int kapacitet) {

	this->listaVozila = new Vozilo[kapacitet];
	brojac = 0;
	this->kapacitet = kapacitet;

}

void Agencija::dodajVozilo(Vozilo *v) {

	if (brojac < kapacitet) {

		listaVozila[brojac] = *v;
		brojac++;
	}
	else {

		cout << "Nema vise mesta u agenciji";
	}

}


void Agencija::IzdajVozilo(Vozilo *v, Klijent *k) {

	cout << endl << "Agencija je izdala vozilo " << v->getMarkaVozila() << " " << v->getNazivVozila() << " po ceni od " << v->getCenaIzdavanja() << " evra, ime klijenta je " << k->getIme() << endl;
	zarada += v->getCenaIzdavanja();

}


double Agencija::getZarada() { return this->zarada; }


void Agencija::SvaVozilaAgencije() {

	for (int i = 0; i < brojac; i++) {

		cout << " Model vozila: " << listaVozila[i].getNazivVozila() << ", Marka vozila: " << listaVozila[i].getMarkaVozila() << endl;
	}

}


Vozilo* Agencija::getVozilo(int i) { return &listaVozila[i]; }

void Agencija::svaSlobodnaVozila() {

	for (int i = 0; i < brojac; i++) {

		if (listaVozila[i].getIzdat() == 0) {

			cout << " " << i << " Model vozila " << listaVozila[i].getNazivVozila() << ", Marka vozila " << listaVozila[i].getMarkaVozila() << endl;

		}


	}

}
int main() {

	int i = 0;
	Klijent*K1 = NULL;
	Vozilo *m1 = NULL;
	Vozilo *a1 = NULL;
	int brojac = 0;
	int izdatiBrojac = 0;
	string ime, prezime, model, marka;
	int cenaIzdavanja, maxbrzina, ubrzanje, brojVozila;
	int izbor = 0;

	//cout << "Unesite kapacitet agencije: " << endl;
	//cin >> brojVozila;


	brojVozila = 20;

	Agencija *agencija = new Agencija(brojVozila);

	a1 = new Automobil("Yugo 45", "Zastava", 20, 170);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("Punto", "Fiat", 50, 220);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("Logan", "Dacia", 45, 200);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("Elantra", "Hyundai", 60, 190);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("200 SX", "Nissan", 35, 160);

	agencija->dodajVozilo(a1);

	m1 = new Motor("Duke 390", "KTM", 90, 320);

	agencija->dodajVozilo(m1);

	m1 = new Motor("RS 125", "Aprilia", 50, 250);

	agencija->dodajVozilo(m1);

	m1 = new Motor("R 1250 GS", "BMW", 150, 380);

	agencija->dodajVozilo(m1);

	m1 = new Motor("Hornet", "Honda", 100, 340);

	agencija->dodajVozilo(m1);

	m1 = new Motor("Ninja", "Kawasaki", 80, 350);

	agencija->dodajVozilo(m1);


	while (izbor != 10) {
		cout << endl << "MENI" << endl;;
		cout << "1. Dodavanje vozila u agenciju" << endl;
		cout << "2. Izdavanje vozila klijentu " << endl;
		cout << "3. Listanje slobodnih vozila " << endl;
		cout << "4. Listanje svih vozila agencije" << endl;
		cout << "5. Zarada agencije" << endl;
		cout << "6. Izlaz" << endl;

		cin >> izbor;

		switch (izbor)
		{

		case 1: //unosenje vozila

			cout << "Da li hocete motor ili automobil" << endl << "1 automobil" << endl << "2 motor" << endl;
			cin >> izbor;

			if (brojac >= brojVozila) {
				cout << endl << "Broj vozila popunjen" << endl;

			}
			else {

				if (izbor == 1) {

					cout << "Unesite model vozila " << endl;
					cin >> model;
					cout << "Unesite marku vozila " << endl;
					cin >> marka;

					cout << "Unesite cenu izdavanja " << endl;
					cin >> cenaIzdavanja;

					cout << "Unesite max brzinu" << endl;
					cin >> maxbrzina;

					a1 = new Automobil(model, marka, cenaIzdavanja, maxbrzina);

					agencija->dodajVozilo(a1);
					brojac++;
				}

				else {
					//unosenje motora
					cout << "Unesite model motora " << endl;
					cin >> model;
					cout << "Unesite marku motora " << endl;
					cin >> marka;

					cout << "Unesite cenu izdavanja " << endl;
					cin >> cenaIzdavanja;

					cout << "Unesite ubrzanje" << endl;
					cin >> ubrzanje;
					cout << endl;

					m1 = new Motor(model, marka, cenaIzdavanja, ubrzanje);

					agencija->dodajVozilo(m1);
					brojac++;
				}
			}

			break;

		case 2: // izdavanje vozila klijentu


			cout << "Unesite ime  klijenta: " << endl;
			cin >> ime;
			cout << "Unesite prezime klijenta: " << endl;
			cin >> prezime;
			K1 = new Klijent(ime, prezime);

			cout << endl << "Slobodna vozila: " << endl;
			agencija->svaSlobodnaVozila();
			cout << endl;

			cout << "Izaberite redni broj vozila koje zelite da iznajmite" << endl;
			cin >> i;

			if (agencija->getVozilo(i)->getIzdat() == 0) {

				agencija->getVozilo(i)->setIzdat(1);
				agencija->IzdajVozilo(agencija->getVozilo(i), K1);

			}
			else {

				cout << endl << "Vozilo je izdato, izaberite drugo !!!" << endl;
			}

			break;

		case 3:
			agencija->svaSlobodnaVozila();
			break;

		case 4:
			agencija->SvaVozilaAgencije();
			break;

		case 5: cout << "Ukupna zarada agencije je " << agencija->getZarada() << " evra." << endl;
			break;

		case 6: izbor = 10;
			break;

		default:
			break;
		}

	}


	cout << endl << "Izlaz iz programa ";


	//	system("pause");
}
