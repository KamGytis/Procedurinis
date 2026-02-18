#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

struct StudentV {
    std::string vardas;
    std::string pavarde;
    std::vector<int> paz;
    int egz = 0;
    double galutinis = 0.0;
    double galutinis_med = 0.0;
};

int main()
{
    using namespace std;

    cout << "Vector version. Iveskite studentus. Iveskite varda 'pabaiga' kad baigti.\n";
    vector<StudentV> grupe;

    while (true) {
        string vardas;
        cout << "Iveskite varda (ar 'pabaiga'): ";
        if (!(cin >> vardas)) return 0;
        if (vardas == "pabaiga") break;
StudentV s;
s.vardas = vardas;
cout << "Iveskite pavarde: ";
cin >> s.pavarde;

cout << "Iveskite pazymius po viena. Iveskite -1 kad baigti pazymiu ivesti.\n";
int m;
int sum = 0;
int n = 0;
while (true) {
    cout << "Pazymys: ";
    if (!(cin >> m)) return 0;
    if (m == -1) break;
    s.paz.push_back(m);
    sum += m;
    ++n;
}

cout << "Iveskite egzamino pazymi: ";
cin >> s.egz;

double avg = (n > 0) ? (static_cast<double>(sum) / n) : 0.0;

double med = 0.0;
if (n > 0) {
    sort(s.paz.begin(), s.paz.end());
    if (n % 2 == 1) med = static_cast<double>(s.paz[n / 2]);
    else med = (static_cast<double>(s.paz[n / 2 - 1]) + static_cast<double>(s.paz[n / 2])) / 2.0;
}

s.galutinis = avg * 0.4 + s.egz * 0.6;
s.galutinis_med = med * 0.4 + s.egz * 0.6;

grupe.push_back(std::move(s));
    }

    cout << '\n' << left << setw(20) << "Pavarde" << setw(20) << "Vardas"
        << right << setw(16) << "Galutinis(Avg)" << setw(18) << "Galutinis(Med)" << '\n';
    cout << string(74, '-') << '\n';
    cout << fixed << setprecision(2);
    for (const auto& s : grupe) {
        cout << left << setw(20) << s.pavarde << setw(20) << s.vardas
            << right << setw(16) << s.galutinis << setw(18) << s.galutinis_med << '\n';
    }

    return 0;
}