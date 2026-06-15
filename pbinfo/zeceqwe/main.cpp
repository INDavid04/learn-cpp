#include <iostream>

using namespace std;

struct fractie { unsigned int numarator, numitor; };
struct vector { int poz, val; };

/// 22-mai-2023-19-15 / Structuri
unsigned int cmmdc(int a, int b);
void FractiiMax(); /// foloseste cmmdc() si struct fractie
void normalizare(); /// foloseste struct vector @TODO

/// 31-mai-2023-19-27 / Functii
int Partition(int v[], int start, int end);
void QuickSort(int v[], int start, int end);
/// 26-mai-2023-18-58
int FSumVecMin(int v[], int n, int m); /// in: n=6, x= (12, 7, 6, 3, 8, 5), m=4 ... out: 21 adica 3+5+6+7

/******************************************************************************/

int main() {
    cout<<"Hello World";

    return 0;
}


/******************************************************************************/

int FSumVecMin(int v[], int n, int m) {
    int i, suma = 0;
    /// Quicksort + suma primelor m elemente din vector
    QuickSort(v, 0, n - 1);
    for (i = 0; i < m; i++) {
        suma += v[i];
    }
    
    return suma;
}
void QuickSort(int v[], int start, int end) {
    int pivindex;
    if (start < end) {
        pivindex = Partition(v, start, end);
        QuickSort(v, start, pivindex - 1);
        QuickSort(v, pivindex + 1, end);
    }
}
int Partition(int v[], int start, int end) {
    int pivot = v[end];
    int pivindex = start;
    int i, aux;
    for (i = start; i < end; i++) {
        if (v[i] <= pivot) {
            aux = v[i];
            v[i] = v[pivindex];
            v[pivindex] = aux;
            pivindex++;
        }
    }
    aux = v[end];
    v[end] = v[pivindex];
    v[pivindex] = aux;
    
    return pivindex;
}

/******************************************************************************/

void normalizare() {
    int n, i, j;
    cin >> n;
    vector a[n], b[n], copie, min;
    for (i = 0; i < n; i++) {
        a[i].poz = i;
        cin >> a[i].val;
    }
    for (i = 0; i < n; i++) {
        min = a[0];
        for (j = 1; j < n - i; j++) {
            if (a[j].val < min.val) {
                min = a[j];
            }
        }
        copie = a[n - i];
        a[n - i] = a[min.poz];
        a[min.poz] = copie;
        
    }
    for (i = 0; i < n; i++) {
        cout << min.val << " poz " << min.poz << endl;
    }
}

void FractiiMax() {
    fractie unu, doi;
    
    cin >> unu.numarator >> unu.numitor >> doi.numarator >> doi.numitor;
    
    if ((double)unu.numarator / (double)unu.numitor > (double)doi.numarator / (double)doi.numitor) {
        cout << unu.numarator / cmmdc(unu.numarator, unu.numitor) << " " << unu.numitor / cmmdc(unu.numarator, unu.numitor);
    } else {
        cout << doi.numarator / cmmdc(doi.numarator, doi.numitor) << " " << doi.numitor / cmmdc(doi.numarator, doi.numitor);
    }
}
unsigned int cmmdc(int a, int b) {
    if (b != 0) {
        return cmmdc(b, a % b);
    }
    return a;
}