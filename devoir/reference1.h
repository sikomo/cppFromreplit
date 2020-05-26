#include <iostream>
#include <string>

using namespace std;



struct Maison {
        string adresse;
};

struct Personne {
        string nom;
        Maison& maison;
};

void affiche(Personne);

int main(int argc, char *argv[])
{
        Maison m1 = {"Maison 1"};
        Maison m2 = {"Maison 2"};

        Personne p11 = {"p11", m1};
        Personne p21 = {"p21", m1};
        Personne p32 = {"p32", m2};
        Personne p42 = {"p42", m2};

        affiche(p11);
        affiche(p21);
        affiche(p32);
        affiche(p42);

        return 0;
}


void affiche(Personne p ){
        cout << p.nom << " habite " << p.maison.adresse << endl;
}
