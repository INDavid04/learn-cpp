/******************************************************************************

Problema 31

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură un număr natural nenul n apoi n caractere. Să se determine numărul de consoane 
litere mici din şir. Dacă şirul nu conţine consoane litere mici, se va afişa mesajul NU. 

Exemplu:
Date de intrare	                    Date de iesire
Ana are mere, 2 pere si 6 gutui	    8	
ia ai	                            NU	

--------------------------------------------------------------------------------

Problema 32

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură un şir de caractere având maxim 100 de caractere. Să se elimine cifrele din şir.
Dacă şirul nu conţine cifre, se va afişa mesajul NU.
Exemplu:
Date de intrare	                        Date de ieşire	
Suprafata lotului 2 este de 2341 m.p.	Suprafata lotului este de m.p.	
Atestat la informatica	                NU	

--------------------------------------------------------------------------------

Problema 33

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură, pentru n elevi (n<30), numele şi media (număr real). Să se construiască în memorie, 
folosind date structurate, un vector care să reţină datele citite şi să se afişeze elevii în ordinea descrescătoare a mediilor.
Exemple:
Date de intrare	Date de ieşire
5
Popescu 8.47
Ionescu 6.21
Vasile 7.05
Matei 9.21
Popa 8.33	Matei 9.21
Popescu 8.47
Popa 8.33
Vasile 7.05
Ionescu 6.21	
2
Andrei 8.21
Mihai 8.65	Mihai 8.65
Andrei 8.21	

--------------------------------------------------------------------------------

Problema 34

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură un număr natural n, apoi n numere reale. Să se afişeze pe ecran cel mai mare număr din șirul citit.
Exemple:
Date de intrare     Date de ieşire
3 
-7 -21 -2 	        -2	
4
-23 -675 21 8	    21	

--------------------------------------------------------------------------------

Problema 35

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură un număr natural n apoi n numere întregi. 
Să se numere câte dintre ele au exat 3 cifre de 0 la final.
Exemplu:
Date de intrare	        Date de ieşire
3
12 1000 10000	        1	
5
1 10 1000000 2000 3 	1	

--------------------------------------------------------------------------------

Problema 36

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură un număr natural n (3<n<500). Să se afişeze toate numerele 
mai mici sau egale cu n, care au exact 3 divizori.
Exemplu:
Date de intrare	    Date de ieşire	    Explicaţii
70	                4 9 25 49	        Pătrate perfecte de numere prime

--------------------------------------------------------------------------------

Problema 37

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc 2 numere naturale nenule x şi y de la tastatură. Folosind o funcţie recursivă.
Să se determine cel mai mare divizor comun al celor 2 numere naturale.
Exemplu:
Date de intrare	    Date de ieşire
48  
36	                12	
13
17              	1	

--------------------------------------------------------------------------------

Problema 38

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte un număr natural nenul p de la tastatură. Folosind o funcţie recursivă.
Să se calculeze suma cifrelor lui p. 
Exemplu:
Date de intrare	    Date de ieşire	    Explicaţii
3815	            17	                3+8+1+5=17

--------------------------------------------------------------------------------

Problema 39

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte un număr natural nenul n de la tastatură. Folosind o funcţie recursivă.
Să se calculeze produsul cifrelor lui n.
Exemplu:
Date de intrare	Date de ieşire	Explicaţii
3815	120	3*8*1*5=120

--------------------------------------------------------------------------------

Problema 40

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură un număr natural nenul par n (4<=n<=30000). 
Să se afişeze două numere naturale prime a căror sumă este numărul n.
Date de intrare	    Date de ieşire	    Obs.
100	3 97	        100                 100=3+97
18	7 11	        18                  18=7+11

--------------------------------------------------------------------------------

Problema 41

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte numărul natural nenul n de la tastatură. Să se afişeze primii n termeni ai şirului lui Fibonacci.
Şirul lui Fibonacci este definit astfel:
fn = |  1, n=1
     |  1, n=2
     |  fn-2 + fn-1, unde n > 2

Exemplu:
Date de intrare	    Date de ieşire	
10              	0 1 1 2 3 5 8 13 21 34	

--------------------------------------------------------------------------------

Problema 42

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n şi cele n elementele ale unui vector X care 
memorează numere naturale. Să se afişeze numărul valorilor prime din vector. 
Dacă nu există numere prime, se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare	            Date de ieşire	 Explicaţii
8
16 5 90 434 55 71 31 33	    3	            Numerele prime din vector sunt 5, 71, 31
5
42 10 300 555               16	             NU EXISTA

--------------------------------------------------------------------------------

Problema 43

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n (n>=2) şi cele n elementele ale unui vector X care 
memorează numere reale. Să se înlocuiască fiecare element  cu media aritmetică a celorlalte n–1 elemente.
Exemple:
Date de intrare	    Date de ieşire
3
7 14 20	
                    17 13.5 10.5
2
18 300 	
                    300 18

--------------------------------------------------------------------------------

Problema 44

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n şi cele n elementele ale unui vector X care memorează 
numere reale. Să se elimine elementele nule din vector şi să se afişeze vectorul astfel obţinut. 
Dacă nu există elemente nule în vector, se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare	    Date de iesire
7
0 0 27 14 0 8 0	    27 14 8	
3
23 765 400	        NU EXISTA

--------------------------------------------------------------------------------

Problema 45

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n. Folosind Backtracking, să se scrie pe ecran toate submulţimile cu 2 elemente ale mulţimii {1,2,…n}, N>3
Exemple:
Date de intrare	Date de iesire	Obs.
3
	
1,2
1,3
2,3
	
4	
1,2
1,3
1,4
2,3
2,4
3,4

*******************************************************************************/
#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int n, p, a, b, k, st[25];

