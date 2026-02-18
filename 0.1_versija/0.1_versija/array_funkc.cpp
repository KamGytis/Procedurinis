#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <limits>

void IvestiPazymius(StudentasA & sk, int paz) {

	int* pazymys = new int[sk.paz_kiekis + 1];
	for (int i = 0; i < sk.paz_kiekis; i++) {
		pazymys[i] = sk.paz[i];
	}
	pazymys[sk.paz_kiekis] = paz;
	delete[] sk.paz;
	sk.paz = pazymys;
	sk.paz_kiekis++;
}

double vidurkis(int* paz, int paz_kiekis) {
	if (kiekis == 0)
		return 0;
	int suma = 0;

	for (int i = 0; i < paz_kiekis; i++) {
		suma += paz[i];
	}
	double vid = suma / paz_kiekis;
	return vid;
}


double mediana(int* paz, int paz_kiekis) {
	if (kiekis == 0)
		return 0;
	std::sort(paz, paz + paz_kiekis);
	if (paz_kiekis % 2 == 1) {
		return paz[paz_kiekis / 2];
	}
	else {
		return (paz[paz_kiekis / 2 - 1] + paz[paz_kiekis / 2]) / 2.0;
	}
}

double galutinis_vid(double x, int egz) { //x yra vidurkis arba mediana priklauso nuo pasirinkimo skaiciavimo metode
	return x * 0.4 + egz * 0.6;
}

int skaiciavimo_metodas() {

	std::cout << "Pasirinkite skaiciavimo metoda (1 - vidurkis, 2 - mediana):\n ";
	return skaiciavimo_metodas;

}

void pasirinkimo_metodas(int skaiciavimo_metodas, int paz_kiekis, StudentasA& sk) {
	for (int i = 0; i < paz_kiekis; i++) {

		double x;
		if (skaiciavimo_metodas == 1) {
			x = vidurkis(studentai[i].paz, studentai[i].paz_kiekis);
		}
		else if (skaiciavimo_metodas == 2) {
			x = mediana(studentai[i].paz, studentai[i].paz_kiekis);
		}
		else {
			std::cout << "Neteisingas pasirinkimas. Naudojamas vidurkis.\n";
			x = vidurkis(studentai[i].paz, studentai[i].paz_kiekis);
		}
		studentai[i].rez = galutinis_vid(x, studentai[i].egz);
	}

}

void isvedimas(StudentasA* studentai, int sudentukiekis, int metodas) {
	std::string rez = (metodas == 1) ? "Galutinis (vidurkis)" : "Galutinis (mediana)";

	std::cout << std::left << std::setw(15) << "Vardas" << std::left << std::setw(15) << "Pavarde " << std::right << std::setw(15) << rez << std::endl;
	for (int i = 0; i < studentukiekis; i++) {
		std::cout << std::setw(15) << studentai[i].vardas << std::setw(15) << studentai[i].pavarde << std::right << std::setw(15) << std::fixed << std::setprecision(2) << studentai[i].rez << std::endl;
	}
}


