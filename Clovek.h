#ifndef CLOVEK_H
#define CLOVEK_H
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;


class Clovek
{
    public:
        Clovek(int _vek_min, int _vek_max, int _vyska_min, int _vyska_max);

        int vek_min, vek_max, vyska_min, vyska_max,i, soubor;

        void nacti(std::string &krestni_jmeno, std::string& prijmeni, int& vek, int& vyska, int& vzdelani);
        void zapis(std::string zapis_krestni_jmeno, std::string zapis_prijmeni, int zapis_vek, int zapis_vysku, int zapis_vzdelani);


};

#endif // CLOVEK_H

