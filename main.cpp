#include <iostream>
#include"Clovek.h"
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
string rozhodnuti;
Clovek uzivatel(0,130,150,250); //nechce se prelozit s konstrukorem bez parametru
vector<string> vektor_jmen(0);
vector<string> vektor_prijmeni(0);
vector<int> vektor_veku(0);
vector<int> vektor_vysek(0);
vector<int> vektor_vzdelani(0);
string krestni_jmeno, prijmeni;
int vek, vyska, vzdelani,i;
rozhodnuti="ano";


    while (rozhodnuti=="ano"){
        uzivatel.nacti(krestni_jmeno, prijmeni, vek, vyska, vzdelani);
        vektor_jmen.push_back(krestni_jmeno);
        vektor_prijmeni.push_back(prijmeni);
        vektor_veku.push_back(vek);
        vektor_vysek.push_back(vyska);
        vektor_vzdelani.push_back(vzdelani);

        cout<<"prejete si zadat dalsiho uzivatele? Napiste 'ano', nebo 'ne'\n";
        cin>>rozhodnuti;
        }


    for (i=0;i<vektor_veku.size();i++)
    {
        uzivatel.zapis(vektor_jmen[i], vektor_prijmeni[i], vektor_veku[i], vektor_vysek[i], vektor_vzdelani[i]);
    }


return 0;
}
