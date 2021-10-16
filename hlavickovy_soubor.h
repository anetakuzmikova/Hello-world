#ifndef HLAVICKOVY_SOUBOR_H_INCLUDED
#define HLAVICKOVY_SOUBOR_H_INCLUDED
#include <string>


int nacti_vek(int& vek, int nejmensi_vek, int nejvetsi_vek);
int nacti_vysku(int& vyska, int nejmensi_vyska, int nejvetsi_vyska);
int nacti_vzdelani(int& vzdelani);
void nacti_jmeno(std::string& jmeno,std::string&prijmeni);
void uloz_do_souboru (std::string jmeno, std::string prijmeni, int vek, int vyska, int vzdelani);

#endif // HLAVICKOVY_SOUBOR_H_INCLUDED

