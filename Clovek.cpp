#include "Clovek.h"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

Clovek::Clovek(int _vek_min, int _vek_max, int _vyska_min, int _vyska_max){
    vek_min=_vek_min;
    vek_max=_vek_max;
    vyska_min=_vyska_min;
    vyska_max=_vyska_max;
    }

void Clovek::nacti(std::string &krestni_jmeno, std::string& prijmeni, int& vek, int& vyska, int& vzdelani){


    cout<<"zadejte Vase krestni jmeno\n";
    cin>>krestni_jmeno;

    cout<<"zadejte prijmeni\n";
    cin>>prijmeni;

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte vek\n";
            cin>>vek;
       }
    while (cin.fail()  || vek < vek_min || vek > vek_max);



    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte vysku v centimetrech\n";
            cin>>vyska;
       }
    while (cin.fail()  || vyska < vyska_min || vyska > vyska_max);



    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte dosazene vzdelani: 1 pro zakladni, 2 pro stredoskolske, 3 pro vysokoskolske\n";
            cin>>vzdelani;
       }
    while (cin.fail()  || vzdelani<1 || vzdelani > 3);


    }

   void Clovek::zapis(std::string zapis_krestni_jmeno, std::string zapis_prijmeni, int zapis_vek, int zapis_vysku, int zapis_vzdelani){

    fstream soubor("databaze.txt", ios::app);

       soubor<<"uzivatel zadal tato data:\n"<<"krestni jmeno: ";
       soubor<<zapis_krestni_jmeno<<"\n"<<"prijmeni: ";
       soubor<<zapis_prijmeni<<"\n"<<"vek: ";
       soubor<<zapis_vek<<"\n"<<"vyska: ";
       soubor<<zapis_vysku<<"\n"<<"vzdelani: ";

       if (zapis_vzdelani==1)
       {
           soubor<<"zakladni\n\n";
       }
       else if (zapis_vzdelani==2)
       {
           soubor<<"stredoskolske\n\n";
       }
       else
       {
           soubor<<"vysokoskolske\n\n";
       }
    }







