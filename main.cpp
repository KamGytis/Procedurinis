#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iomanip>

struct Student
{
    std::string vardas = "A";
    std::string pavarde = "BB";

    std::vector<int> paz = {0}; 
    int egz;
    double rez;   
};

 using namespace std;
int main()
{
    Student A;
    vector<Student> grupe;
    for(int ii=0; ii<2; ii++)
    {
        cout<<"Iveskite varda or pavarde: ";
        cin>>A.vardas>>A.pavarde;
        //std::cout<<A.vardas<<" "<<A.pavarde<<std::endl;
        cout<<"Iveskite semestro pazymius:\nKiek pazymiu: ";
        int n, temp, sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
            {
            cout<<"Iveskite "<<i+1<<" pazymi: "<<n<<":"<<endl;
            cin>>temp;
            A.paz.push_back(temp);
            sum+=temp;
            }
        A.rez = sum / (double)n;
       
    cout<<"Iveskite egzamino pazymi: "<<endl;
    cin>>A.egz;
    A.rez = (sum / n) * 0.4 + A.egz * 0.6;
    grupe.push_back(A);
    A.paz.clear();
    }
    for(auto A : grupe)
    {
        std::cout<<std::left<<setw(10)<<A.vardas<<std::right<<setw(10)<<A.pavarde<<endl;
        //for(auto a:A.paz) cout<<setw(3)<<a;
        //cout<<setw(10)<<A.egz<<endl;
        cout<<setw(20)<<A.rez<<endl;
    }
    return 0;
}
