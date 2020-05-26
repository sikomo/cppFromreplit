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

#define DIM 6
 void findMinMaxofIntegerTab(int[], int, int*, int*);
 void afficherTab(int*, int);

 int main(){
   int min(0);
   int max(0);
   int tab[DIM] = {3, 5, 1, 3, 10, 0};
   //afficherTab(tab, DIM);
   findMinMaxofIntegerTab(tab , DIM, &min, &max);
   cout << "La valeur min : " << min << endl;
   cout << "La valeur max : " << max << endl;
 }


 void findMinMaxofIntegerTab(int t[], int d, int* mini, int* maxi){
   *mini = t[0]; *maxi = t[0];
   for (int i = 0; i < d; i++){
     if (t[i] < *mini) *mini = t[i];
     if (t[i] > *maxi) *maxi = t[i]; 
   }   
 }


 void afficherTab(int* t, int dim){
   for (int i = 0; i < dim; i++)
    cout << "tab[" << i << "] = " << t[i] << endl;
 }