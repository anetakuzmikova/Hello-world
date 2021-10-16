#include"hlavickovy_soubor.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int nacti_vek(int& vek,int vek_min, int vek_max)
{
    do
    {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte vek";
            cin>>vek;
    }
    while (cin.fail()  || vek < vek_min || vek > vek_max);
    return vek;
}


int nacti_vysku(int& vyska, int nejmensi_vyska, int nejvetsi_vyska)
{
        do{
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte vysku v centimetrech";
            cin>>vyska;
          }
          while (cin.fail()  || vyska < nejmensi_vyska || vyska > nejvetsi_vyska);
          return vyska;
   }


int nacti_vzdelani(int& vzdelani)
{
        do{
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"zadejte dosazene vzdelani: 1 pro zakladni, 2 pro stredoskolske, 3 pro vysokoskolske";
            cin>>vzdelani;
          }
          while (cin.fail()  || vzdelani<1 || vzdelani > 3);
          return vzdelani;
}

void nacti_jmeno(string& jmeno, string& prijmeni)
{
    cout<<"zadejte cele jmeno";
    cin>>jmeno>>prijmeni;

}

void uloz_do_souboru (string jmeno, string prijmeni, int vek, int vyska, int vzdelani)
//neni nutne pouzivat reference,protoze fce nemeni hodnoty promennych v mainu(?)
{
    fstream soubor("uzivatelskeudaje.txt", ios::out);
    soubor<<"Vyplnil/a jste tyto udaje:\njmeno a prijmeni: "<<jmeno<<" "<<prijmeni<<" \nvek: "<<vek<<"\nvyska"<<vyska<<"\ndosazene vzdelani: ";

    if (vzdelani==1)
    {
        soubor<<"zakladni";
    }
    else if (vzdelani==2)
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