void problema31() {
    int n;
    cin >> n;
    
    char c[100];
    int nrConsMici = 0;
    for (int i = 0; i < n; i++) {
        cin >> c[i];

        if (c[i] >= 'b' && c[i] <= 'z' && !(strchr("AEIOUaeiou", c[i]))) {
            nrConsMici++;
        }
    }
    
    if (nrConsMici != 0) {
        cout << "\nNumarul de consoane mici este: " << nrConsMici;
    } else {
        cout << "\nTextul introdus nu contine consoane litere mici";
    }
}

void problema32() {
    char c[100];
    int n = 0, i = 0;
    
    while (c[i] != 0) {
        cin >> c[i];
        n++;
        i++;
    }
    
    cout << "\nSirul este: ";
    for (int i = 0; i < n; i++) {
        cout << c[i];
    }
}

void problema33() {
    
}

void problema34() {
    int n, v[10], max = -9999999; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[10];
        
        if (v[i] > max) {
            max = v[i];
        }
    }
    
    cout << max;
}

void problema35() {
    int n, v[10];
    cin >> n;
    
    int zerouri = 0;
    for  (int i = 0; i < n; i++) {
        cin >> v[i];
        
        if (v[i] % 1000 == 0 && v[i] > 999) {
            zerouri++;
        }
    }
    
    if (zerouri != 0) {
        cout << "\nNU";
    } else {
        cout << "\n" << zerouri;
    }
}

int nrDiv(int n) {
    int i, nr = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            nr++;
        }
    }
    
    return nr;
}
void problema36() {
    /// Pentru 70 afiseaza 4 9 25 49 (patratele perfecte a numerelor prime)
    
    int n, i;
    cin >> n;
    
    for (i = 4; i <= n; i++) {
        if(nrDiv(i) == 3) {
            cout << i << " ";
        }
    }
}

