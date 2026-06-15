#include <iostream>

using namespace std;

void MaximDinSirMaiMicEgalCuX();
void EliminMinimElementeIdenticePePozitiiConsecutive();
void VectorPrinInserare2019DupaPar();
void MaximDinCifreNumar();
/// 30-mai-2023-13-16-dupa-festivitatea-12-clase
int Partition(int v[], int start, int end);
void QuickSort(int v[], int start, int end);
void MergeSort(int v[], int st, int dr, int rez[]);

/******************************************************************************/

int main() {
    int n, i;
    cin >> n;
    int v[n], rez[n];
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    MergeSort(v, 0, n - 1, rez);
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}

/******************************************************************************/

void MergeSort(int v[], int st, int dr, int rez[]) {
    if (st >= dr) {
        return;
    } else {
        int mij, ind, ind1, ind2;
        mij = (st + dr) / 2;
        MergeSort(v, st, mij, rez);
        MergeSort(v, mij + 1, dr, rez);
        ind1 = st;
        ind2 = mij + 1;
        ind = 0;
        while (ind1 <= mij && ind2 <= dr) {
            if (v[ind1] <= v[ind2]) {
                rez[++ind] = v[ind1++];
            } else {
                rez[++ind] = v[ind2++];
            }
        }
        while (ind1 <= mij) {
            rez[++ind] = v[ind1++];
        }
        while (ind2 <= dr) {
            rez[++ind] = v[ind2++];
        }
        for (int i = st; i <= dr; ++i) {
            v[i] = rez[i - st + 1];
        }
    }
}

void QuickSort(int v[], int start, int end){
    int pivindex;
    if (start < end) {
        pivindex = Partition(v, start, end);
        QuickSort(v, start, pivindex - 1);
        QuickSort(v, pivindex + 1, end);
    }
}
int Partition(int v[], int start, int end) {
    int pivot = v[end];
    int partinex = start;
    int aux, i;
    for (i = start; i < end; i++) {
        if (v[i] <= pivot) {
            aux = v[i];
            v[i] = v[partinex];
            v[partinex] = aux;
            partinex++;
        }
    }
    /// Punem pivotul astfel incat elementele mai mici vin in stanga si cele mai mari sau egale in dreapta
    aux = v[end];
    v[end] = v[partinex];
    v[partinex] = aux;
    
    return partinex;
}

void MaximDinCifreNumar() {
    /*  Citim N nr nat cu cel mult 10 cifre. Programul determina si afiseaza cel mai mare numar care se poate obtine utilizand: 
        a) Toate cifrele lui N; b) Toate cifrele distincte ale lui N (N=39856, nr1=98653, nr2=98653, N=59397, nr1=99753, nr2=9753)
    */
    
    int n, frecventa[100000] = {0};
    cin >> n;
    
    do {
        frecventa[n%10]++;
        n /= 10;
    } while (n);
    
    int a, b;
    for (int i = 9; i >= 0; i++) {
        if (frecventa[i]) {
            for (int j = 1; j <= frecventa[i]; j++) {
                a = a*10 + i;
            }
            b = b*10 + i;
        }
    }
    
    cout << a << " si " << b;
}

void VectorPrinInserare2019DupaPar() {
    int n, v[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
        if (v[i] % 2 == 0) {
            cout << 2019 << " ";
        }
    }
}

void EliminMinimElementeIdenticePePozitiiConsecutive() {
    int n, v[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    cout << v[0];
    for (int i = 0; i < n-1; i++) {
        if (v[i] == v[i+1]) {
            cout << v[i] << " ";
        } else {
            cout << v[i+1] << " ";
        }
    }
}

void MaximDinSirMaiMicEgalCuX() {
    /// cel mai mare nr din sirul ordonat <= x. altfel se afiseaza nu exista
    int n, v[100], x;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;
    
    /// Algoritmul de cautare binara
    int nr, mij, ls = 0, ld = n-1, ok = 0;
    while (ls <= ls) {
        mij = (ls + ld)/2;
        if (v[mij] <= x) {
            ok = 1;
            nr = v[mij];
            ls = mij + 1;
        } else {
            ld = mij - 1;
        }
    }
    if (ok) {
        cout << nr;
    } else {
        cout << "\nNu exista";
    }
}

