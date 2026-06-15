#include <iostream>

using namespace std;

/// 31-mai-2023-19-27
int Partition(int v[], int start, int end);
void QuickSort(int v[], int start, int end);
/// 26-mai-2023-18-58
int FSumVecMin(int v[], int n, int m); /// in: n=6, x= (12, 7, 6, 3, 8, 5), m=4 ... out: 21 adica 3+5+6+7

/******************************************************************************/

int main() {
    int numar;
    cin >> numar;
    int vector[numar], i, primele;
    for (i = 0; i < numar; i++) {
        cin >> vector[i];
    }
    cin >> primele;
    cout << FSumVecMin(vector, numar, primele);

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
