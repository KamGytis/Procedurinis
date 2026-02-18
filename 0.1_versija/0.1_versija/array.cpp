#include <limits>
#include<iostream>
#include<string>
#include<iomanip>

#include "struktura.h"
#include "array.h"

void arrayFunkcija() {

	int pasirinkimas;
	
	std::cout << "\n-------------------------Meniu-------------------------\n";
	std::cout << "1 - ranka ivedimas\n";
	std::cout << "2 - generuoti tik pazymius\n";
	std::cout << "3 - generuoti student? vardus, pavard?s ir paymius\n";
	std::cout << "4 - baigti darba\n";
	std::cin >> pasirinkimas;
	if(std::cin.fail())
	{
		std::cerr << "Neteisingas ivestis bandykite dar karta.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue;
	}
	if (pasirinkimas == 1) {
		StudentasA* studentai = nullptr;
		int studentu_kiekis = 0;

		Studentas.vardas = ivesti_varda_ar_pavarde("Iveskite varda: ");
		Studentas.Pavarde = ivesti_varda_ar_pavarde("Iveskite pavarde: ");

		std:cout << "Iveskite pazymi (0-10). Baigti -1\n";
		while (true) {
			int paz = isvesti

		}
	}

}