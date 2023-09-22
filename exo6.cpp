#include <iostream>
using namespace std;
int main()
{
    int a(1), b(2), c(3);
    bool lampe(true), diode(false);
    char lettre1('A'), lettre2('B'), lettre3('C');
    string chaine1("C'est une chaine"), chaine2("de caracteres");
    cout<<"Le 3 chiffres sont : "<<a<<", "<<b<<" et "<<c<<"."<<endl;
    cout<<"La lampe est : "<<lampe<<" et la diode est : "<<diode;
    cout<<"(0 pour eteindre et 1 pour allumee)."<<lettre1<<", "<<lettre2<<" et "<<lettre3<<"."<<endl;
    cout<<"Les chaine de caracteres a afficher sont : "<<chaine1<<chaine2<<"."<<endl;
    return 0;
}