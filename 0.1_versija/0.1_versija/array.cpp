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
	std::cout << "3 - generuoti studentu vardus, pavardės ir pazymius\n";
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
			int paz = isvesties_tikrinimas("Pazymys: ");
			if (paz == -1) { break; }
			IvestiPazymius(Studentas, paz);

		}
		studentas.egzaminas = isvesties_tikrinimas("Iveskite egzamino pazymi: ");

		studento_pridejimas(studentai, studentu_kiekis, studentas);
		std::cout << "Ar norite ivesti dar viena studentą? (1 - taip, 2 - ne): ";
		std::cin >> chosen_option;
		while (chosen_option == 1) {
			if (studentu_kiekis > 0) {
				int tipas skaiciavimo_metodas();
				pasirinkimo_metodas(skaiciavimo_metodas, studentu_kiekis, chosen_option);
				isvedimas(studentai, studentu_kiekis, chosen_option);
			}
			isvalyti_atminti(studentai, studentu_kiekis);
			break;
		}
	}

}