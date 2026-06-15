/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

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

int main() {
    

    return 0;
}