int cmmdc(int a, int b) {
    if (a == b) {
        return a;
    } else if (a > b) {
        return cmmdc(a-b, b);
    } else {
        return cmmdc(a, b-a);
    }
}
void problema37() {
    cin >> a >> b;
    
    if (a > 0 && b > 0) {
        cout << "\ncmmdc: " << cmmdc(a, b);
    } else {
        cout <<"\nEroare! Incercati cu doua valori pozitive";
    }
}

int suma (int p) {
    if (p < 10) {
        return p;
    } else {
        return p % 10 + suma(p/10);
    }
}
void problema38() {
    cin >> p;
    cout << suma(p);
}

void problema39() {
    /// Nota: asemanatoare problemei 38
}

int prim(int n) {
    /// Functia returneaza 1 daca n este prim si 0 in caz contrar
    int ok = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            ok = 0;
        }
    }
    return ok;
}
void problema40() {
    int n;
    do {
        cout << "\nn = "; cin >> n;
    } while (n >= 4 && n <= 30000);
    
    for (int i = 4; i <=n; i++) {
        if (prim(i)) {
            for (int j = 4; j <= n; j++) {
                if(prim(j)) {
                    if (i + j == n) {
                        cout << "\n" << i << " " << j;
                    }
                }
            }
        }
    }
}

long fib(int poz) {
    if(poz==1 || poz == 2) {
        return 1;
    } else {
        return fib(poz-1) + fib(poz-2);
    }
}
void problema41() {
    cin >> n; /// Daca se cerea al n-lea: cout << fib(n);
    
    for (int i = 1; i <= n; i++) {
        cout << "\n" << fib(i) << " ";
    }
}

/// Folosim functia prim de pe linia 343
void problema42() {
    int v[100], nr = 0, n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (prim(v[i])) {
            nr++;
        }
    }
    
    cout << nr;
}

void problema43() {
    float v[10], med[10], sum;
    int n;
    
    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j <= n; j++) {
            if (j != i) {
                sum += v[j];
            }
        }
    }
}

void problema44() {
    int n;
    cin >> n;
    
    int j = 0;
    float v[100], nenul[100];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        
        if (v[i] != 0) {
            j++;
            nenul[j] = v[i];
        }
    }
    
    for (int i = 1; i <= j; i++) {
        cout << nenul[i] << " ";
    }
    
}

void initializari() {
    for (int i = 1; i <= n; i++) {
        st[i] = 0;
    }
}
void tipar() {
    for (int j = 1; j <= p; j++) {
        cin >> st[js];
    }
}
int valid(int p) {
    /// Luam elementele solutiei in ordinde strict crescatoare
    int i;
    if (p> 1 && st[p] <= st[p-1]) {
        return 0;
    } else {
        return 1;
    }
}
void bktr(int p) {
    int pval;
    for (pval = 1; pval <= n; pval++) {
        st[p] = pval;
        if (valid(p)) {
            
        }
}
void problema45() {
    
}

/// Test
void problema22() {
    int n, m[10][10], l1, l2;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    
    cin >> l1 >> l2;
    
    int aux;
    for (int i = 0; i < n; i++) {
        aux = m[l1 - 1][i];
        m[l1 - 1][i] = m[l2 - 1][i];
        m[l2 - 1][i] = aux;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}
void problema23() {
    int n, i, j, m[10][10], liniePara, afisat = 0;
    
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    
    cout << "\nLinii pare:" << " ";
    for (i = 0; i < n; i++) {
        liniePara = 1; /// Resetam valoarea pentru fiecare linie i
        
        for (j = 0; j < n; j++) {
            if (m[i][j] % 2 == 1) {
                liniePara = 0; /// Am gasit cel putin un element impar
            }
        }
        
        if (liniePara == 1) {
            cout << i + 1 << " "; /// Numaratoare incepe de la 0
            afisat = 1;
        } 
    }
    
    if (afisat == 0) {
        cout << "\nNU EXISTA";
    }
    
}

int main() {
    problema44();

    return 0;
}