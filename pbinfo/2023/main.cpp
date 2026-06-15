/* @TODO: Subiectul 2: 2 (struct); 3 (siruri de caractere)

https://www.pbinfo.ro/resurse/9dc152/examene/2023/E_d_Informatica_2023_sp_MI_C_var_model.pdf

Subiectul 1 {
1.  x%20==x/23 (doua valori penru int x) 
    a.  20%20==20/23 && 40%20==40/23 (true && false)
    b)  20%20==20/23 && 41%20==41/23 (true && true)
    c.  40%20==40/23 && 62%20==62/23 (false && true)
    d.  60%20==60/23 && 83%20==83/23 (false && true)

2.  void f() { ... } trebuie sa existe doua valori cu 23 in sirul generat de f()
    a.  f(20, 23) = 21 f(21, 21) = 21 21 21
        f(21, 21) = 21 f(22, 20) = 21 21
        f(22, 20) = 21 
    b.  f(20, 26) = 23 f(21, 24) = 23 22 22
        f(21, 24) = 22 f(22, 22) = 22 22
        f(22, 22) = 22 
    c.  f(21, 25) = 21 f(22, 23) = 21 22 20
        f(22, 23) = 22 f(22, 19) = 22 20
        f(22, 19) = 20
    d)  f(21, 27) = 24 f(22, 25) = 24 23 23
        f(22, 25) = 23 f(23, 23) = 23 23
        f(23, 23) = 23 

3.  Ultim: f || g trebe solutia 6 (castane-c; mousse-m; frisca-f; serbet-s; ganache-g)
        c m f
        c m g
        c s f
        c s g
        m c f
        m c g
    a)  mousse, castane, ganache

4.  c) 4 varfuri are comp tare conexa din care face parte varful 3

5.  d) 5 dar habar n-am de ce:))
}

Subiectul 2 {
1.  a)  Se afiseaza 90
    De la p=11 pana la q=25 verificam daca un nr se imparte doar la unul dintre m=4, n=3
    Daca x se imparte la cel putin o valoare, suma creste cu x (trece doar prin primul if)
    Daca x se imparte la ambele valori, suma creste apoi scade cu x (trece prin cele doua if-uri)
    Asadar, algoritmul calculeaza suma numerelor din intervalul [p,q] care se impart doar la m sau doar la n
    m   n   p   q   s   x   
    4   3   11  25  0   11  (11%4=3 || 11%3=2)   false || false sau false && false  => false din ambele
    4   3   11  25  0   12  /// 12 se imparte si la 4 si la 3, deci s++ apoi s--
    4   3   11  25  0   13  /// 13 nu se imparte la nicio valoare
    4   3   11  25  0   14  /// 14 nu se imparte lq nicio valoare
    4   3   11  25  15  15  /// 15 se imparte doar la 3
    4   3   11  25  31  16  /// 16 se imparte doar la 4
    4   3   11  25  31  17
    4   3   11  25  31  18  /// 31 + 18 = 49
    4   3   11  25  49  19
    4   3   11  25  69  20  /// 49 + 20 = 69
    4   3   11  25  90  21  /// 69 + 21 = 90
    4   3   11  25  90  22
    4   3   11  25  90  23
    4   3   11  25  90  24 /// se imparte si la 4 si la 3
    4   3   11  25  90  25
    
    b)  m=10 n=15 p=2. Doua valori pentru q () pentru care se afiseaza 250
    10*1    10*2   (10*3)    10*4    10*5    (10*6)    10*7    10*8    (10*9)    10*10
    15*1   (15*2)   15*3    (15*4)   15*5    (15*6)    15*7   (15*8)    15*9    (15*10)
    Deci pana la q = 105, s = 10+20+40+50+70+80+100+15+45+75+105 = 650 /// prea mare
    q = 75, s = 10+20+40+50+70+15+45+75 = 385 /// inca prea mare
    q = 45, s = 10+20+40+15+45 = 130 /// prea mic
    q = 70, s = 10+20+40+50+70+15+45 = 250 /// perfect
    Asadar, q poate lua valorile de la 70 la 74, deci raspunsul este: q = 70 sau q = 71
    
    c)  Scrieti programul C++ corespunzator algoritmului
    unsigned int m, n, p, q, x, s = 0;
    cin >> m >> n >> p >> q;
    for (x = p; x <= q; x++) {
        if (x % m == 0 || x % n == 0) {
            s++;
        }
        if (x % m == 0 && x % n == 0) {
            s--;
        }
    }
    cout << s;
    
    d)  Inlocuiti structura pentru ... executa cu o structura repetitiva cu test initial
    citeste m, n, p, q
    s <- 0
    cat timp x <= p executa
        daca x % m = 0 sau x % n = 0 atunci
            s <- s + x
        daca x % m = 0 si x % n = 0
            s <- s - x
        x <- x + 1
    scrie s
    
2.  struct echipa { 
    char nume[50];
    int rezultat;
    };
    for (int i = 0; i < 3; i++) {
        cout << "\nNumele si rezultatul: ";
        cin >> c[i].nume >> c[i].rezultat;
    }
    if (c[0].rezultat > c[1].rezultat) {
        if (c[1].rezultat > c[2].rezultat) {
            cout << c[0].nume << " " << c[1].nume << " " << c[2].nume;
        } else if (c[0].rezultat > c[2].rezultat) {
            cout << c[0].nume << " " << c[2].nume << " " << c[1].nume;
        } else {
            cout << c[2].nume << " " << c[0].nume << " " << c[1].nume;
        }
    } else {
        if (c[0].rezultat > c[2].rezultat) {
            cout << c[1].nume << " " << c[0].nume << " " << c[2].nume;
        } else if (c[1].rezultat > c[2].rezultat) {
            cout << c[1].nume << " " << c[2].nume << " " << c[0].nume;
        } else {
            cout << c[2].nume << " " << c[1].nume << " " << c[0].nume;
        }
    }
    
3.  s1 = "plantau fistic"
    p = " fistic" - "plantau fistic" = 7
    s2 = s1+p+1 = s1+8 = fistic
    s1+p-1 = s2+2 = stic -> s1 = plantasticu fistic
    s2+1 = s1+2 = antasticu fistic -> fplantasticu fisticistic
}

Subiectul 3 {
1.
bool DoiTrei(int n, bool deplin = 1) {
    /// n nr nat. afiseaza 1 daca toate cifrele sunt 2 sau 3. afiseaza 0 in caz contrar
    if (n == 0) {
        deplin = 0;
    }
    while (n > 0) {
        if (n % 10 == 2 || n % 10 == 3) {
            n /= 10;
        } else {
            deplin = 0;
            n = 0;
        }
    }
    return deplin;
}

2.
void CaruselFaraTobogan() {
    /// Programul determină zonele destinate plasării câte unui carusel(3), care NU au nicio latură comună cu o zonă cu tobogan(0)
    int m[101][101], n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    /// Bordam tabloul cu 5 pentru ca elementele cu 2 sau 3 vecini sa aiba 4
    for (int i = 0; i <= n + 1; i++) {
        m[i][0] = 8;
        m[i][n + 1] = 8;
    }
    for (int j = 0; j <= n + 1; j++) {
        m[0][j] = 8;
        m[n + 1][j] = 8;
    }
    /// Verificam vecinii fiecarui element al tabloului initial
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (m[i][j] == 3 && m[i][j-1] != 0 && m[i+1][j] != 0 && m[i][j+1] != 0 && m[i-1][j] != 0) {
                cout << i << " ";
            }
        }
    }
}

3.  fstream fin ("bac.txt");

}
    
*/

