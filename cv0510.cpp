#include <iostream>
#include <fstream>


using namespace std;
int main()
{
float vyska,vzdelani,vek;
std::string jmeno,prijmeni;
std::cout<<"zadejte jmeno ve tvaru 'jmeno prijmeni'\n";
std::cin>>jmeno>>prijmeni;
cout<<"zadejte vek\n";
std::cin>>vek;
std::cout<<"zadejte vysku v centimetrech\n";
std::cin>>vyska;
std::cout<<"zadejte cislo dosazeneho vzdelani: '1' pro zakladni, '2' pro stredni, '3' pro vysokoskolske\n";
std::cin>>vzdelani;

std::cout<<"kontrolni vypis ";
std::cout<<jmeno<<" "<<prijmeni<<" "<<vek<<" "<<vyska<<" "<<vzdelani;

fstream soubor("vyplneneudaje.txt", ios::out);

soubor<<"Vyplnil/a jste tyto udaje:\n"<<"jmeno a prijmeni: ";
soubor<<jmeno<<" "<<prijmeni;


soubor<<"\nvek: ";

if (vek <=0|| vek>=150)
{
    soubor<<"Vek byl zadan mimo predpokladany rozsah!";
}

else
    {
        soubor<<vek;
    }


soubor<<"\nvyska v centimetrech: ";

if (vyska <=0|| vyska>=250)
{
  soubor<<"Vyska byla zadana mimo predpokladany rozsah!";
}
else
    {
        soubor<<vyska;
    }

soubor<<"\ndosazene vzdelani: ";

if (vzdelani==1)
{
   soubor<<"zakladni";
}
   else if (vzdelani==2)
   {
       soubor<<"stredoskolske";
   }
   else if (vzdelani==3)
   {
    soubor<<"\vysokoskolske";
    }
    else
    {
        soubor<<"Nezadal/a jste dosazene vzdelani pozadovanym zpusobem!";
    }





}




