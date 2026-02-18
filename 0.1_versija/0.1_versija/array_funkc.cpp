#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <limits>

void IvestiPazymius(StudentasA& sk, int paz) {
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
    if (paz_kiekis == 0)
        return 0;
    int suma = 0;
    for (int i = 0; i < paz_kiekis; i++) {
        suma += paz[i];
    }
    double vid = static_cast<double>(suma) / paz_kiekis;
    return vid;
}

double mediana(int* paz, int paz_kiekis) {
    if (paz_kiekis == 0)
        return 0;
    int* kopija = new int[paz_kiekis];
    for (int i = 0; i < paz_kiekis; i++) {
        kopija[i] = paz[i];
    }
    std::sort(kopija, kopija + paz_kiekis);
    double med;
    if (paz_kiekis % 2 == 1) {
        med = kopija[paz_kiekis / 2];
    }
    else {
        med = (kopija[paz_kiekis / 2 - 1] + kopija[paz_kiekis / 2]) / 2.0;
    }
    delete[] kopija;
    return med;
}

double galutinis_vid(double x, int egz) {
    return x * 0.4 + egz * 0.6;
}

int skaiciavimo_metodas() {
    std::cout << "Pasirinkite skaiciavimo metoda (1 - vidurkis, 2 - mediana): ";
    int metodas;
    std::cin >> metodas;
    return metodas;
}

void pasirinkimo_metodas(int skaiciavimo_metodas, int studentu_kiekis, StudentasA* studentai) {  
    for (int i = 0; i < studentu_kiekis; i++) {
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

void isvedimas(StudentasA* studentai, int studentu_kiekis, int metodas) { 
    std::string rez = (metodas == 1) ? "Galutinis (vidurkis)" : "Galutinis (mediana)";
    std::cout << std::left << std::setw(15) << "Vardas"
        << std::left << std::setw(15) << "Pavarde"
        << std::right << std::setw(20) << rez << std::endl;
    for (int i = 0; i < studentu_kiekis; i++) {
        std::cout << std::left << std::setw(15) << studentai[i].vardas
            << std::setw(15) << studentai[i].pavarde
            << std::right << std::setw(20) << std::fixed
            << std::setprecision(2) << studentai[i].rez << std::endl;
    }
}

int ivesties_tikrinimas(const std::string& zinute)
{
    std::string line;
    while (true)
    {
        std::cout << zinute;
        std::getline(std::cin, line);

        try {
            int value = std::stoi(line);

            if (value < 1 or value > 10) {
                std::cout << "Ivestis turi buti tarp 1 ir 10 \n";
                continue;
            }
            return value;
        }
        catch (const std::exception&) { 
            std::cout << "Ivestis turi buti skaicius, bandykite dar karta\n";
        }
    }
}




void atlaisvinti(StudentasA* arr, int kiekis) {
    for (int i = 0; i < kiekis; i++) {
        delete[] arr[i].paz;
    }
    delete[] arr;
}



