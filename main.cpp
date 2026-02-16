#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

struct Student
{
    std::string vardas;
    std::string pavarde;
    std::vector<int> paz;
    int egz = 0;
    double galutinis = 0.00;
    double galutinis_med = 0.00;
};

int main()
{
    using namespace std;

    int student_sk;
    cout << "Kiek studentu: ";
    cin >> student_sk;
    if (student_sk <= 0) {
        cout << "Neteisingas studentu skaicius" << endl;
        return 0;
    }
    vector<Student> grupe;
    grupe.reserve(student_sk);

    for (int ii = 0; ii < student_sk; ++ii)
    {
        Student A;
        cout << "Iveskite varda ir pavarde: ";
        cin >> A.vardas >> A.pavarde;

        cout << "Kiek pazymiu: ";
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cout << "Iveskite " << i + 1 << " pazymi: ";
            cin >> temp;
            A.paz.push_back(temp);
            sum += temp;
        }
        cout << "Iveskite egzamino pazymi: ";
        cin >> A.egz;
        double med = 0.0;
        if (n > 0) {
            sort(A.paz.begin(), A.paz.end());
            if (n % 2 == 1) med = static_cast<double>(A.paz[n / 2]);
            else med = (static_cast<double>(A.paz[n / 2 - 1]) + static_cast<double>(A.paz[n / 2])) / 2.0;
        }
        A.galutinis = (sum / n) * 0.4 + A.egz * 0.6;
        A.galutinis_med = med * 0.4 + A.egz * 0.6;
        grupe.push_back(std::move(A));
    }

    cout << left << setw(20) << "Pavarde" << setw(20) << "Vardas" << right << setw(16) << "Galutinis (Vid.)" << " / " << "Galutinis (Med.)" << endl;
    cout << string(74, '-') << endl;

    cout << fixed << setprecision(2);
    for (const auto& A : grupe)
    {
        cout << left << setw(20) << A.pavarde << setw(20) << A.vardas << right << setw(16) << A.galutinis << setw(19) << A.galutinis_med << endl;
    }

    return 0;
}
