/* Écrire une fonction qui :
- ne renvoie aucune valeur 
- et qui détermine la valeur maximale et la valeur minimale d’un tableau d’entiers (à un indice) de taille quelconque. 
On prévoira 4 arguments : 
- le tableau, sa dimension, 
- le maximum 
- et le minimum. 

Pour chacun d’entre eux, on choisira le mode de transmission le plus approprié (par valeur ou par référence). Dans le cas où la transmission par référence est nécessaire, proposer deux solutions : l’une utilisant effectivement cette notion de référence, l’autre la « simulant » à l’aide de pointeurs.
 Écrire un petit programme d’essai.*/

#include <iostream>

using namespace std;

#define DIM 4
void findMinMaxofIntigerTab(int[], int, int&, int&);
void afficherTab(int*, int);

 
//const int dim(4);
int main(){
  
  int min(0);
  int max(0);
  int tab[DIM] = {3, 5, 0, 3};
  
  afficherTab(tab, DIM);
  findMinMaxofIntigerTab(tab, DIM, min, max);

  cout << "La valeur min : " << min << endl;
  cout << "La valeur max : " << max << endl;
}

void findMinMaxofIntigerTab(int tab[], int dim, int& min, int& max){
  min = 0, max = 0;
  for (int i = 0; i < dim; i++){
    if (tab[i] < min) min = tab[i];
    if (tab[i] > max) max = tab[i];
  }

}

void afficherTab(int tab[], int dim){
  for (int i = 0; i < dim; i++)
    cout << "tab[" << i << "] = " << tab[i] << endl;
}



