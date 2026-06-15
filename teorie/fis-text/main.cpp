/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <fstream> /// pentru a lucra cu fisiere

using namespace std;

/// photo-link: https://ibb.co/HHmLdLb

void cmmdc_cmmmc() {
    ifstream fin("numere.txt"); /// deschide pentru citire
    ofstream fout("numere1.txt"); /// deschide pentru afisare

    int n, a, b;
    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> a >> b;

        int copieA = a;
        int copieB = b;

        while (a != b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }

        fout << a << " " << copieA*copieB/a;
    }
}

void divizor() {
    ifstream fin("numere.txt");
    int x, m1, m2, m3;

    m1 = m2 = m3 = 1000000000;

    while (fin >> x) {
        if (x % 3 == 0) {
            if (x < m1){
                m3 = m2; m2 = m1; m1 = x;
            } else if (x < m2) {
                m3 = m2; m2 = x;
            } else if (x < m3) {
                m3 = x;
            }
        }
    }
    cout << m1 << " " << m2 << " " << m3;
}

void putere() {
    ifstream fin("numere.txt");
    ofstream fout("out.txt");
    int x, copie;

    while (fin >> x) {
        copie = x;
        while (x % 2 == 0) {
            x /= 2;
        }

        if (x == 1) {
            fout << copie << " ";
        }
    }
}

void sumaCifreEsteCatul() {
    ofstream fout("bac.txt");
    int a, b, i, ci, si;

    cin >> a >> b;

    for (i = a; i <= b; i++) {
        ci = i; si = 0;

        while (ci) {
            si = si + ci%10;
            ci /= 10;
        }

        if (i%si == i/si) {
            fout << i << " ";
        }
    }
}

void DivizibilCinciSiPozitie() {
    /// Afiseaza  separat printr-un spatiu ultima valoare multiplu de 5 si pozitia sa.
    
    ifstream fin("numere.txt");
    int x, u, i = 0, nr;
    
    while (fin >> x) {
        i++;
        if (x % 5 == 0) {
            nr = i;
            u = x;
        }
    }
    cout << u << " " << nr;
}

void stive() {
    /// Nr maxim de cutii suprapuse intr-o stiva este n, intre 1 si 15, iar intre 2 stive cu acelasi numar de cutii sa existe cel putin una cu mai multe cutii decat oricare dintre cele 2. Consideram ca o stiva poate fi formata dintr-o singura cutie. Scrieti un program care citeste din fisierul bac.txt o valoare n, reprezentand numarul maxim de stive care se pot construi respectand regulile dare si numarul de citoo ce ar putea fi aranjate astfel. Ex: n=3, nr max de stive=7, nr total de cutii=11

    /// ifstream fin("bac.txt");
    int n, i, nrstive, nrcutii;
    
    cin >> n;
    nrstive = 1; nrcutii = 1;
    
    for (i = 2; i <= n; i++) {
        nrstive = 2*nrstive + 1;
        nrcutii = 2*nrcutii + n;
    } 
}

int main() {
    stive();

    return 0;
}
