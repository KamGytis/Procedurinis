#include <string>

struct SudentasA {
	std::string vardas;
	std::string pavarde;

	int* paz = nullptr;
	int paz_kiekis = 0;
	int egz = 0;
	double rez = 0.0;

};

void IvestiPazymius(StudentasA& sk, int paz);

double vidurkis(int* paz, int paz_kiekis);
double mediana(int* paz, int paz_kiekis);
double galutinis_vid(int* paz, int paz_kiekis, int egz);

int skaiciavimo_metodas();
void pasirinkimo_metodas(int skaiciavimo_metodas, StudentasA& sk);