#include <stdio.h>
using namespace std;

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

*/ /// Maximul unui sir cu DivImp

int main()
{

    return 0;
}



