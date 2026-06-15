#include <iostream>
#include <fstream> /// ifstream, fin, fout
using namespace std;

struct { int st, dr; } m[30];

/// 15-mai-2023-19-03
void MatriceIncidenta(); 
/// 03-iun-2023-19-04
void MatriceAdiacentaDinCitireMuchii();

int main() {
    MatriceAdiacentaDinCitireMuchii();

    return 0;
}

void MatriceAdiacentaDinCitireMuchii() {
    ifstream fin("MatriceIncidenta.in");
    int i, j, nrN, nrM;
    fin >> nrN >> nrM;
    int a[nrN][nrN] = {0};
    
    int alegere;
    cout << "\nApasa 0 daca graful este neorientat sau 1 daca este orientat: ";
    cin >> alegere;
    
    if (alegere) {
        /// Graf orientat
        for (i = 0; i < nrM; i++) {
            fin >> m[i].st >> m[i].dr;
            a[m[i].st - 1][m[i].dr - 1] = 1;
        }
    } else {
        /// Graf neorientat
        for (i = 0; i < nrM; i++) {
            fin >> m[i].st >> m[i].dr;
            a[m[i].st - 1][m[i].dr - 1] = 1;
            a[m[i].dr - 1][m[i].st - 1] = 1;
        }        
    }
    
    /// Afisare matrice adiacenta
    for (i = 0; i < nrN; i++) {
        for (j = 0; j < nrN; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

void MatriceIncidenta(void) {
    ifstream fin ("MatriceIncidenta.in");
    int n, m; /// n noduri si m muchii
    fin >> n >> m;
    int i, j, a[n][m], start, final, dplus, dminus, splus = 0, sminus = 0;
    for (j = 1; j <= m; j++) { /// coloana
        fin >> start >> final;
        for (int i = 1; i <= n; i++) { /// pentru (1, 2), j = 1: i = 1, a[i][j] = 1; i = 2, a[i][j] = -1
            if (start == i) {
                a[i][j] = 1;
            } else if (final == i) {
                a[i][j] = -1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    cout << "Matricea de incidenta (varfuri si arce):\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                cout << " " << " 1";
            } else if (a[i][j] == -1) {
                cout << " " << "-1";
            } else {
                cout << " " << " 0";
            } /// afisare mai frumoasa :) alternativa: cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    for (i = 1; i <= n; i++) {
        /// Pentru fiecare nod resetam gradul (dplus, dminus), salvand suma gradelor in splus, sminus
        dplus = 0;
        dminus = 0;
        for (j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                dplus++;
                splus++;
            } else if (a[i][j] == -1) {
                dminus++;
                sminus++;
            }
        }
        cout << "\nd+(" << i << ") = " << dplus;
        cout << "\nd-(" << i << ") = " << dminus;
    }
    cout << "\nSuma gradelor exterioare = " << splus;
    cout << "\nSuma gradelor interioare = " << sminus;
    /// Gradul lui: 1-2; 2-4; 3-3; 4-5; 5-4; 6-2; 7-2; 8-4; 9-2. Deci d max = 5, adica nodurile 2, 5 si 8
    /// Listele de adiacenta: U ={[1;2], [1;4], [2;3], [2;4], [2;5], [3;5]}
}