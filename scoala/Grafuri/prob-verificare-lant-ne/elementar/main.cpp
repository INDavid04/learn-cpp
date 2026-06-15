/******************************************************************************

    Fie G un graf neorientat dat prin matricea lui de adiacenta.
    Intr-un fisier text lant.txt avem pe un rand o succesine de noduri
separate prin spatii. 
    Scrieti un program C++ care verifica daca nodurile din fisier
formeaza un lant si daca da atunci afiseaza elementar sau neelementar.

*******************************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

int z[20], a[20][20], n;

void citire_matrice_triunghi_superior() {
    int i, j;
    cout << "\nNumarul de varfuri: "; cin >> n;
    
    /// Citim graful intreband daca este sau nu muchia respectiva 
    for (i = 1; i <= n-1; i++) {
        for (j = i+1; j <= n; j++) {
            cout << "\nExista muchia (" << i << ", " << j << ")? [1/0] ";
            
            do {
               cin >> a[i][j]; 
            } while (!(a[i][j] == 0 || a[i][j] == 1));
            
            a[j][i] = a[i][j];
        }
    }
    
    /// Afisam matricea corespunzatoare grafului
    cout << "\nMatricea de adiacenta: \n";
    for (i = 1; i <= n; i++) {
        for (j =1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

void secventa() {
    
} /// De terminat

int main() {
    citire_matrice_triunghi_superior();
    secventa();
    
    return 0;
}