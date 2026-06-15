#include <stdio.h>
#include <iostream>

using namespace std;

struct fractie { unsigned int numarator, numitor; };
struct vector { int poz, val; };

/// 22-mai-2023-19-15
unsigned int cmmdc(int a, int b);
void FractiiMax(); /// foloseste cmmdc() si struct fractie
void normalizare(); /// foloseste struct vector @TODO

/*********************************************************************************************************************************/

int main() {
    normalizare();
    
    return 0;
}

/*********************************************************************************************************************************/

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


