#include <iostream>

using namespace std;

int main() {
    int v[100], n, ok, i, aux;

    cout << "Dati numarul de elemete ale vectorului: ";
    cin >> n;

    for (i=1; i<=n; i++){
        cout << "\nv[" << i << "]= ";
        cin >> v[i];
    }

    do {
        ok=1;
        
        for (i=1; i<=n-1;i++){
            if (v[i]>v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ok=0;
            }
        }
    } while (ok==0);

    cout << "\Vectorul sortat este: ";

    for (i=1; i<=n; i++){
        cout << v[i] << " ";
    }

    return 0;
}