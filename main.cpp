#include <iostream>
#include <fstream>
#include "hlavickovy_soubor.h"
#include <string>


using namespace std;
int main()
{
int vyska,vzdelani,vek;
string jmeno, prijmeni;


vek=0;
vyska=0;
vzdelani=0;


vek=nacti_vek (vek, 0,130);
vyska=nacti_vysku (vyska, 150,250);
vzdelani=nacti_vzdelani (vzdelani);


cout<<"\nkontrolni vypis: vek, vyska, vzdelani:  "<<vek<<",  "<<vyska<<",  "<<vzdelani<<",  "<<jmeno<<"\n";


//string jmeno,prijmeni;
//cout<<"zadejte jmeno ve tvaru 'jmeno prijmeni'\n";
//cin>>jmeno>>prijmeni;

}






