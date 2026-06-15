#include <stdio.h>
using namespace std;

/*

int x[20], n, i;

int div_imp(int p, int q){
    int mij, max1, max2;
    if(p==q) return x[p];
        else {
            mij = (p+q)/2;
            max1 = div_imp(p, mij);
            max2 = div_imp(mij+1, q);

            if(max1 > max2) {
                return max1;
            } else {
                return max2;
            }
        }
}

int main() {
    cout << "\nn = "; cin >> n;

    for(i=1; i<=n; i++){
        cout << "\nx[" << i << "] = ";
        cin >> x[i];
    }

    cout << "\nValoarea maxima este: " << div_imp(1, n);

    return 0;
}

*/ /// Maximul unui sir

/*

char x, y, z;
int n;

void hanoi (int n, char x, char y, char z){
    /// Hanoi (n, x, y, z) = Hanoi (n-1, x, z, y) = Hanoi (n-1, z, y, x)
    /// Muta n discuri de pe tija x pe tija y folosind z
    
    if (n==1) {
        cout << "\n" << x << y;
    } else {
        hanoi (n-1, x, z, y);
        cout << "\n" << x << y;
        hanoi(n-1, z, y, x);
    }

}

int main() {
    cout << "\nNumarul de discuri este: "; cin >> n;
    hanoi (n, 'x', 'y', 'z');

    return 0;
}


*/ /// Turnurile din hanoi

/*

int v[100], n, i;

int cmmdc (int v[], int st, int dr) {
    int mij, a, b;
    
    if (st==dr) {
        return v[st];
    } else {
        mij = (st+dr)/2;
        a = cmmdc(v, st, mij); // se apeleaza recursiv functia sa determine CMMDC
        b = cmmdc(v, mij+1, dr);
        
        if (a==b) {
            return a;
        } else {
            while (a!=b) {
                if (a>b) {
                    a -= b;
                } else {
                    b -= a;
                }
                
                return a;
            }
        }
    }
}

int main () {
    cout << "\nn: "; cin >> n;
    
    for (i=1; i<=n; i++) {
        cout << "\nv[" << i << "] = "; cin >> v[i]; 
    }
    
    cout << "\ncmmdc: " <, cmmdc(v, 1, n);
    
    return 0;
}

*/ /// CMMDC

/*

int x[20], n, a, i;

int div_imp (int p, int q) {
    int mij;
    
    if (p>q) {
        return 0;
    } else {
        mij = (p+q)/2;
        
        if (x[mij] == a) {
            return 1;
        } else if (a < x[mij]) {
            return div_imp(p, mij-1);
        } else {
            return div_imp(mij+1, q);
        }
    }
}

int main() {
    cout << "\nn: "; cin >> n;
    cout << "\nx[1] = "; cin >> x[1];
    
    for (i=2; i<=n; i++) {
        do {
            cout << "\nx[" << i << "] = "; cin >> x[i];
        } while (x[i] <= x[i-1]);
    }
    
    cout << "\na: "; cin >> a;
    
    if (div_imp(1, n) {
        cout << "\nValoarea cautata exista!";
    } else {
        cout << "\nValoarea nu exista!";
    }
}

*/ /// Cautarea binara

/*

int x[50], n, i;

int partionare (int st, int dr) {
    int aux, i=st, j=dr, di=0, dj=1;
    
    while (i<j) {
        if (x[i] > x[j]) {
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
            aux = di;
            di = dj;
            dj = aux;
        }
        
        i += di;
        j -= dj;
    }
    
    return j;
}

void quick (int st, int dr) {
    int p;
    
    if (st < dr) {
        p = partionare (st, dr);
        quick(st, p-1);
        quick(p+1, dr);
    }
}

int main () {
    cout << "\nn: "; cin >> n;
    
    for (i=1; i<=n; i++) {
        cout << "\nx[" << i << "] = "; cin >> x[i];
    }
    
    quick(1, n);
    
    cout << "\nVectorul sortat este: ";
    for (i=1; i<=n; i++) {
        cout << x[i] << " ";
    }
    
    return 0;
}

*/ /// Quick-sort

/*

int v[100], n, i;

void interclasare (int v[], int p, int mij, int q) {
    int a[20], i=p, j=mij+1, k=p;
    
    while (i <= mij && j <= q) {
        if (v[i] < v[j]) {
            a[k] = v[i];
            i++;
            k++;
        } else {
            a[k] = v[j];
            j++;
            k++;
        }
    }
    
    if (i <= mij) {
        while (i <= mij) {
            a[k] = v[i];
            i++;
            k++;
        }
    }
    
    if (j <= mij) {
        while (j <= mij) {
            a[k] = v[j];
            j++;
            k++;
        }
    }
    
    for (i=p; i<=k-1; i++) { /// k-1 pt ca el creste o data in plus anterior
        v[i] = a[i];
    }
}

void merge_sort (int v[], int p, int q) {
    int mij;
    if (p<q) {
        mij = (p+q)/2;
        merge_sort(v, p, mij);
        merge_sort(v, mij+1, q);
        interclasare(v, p, mij, q);
    }
}

int main () {
    cout << "\nn: "; cin >> n;
    for (i=1; i<=n; i++) {
        cout << "\nv[" << i << "] = "; cin >> v[i];
    }
    
    merge_sort(v, 1, n);
    
    cout << "\nVectorul sortat este: ";
    for (i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}

*/ /// Merge-sort

int main()
{

    return 0;
}