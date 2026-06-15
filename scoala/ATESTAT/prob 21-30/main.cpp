/******************************************************************************

Problema 21

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente reale într-o matrice pătratică. 
Să se afişeze media aritmetică a elementelor strict pozitive. Dacă nu există elemente strict pozitive 
în matrice se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare     Date de ieşire	        Explicaţii
3
5  9  7
4 -9 -9
0 -3 -7	            ma=6.25	(5+9+7+4) / 4
4
-4 -8 -6 -7 
-5 -6 -4 -1
-4 -2 -1 -5
-5 -4 -6 -2	        NU EXISTA	            Matricea nu conţine numere strict pozitive

--------------------------------------------------------------------------------

Problema 22

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente naturale într-o matrice pătratică. 
Să se schimbe între ele, două linii l1 si l2, date de la tastatură. (0<l1, l2<=n) şi să se afişeze 
matricea astfel obţinută.
Exemple:
Date de intrare	        Date de ieşire
3
5 9 7
4 9 9
2 3 7

1
3	                    2 3 7
                        4 9 9 
                        5 9 7
	
4 8 6 7 
5 6 4 0
0 2 1 0
5 4 6 2

2
4	                    4 8 6 7 
                        5 4 6 2
                        0 2 1 0
                        5 6 4 0
	
--------------------------------------------------------------------------------

Problema 23

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente naturale într-o matrice pătratică. 
Să se afişeze indicii liniilor care au toate elementele pare. Dacă nu există linii cu toate elementele 
pare se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare     Date de ieşire
4
5 9 8 4
2 4 6 4
8 6 2 0
5 7 9 1	            Linii pare:2 3	
3
8 9 1
1 1 1
5 6 8	            NU EXISTA	

--------------------------------------------------------------------------------

Problema 24

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente naturale într-o matrice pătratică. 
Să se afişeze indicii coloanelor care au toate elementele impare. 
Dacă nu există coloane cu toate elementele impare se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare	    Date de ieşire
4
5 9 1 3
2 4 3 5
8 6 3 7
5 7 5 1	            3 4	
3
8 9 1
1 1 1
5 6 8	            NU EXISTA	

--------------------------------------------------------------------------------

Problema 25

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente reale într-o matrice pătratică. 
Să se calculeze şi să se afişeze media aritmetică a elementelor situate pe diagonala secundară.
Exemple:
Date de intrare     Date de ieşire	    Explicaţii
3
1 2 4
6 5 4
7 8 9	            5.33	            (4+5+7)/3=5.33

--------------------------------------------------------------------------------

Problema 26

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente reale într-o matrice pătratică. 
Să se afişeze maximele de pe fiecare linie.
Exemple:
Date de intrare     Date de ieşire
4
5 9 8 4
2 4 4 4
8 6 2 0
5 7 2 8	            9 4 8 8	
3
8 9 1
1 1 1
5 6 8	            9 1 8	

--------------------------------------------------------------------------------

Problema 27

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente reale într-o matrice pătratică. 
Să se verifice dacă este simetrică faţă de diagonala principală şi să se afişeze un mesaj corespunzător, 
ca în exemplele prezentate.
Exemple:
Date de intrare     Date de ieşire
4
2 7 9 5
7 4 3 2
9 3 2 6
5 2 6 8             simetrica	
3
2 3 1
5 9 0
9 0 3	            nu este simetrica	

12-21   13-31   14-41   23-32   24-42   34-43   (i = 1; i <= n; i++) si (j = i + 1; j <= n; j++) ij cu ji

--------------------------------------------------------------------------------

Problema 28

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente intregi într-o matrice pătratică. 
Să se numere elementele pare de pe diagonala principală.

Exemple:

Date de intrare     Date de ieşire
4
2 7 9 5
7 4 3 2
9 3 2 6
5 2 6 8             4	
3
2 3 1
5 9 0
9 0 3	            1	

--------------------------------------------------------------------------------

Problema 29

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente naturale într-o matrice pătratică. 
Să  se interschimbe diagonala principală cu diagonala secundară, apoi să se afișeze matricea.

Exemple:
Date de intrare     Date de ieşire      Schema ț
4
2 7 9 5             5 7 9 2             2[1][1] - 5[1][4]
7 4 3 2             7 3 4 2             4[2][2] - 3[2][3]
9 3 2 6             9 2 3 6             2[3][3] - 3[3][2]
5 2 6 8             8 2 6 5             8[4][4] - 5[4][1]

3
2 3 1               1 3 2
5 9 0               5 9 0
9 0 3	            3 0 9

--------------------------------------------------------------------------------

Problema 30

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citesc de la tastatură un număr natural nenul n apoi  n caractere. 
Să se determine numărul de vocale din şir. Dacă şirul nu conţine vocale, se va afişa mesajul NU. 
Exemple:
Date de intrare	                    Date de iesire      Explicaţii
ELEVUL redacteaza o scrisoare.      13	                Vocale sunt:  A, a, E, e, I, i, O, o, U, u.
1734 m.p.	                        NU	

*******************************************************************************/

#include <iostream>

using namespace std;

void problema21() {
    int n, elemente = 0;
    cin >> n;
    
    float m[10][10], MedArPoz = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
            
            if (m[i][j] > 0) {
                MedArPoz += m[i][j];
                elemente++;
            }
        }
    }
    
    if (MedArPoz == 0) {
        cout << "\nNU EXISTA";
    } else {
        cout << "\nma = " << MedArPoz/elemente;
    }
}

