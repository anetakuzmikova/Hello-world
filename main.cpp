#include <iostream>
#include <fstream>
#include "clovek.h"
#include <string>


using namespace std;
int main()
{
int vyska,vzdelani,vek;
string jmeno, prijmeni;


vek=0;
vyska=0;
vzdelani=0;
jmeno="mojekrestnijmeno";
prijmeni="mojeprijmeni";


nacti_udaje(jmeno,prijmeni,vek,vyska,vzdelani);
uloz_do_souboru(jmeno,prijmeni,vek,vyska,vzdelani);


cout<<"\nkontrolni vypis po fcich: vek, vyska, vzdelani:  "<<vek<<",  "<<vyska<<",  "<<vzdelani<<",  "<<jmeno<<" "<<prijmeni<<"\n";

}





