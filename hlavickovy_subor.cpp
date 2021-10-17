#include"clovek.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void nacti_udaje(std::string& jmeno, std::string& prijmeni, int& vek, int& vyska, int& vzdelani)
{
    int vek_min, vek_max, vyska_min, vyska_max;
    vek_min=0;
    vek_max=130;
    vyska_min=150;
    vyska_max=250;

    cout<<"zadejte cele jmeno ve tvaru 'krestni jmeno mezera prijmeni'";
    cin>>jmeno>>prijmeni;

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte vek";
            cin>>vek;
       }
    while (cin.fail()  || vek < vek_min || vek > vek_max);

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte vysku v centimetrech";
            cin>>vyska;
       }
    while (cin.fail()  || vyska < vyska_min || vyska > vyska_max);

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte dosazene vzdelani: 1 pro zakladni, 2 pro stredoskolske, 3 pro vysokoskolske";
            cin>>vzdelani;
       }
          while (cin.fail()  || vzdelani<1 || vzdelani > 3);

}


void uloz_do_souboru (string vypis_jmeno, string vypis_prijmeni, int vypis_vek, int vypis_vyska, int vypis_vzdelani)
//neni nutne pouzivat reference,protoze fce nemeni hodnoty promennych v mainu(?)
{
    fstream soubor("uzivatelskeudaje.txt", ios::out);
    soubor<<"Vyplnil/a jste tyto udaje:\njmeno a prijmeni: "<<vypis_jmeno<<" "<<vypis_prijmeni<<" \nvek: "<<vypis_vek<<"\nvyska: "<<vypis_vyska<<"\ndosazene vzdelani: ";

    if (vypis_vzdelani==1)
    {
        soubor<<"zakladni";
    }
    else if (vypis_vzdelani==2)
    {
       soubor<<"stredoskolske";
    }
   else
    {
        soubor<<"\vysokoskolske";
    }


}

    //reference - funkce pouziva odkazy na promenne
    //void nacti(string& jmeno, string& prijmeni, int& vek, int&vyska, int& vzdelani)

    //puvodni tvar bez referenci
//int nacti_vek(int nejmensi_vek, int nejvetsi_vek)
//{
    //int vek=0;
        //do{
            //cin.clear();
            //cin.ignore(1000,'\n');
            //cout<<"zadejte vek";
            //cin>>vek;
          //}
          //while (cin.fail()  || vek < nejmensi_vek || vek > nejvetsi_vek);
          //return vek;
//}