void problema22() {
    int n, m[10][10];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    
    int l1, l2;
    cin >> l1 >> l2;
    
    for (int i = 0; i < n; i++) {
        /// Scad 1 unitate din l1, l2 pentru ca am citit de la i = 0, in loc de 1
        int temp;
        temp = m[l1 - 1][i];
        m[l1 - 1][i] = m[l2 - 1][i];
        m[l2 - 1][i] = temp;
    }
    
    cout << "\nMatricea cu liniile date interschimbate este:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

void problema23() {
    int n, m[10][10];
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    
    int par[10], afisat = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            par[i] = 0;
            
            if (m[i][j] % 2 == 0) {
                par[i] += 0;
            }
        }
        
        if (par[i] == 0) {
            cout << "\nlinia " << i;
            
            afisat = 1;
        }
    }
    
    if (afisat == 0) {
        cout << "\nNU EXISTA";
    }
}

void problema24() {
    int n;
    cin >> n;
    
    int m[10][10];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    
    bool col_imp, afisat = false;
    for (int i = 1; i <= n;  i++) {
        for (int j = 1; j <= n; j++) {
            col_imp = true; /// Pornim de fiecare de la presupunerea coloanei pare
            
            ///cout << "\nm[" << j << "][" << i << "] = " << m[j][i]; /// clar
            if (m[j][i] % 2 == 0) {
                col_imp = false;
                j = n + 1; /// Daca gasim un element par, sarim la urmatoarea coloana
            }
        }
        
        if (col_imp == true) {
            cout << "\nColoana " << i << " este impara!";
            afisat = true;
        }
    }
    
    if (afisat == false) {
        cout << "\nNU EXISTA";
    }
    
    /*
    i = 1   j = 1   m = 5   5%2 != 0    impar = true
    i = 1   j = 2   m = 2   2%2 == 0    impar = false   j = 5   sare
    
    i = 2   j = 1   m = 9   9%2 != 0    impar = true
    i = 2   j = 2   m = 4   4%2 == 0    impar = false   j = 5   sare
    
    i = 3   j = 1   m = 1   1%2 != 0    impar = true
    i = 3   j = 2   m = 1   1%2 != 0    impar = true
    i = 3   j = 3   m = 3   3%2 != 0    impar = true
    i = 3   j = 4   m = 5   5%2 != 0    impar = true    "Coloana 3 este impara!"
    
    i = 4   j = 1   m = 3   3%2 != 0    impar = true
    i = 4   j = 2   m = 3   3%2 != 0    impar = true
    i = 4   j = 3   m = 7   7%2 != 0    impar = true
    i = 4   j = 4   m = 1   1%2 != 0    impar = true    "Coloana 4 este impara!"
    */ /// Test pentru matrice de ordin 4 cu 2 coloane impare: 3 4
}

void problema25() {
    int n;
    cin >> n;
    
    float m[10][10], MedAri = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        MedAri = MedAri + (m[i][n - i + 1])/n;
    }
    
    int DouaZecimale = MedAri * 100;
    
    cout << "\nMedia aritmetica a elementelor de pe diagonala secundara este: " << DouaZecimale/100 << "." << DouaZecimale%100;
}

void problema26() {
    int n;
    cin >> n;
    
    float m[10][10];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    
    float maxim;
    cout << "\nElementele maxime de pe fiecare linie sunt:\n";
    for (int i = 1; i <= n; i++) {
        maxim = m[i][1]; /// Luam prima linie si maximul ca fiind primul element si il comparam incepand cu al doilea
        for (int j = 2; j <= n; j++) {
            if (m[i][j] > maxim) {
                maxim = m[i][j];
            }
        }
        cout << maxim << " ";
    }
}

void problema27() {
    int n;
    cin >> n;
    
    float a[10][10];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++) {
            cin >> a[i][j];
        }
    }
    
    bool eSimetrica = true;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i][j] != a[j][i]) {
                eSimetrica = false;
            }
        }
    }
    
    if (eSimetrica == true) {
        cout << "\nsimetrica";
    } else {
        cout << "\nnu este simetrica";
    }
}

void problema28() {
    /// Elementele de pe diagonala principala au proprietatea: e1 = a[1][1], e2 = a[2][2], en = a[n][n]
    int n, m[10][10], par = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
        if (m[i][i] % 2 == 0) {
            par++;
        }
    }
    
    cout << "\n" << par; 
}

void problema29() {
    /// Interschimbam valorile de pe pozitiile date: m[i][i] cu m[i][n + 1 - i]
    int n, m[10][10];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    
    int temp;
    for (int i = 1; i <= n; i++) {
        temp = m[i][i];
        m[i][i] = m[i][n + 1 - i];
        m[i][n + 1 - i] = temp;
    }
    
    cout << "\nMatricea cu diagonalele interschimbate este:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

void problema30() {
    /// Acest program nu va lua in calcul spatiile libere - strlen("Eu invat C++") = 10
    int n;
    cin >> n;
    
    char c[100];
    int nrVocale = 0;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U') {
            nrVocale++;
        }
    }
    
    if (nrVocale != 0) {
        cout << "\nTextul introdus contine " << nrVocale << " vocale!";
    } else {
        cout << "\nEroare! Nu am gasit vocale!";
    }
    /// Folosind variabila c in locul vectorului c[100] optimizam programul din punct de vedere al memoriei.
}

int main() {
    problema27();

    return 0;
}
