#include <iostream>
#include <stdio.h>
#include <cstring>  /// siruri de caractere
#include <cctype>   /// functii bonus siruri de caractere
#include <fstream>  /// fisiere text

using namespace std;

void pOrdonat() { 
    /// De ex: p-ordonata: (8, 8) DA; (8, 2) DA; (8, 7) DA; (8, 9) NU; Prima linie: n - natural nenul; A doua linie: sirul 2*n.
    /// Daca cel mai mic nr par(impar) din prima jumatate > cel mai mare nr impar(par) din cea de a doua => DA else: NU
    int n, sir[1000000], min1 = 1000001, min2 = 1000001, max1 = -1, max2 = -1; /// notam la min: 1 - par; 2 - impar
    cin >> n; 
    for (int i = 0; i < 2*n; i++) {
        cin >> sir[i];
    }
    /// Gasim minimul par si impar al primei jumatati, respectiv maximul par si impar al celei de a doua jumatati
    for (int i = 0; i < n; i++) {
        if (sir[i] % 2 != 0 && sir[i] < min1) {
            min1 = sir[i];
        }
        if (sir[i] % 2 == 0 && sir[i] < min2) {
            min2 = sir[i];
        }
        if (sir[2*n-i] % 2 != 0 && sir[2*n-i] > max1) {
            max1 = sir[2*n-i];
        }
        if (sir[2*n-i] % 2 == 0 && sir[2*n-i] > max2) {
            max2 = sir[2*n-i];
        }
    }
    /// Verificam conditiile de mai sus
    if (min1 > max2 && min2 > max1) {
        cout << "\nDA";
    } else {
        cout << "\nNU";
    }
}

int main() {
    pOrdonat();
    
    return 0;
}

