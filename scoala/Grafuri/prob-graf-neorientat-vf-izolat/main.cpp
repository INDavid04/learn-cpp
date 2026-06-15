/******************************************************************************

Problema {
    Se da un graf neorientat n cu varfuri. Scrieti un subprogram care:
        1. Afiseaza varfurile izolate
        2. Determina gradul minim din graf si afiseaza varfurile de grad minim
        3. Afiseaza muchiile cu proprietatea ca ambele extremitati sunt varfuri cu nr de orine par
    Alegerea unui subprogram se va face in functie de dorinta utilizatorului.
}

void citire_graf() {
    int M, N;
    cout << "\nN si M: "; cin >> N >> M;
    
    for (int i = 1; i <=n n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = 0;
        }
    }
    
    int x, y;
    for (int k = 1; k <= m; k++) {
        cout << "\nDati muchia cu numarul de ordine " << k << ": ";
        do {
            cin >> x >> y;
        } while (x < 1 || x > n || y < 1 || y > n);
        
        a[x][y] = a[y][x] = 1;
    }
}

vodi afis_mat() {
    for (int i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
}

*******************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

int a[20][20], n, gr[20];

void citire_matrice() {
    int i, j;
    cout << "\nNumarul de varfuri: "; cin >> n;
    
    /// Initializam matricea global, fiecare element este zero
    /// As fi putut scrie int a[20][20] in afara functiei (sa o declar global)
    for (i = 1; i <= n; i++) {
        a[i][i] = 0;
    }
    
    /// Citim graful intreband daca este sau nu muchia respectiva 
    for (i = 1; i <= n - 1; i++) {
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

void vf_izolat() {
    int i, j, ok, iz = 0;
    
    for (i = 1; i <= n; i++) {
        ok = 1;
        for (j = 1; j <= n; j++) {
            if (a[i][j] == 1) {
                ok = 0;
            }
            if (ok == 1) {
                cout << i << " ";
                iz = 1;
            }
        }
    }
    
    if (iz == 0) {
        cout << "\nGraful nu are varfuri izolate!";
    }
}

void grad_minim() {
    int i, j, nr, min;
    
    for (i = 1; i <= n; i++) {
        nr = 0;
        for (j =1; j <= n; j++) {
            nr += a[i][j];
        }
        gr[i] = nr;
    }
    
    min = gr[1];
    for (i = 2; i <= n; i++) {
        if (gr[i] < min) {
            min = gr[i];
        }
    }
    
    cout << "\nGradul minim: " << min;
    cout << "\nVarfurile de grad minim: ";
    
    for (i = 1; i <= n; i++) {
        if (gr[i] == min) {
            cout << i << " ";
        }
    }
}

void afisare_muchii() {
    int i, j;
    
    for (i = 2; i <= n - 2; i += 2) {
        for (j = i + 2; j <= n; j += 2) {
            if (a[i][j] == 1) {
                cout << "(" << i << ", " << j << ");";
            }
        }
    }
}

int main() {
    int opt;
    citire_matrice();
    
    cout << "\nAlegeti 1 pentru afisarea varfurilor izolate";
    cout << "\nAlegeti 2 pentru afisarea varfurilor de grad minim";
    cout << "\nAlegeti 3 pentru afisarea muchiilor cu proprietatea ca ambele extremitati sunt varfuri cu nr de orine par";
    
    cout << "\nOptiunea dumneavostra: "; cin >> opt;
    
    switch (opt) {
        case 1: 
            cout << "\nAfisez varfurile izolate!\n";
            vf_izolat();
            break;
        
        case 2: 
            cout << "\nAfisez gradul minim din graf si varfurile de grad minim!\n";
            grad_minim();
            break;
        
        case 3:
            cout << "\nAfisez muchiile care au ambele extremitati varfuri cu nr de orine par";
            afisare_muchii();
            break;
        
        deafult: cout << "\nEroare!";
    }

    return 0;
}