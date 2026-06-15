/******************************************************************************

Problema 11

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citesc de la tastatură numărul natural n (reprezentând numărul de fracţii)  apoi n perechi de numere 
întregi reprezentând numărătorul şi numitorul unei fracţii. Să se ordoneze crescător fracţiile, afişând 
valorile zecimale ale lor.
Exemplu:
Date de intrare 	Date de ieşire	                Explicaţii
6                   -3.5 -3 -1.2 0.25 2.4 3.25      
1 4                                                 0.25=1/4
7 -2                                                -3.5=7/(-2)
26 8                                                3.25=26/8
-6 5                                                -1.2=-6/5
12 5                                                2.4=12/5
9 -3	                                            -3=9/(-3)

--------------------------------------------------------------------------------

Problema 12

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citește  un număr natural x din intervalul [0,104]. Să se afișeze  pe ecran suma cifrelor pare ale 
numărului x sau valoarea -1, dacă numărul nu conține nicio cifră pară. 
Exemplu:
Date de intrare 	Date de ieşire	Explicaţii
x=1234	6	
x=9753,	-1	

--------------------------------------------------------------------------------

Problema 13

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură, un număr natural n şi cele n elementele ale unui vector X care memorează 
numere naturale. Să se genereze şi să se afişeze un alt vector Y care conţine elementele pare din vectorul X.
Dacă nu există elemente pare, se va afişa mesajul NU EXISTA NUMERE PARE.
Exemple:
Date de intrare	    Date de ieşire	        Explicaţii
6
49 200 0 504 17 12	200 0 504 12	
3
17 3 201	        NU EXISTA NUMERE PARE	Vectorul nu conţine numere pare.

--------------------------------------------------------------------------------

Problema 14

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură, un număr natural n şi cele n elementele ale unui vector X care memorează numere reale. 
Testaţi dacă o valoare a introdusă de la tastatură se găseşte în vector. În caz afirmativ, 
afişaţi poziţiile pe care se află, în caz contrar, se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare	        Date de ieşire	    Explicaţii
7
14 48 14 200 6 763 50
14	                    pozitii: 1 3	    Valoarea 14 se găseşte în vector pe poziţiile 1 şi 3.
6
49 200 0 504 17 12
1000	                NU EXISTA	        Valoarea 1000 nu se găseşte în vector.

--------------------------------------------------------------------------------

Problema 15

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură, un număr natural n şi cele n elementele ale unui vector X care memorează numere întregi. 
Să se afişeze maximul valorilor negative. Dacă nu există elemente negative, se va afişa mesajul NU EXISTA.
Exemple:
Date de intrare	        Date de ieşire	    Obs.
6
23 -7 -40 200 -15 0	    max=-7	
3
14 2 90             	NU EXISTA	        Nu există elemente negative

--------------------------------------------------------------------------------

Problema 16

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură, un număr natural n şi cele n elementele ale unui vector X care memorează 
numere întregi. Să se contorizeze elementele din intervalul [a,b], (a,b citite de la tastatură, a<b) 
şi să se construiască şi să se afişeze un alt vector Y cu cele care nu aparţin intervalului.
Exemple:
Date de intrare	        Date de ieşire  Explicaţii
n: 7
14 76 201 35 23 9 46
a: 20
b: 50	                nr=3 35 23 46   Numerele 35, 23 şi 46 se găsesc în intervalul [20, 50].
n: 3
17 45 23
a: 25
b: 30	                nr=0            Niciun element din vectorul X nu se găseşte în intervalul [25, 30].

--------------------------------------------------------------------------------

Problema 17

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură, un număr natural n şi cele n elementele ale unui vector X care memorează
numere naturale. Să se afişeze numerele perfecte din  vector. Dacă nu există numere perfecte, se va afişa
mesajul NU EXISTA. (Un număr este perfect dacă este egal cu suma divizorilor săi mai puţin el însuşi)
Exemple:
Date de intrare	    Date de ieşire	Explicaţii
5
41 5 90 28 6	    28 6	        Vectorul X conţine numerele perfecte 28 şi 6.
28=1+2+4+7+14
6=1+2+3
3
2 67 34	            NU EXISTA	

--------------------------------------------------------------------------------

Problema 18

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte de la tastatură, un număr natural n şi cele n elementele ale unui vector X care memorează
numere naturale nenule. Să se calculeze şi să se afişeze cel mai mare divizor comun al elementelor vectorului.
Exemple:
Date de intrare	    Date de ieşire	    Explicaţii
5
42 8 36 24 6	    2	
4
43 20 15 7	        1	

--------------------------------------------------------------------------------

Problema 19

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citește o matrice pătratică cu nxn numere reale reprezentând Să se afişeze pe ecran pe linii diferite
cel mai mare element din matrice precum şi poziţiile pe care apare în matrice.
Exemple:
Date de intrare     Date de ieşire	                Explicaţii
3
5 9 7
4 9 9
2 3 7	            max=9
                    l=1 c=2
                    l=2 c=2
                    l=2 c=3	l=linia, c=coloana
                                                    Elementul 9 apare de 3 ori pe poziţiile (1,2), (2,2) şi (2,3)
4
4 8 6 7 
5 6 4 0
0 2 1 0
5 4 6 2	            max=8
                    l=1 c=2
	
--------------------------------------------------------------------------------

Problema 20

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citesc de la tastatură n, număr natural nenul, apoi nxn elemente reale într-o matrice pătratică. 
Să se afişeze cel mai mic element din matrice şi poziţiile pe care apare în matrice.
Exemple:
Date de intrare
	Date de ieşire	Explicaţii
3
5 9 7
4 9 9
2 3 7	min=2
l=3 c=1	l=linia, c=coloana
4
4 8 6 7 
5 6 4 0
0 2 1 0
5 4 6 2	min=0
l=2 c=4
l=3 c=1
l=3 c=4	Elementul 0 apare de 3 ori pe poziţiile (2,4), (3,1) şi (3,4)

*******************************************************************************/
#include <iostream>

using namespace std;

void problema11() {
    int n;
    cout << "Numarul de fractii: "; cin >> n;
    
    int a[100][2];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2; j++) {
            cin >> a[i][j];
        }
    }
    
    float rez[100];
    for (int i = 1; i <= n; i++) {
        rez[i] = (float)a[i][1]/a[i][2];
    }
    
    /// Sortarea
    float aux;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++) { 
            if (rez[j] > rez[j + 1]) {
                aux = rez[j];
                rez[j] = rez[j + 1];
                rez[j + 1] = aux;
            }
        }
    }
    
    cout << "\nRezultatul fractiilor: \n";
    for (int i = 1; i <= n; i++) {
        cout << rez[i] << " ";
    }
}

void problema12() {
    int x, sum = 0;
    cin >> x;
    
    while (x) {
        if((x%10) % 2 == 0) {
            sum += x%10;
        }
        x /= 10;
    }
    
    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum; 
    }
}

void problema13() {
    int n, x[100], y[100], cnt = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            y[cnt] = x[i];
            cnt++;
        }
    }
    
    if (cnt == 0) {
        cout << "\nNU EXISTA";
    } else {
        for (int i = 0; i < cnt; i++) {
            cout << y[i] << " ";
        }    
    }
    
    /*
    n   i   x   y   cnt
    6   0   49      0
        1   200 200 1
        2   0   0   2
        3   504 504 3
        4   17      
        12  12  12  4
    */ /// Tabel valori
}

void problema14() {
    int n, check = 0;
    float a, X[100];
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> X[i];
    }
    
    cout << "\nIntroduceti un numar: "; cin >> a;
    for (int i = 1; i <= n; i++) {
        if(X[i] == a) {
            cout << i << " ";
            check = 1;
        }
    }
    
    if (check == 0) {
        cout << "NU EXISTA";
    }
}

void problema15() {
    int n, x[100], max = -999999999;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        
        if (x[i] < 0 && x[i] > max) {
            max = x[i];
        }
    }
    
    if (max == -999999999) {
        cout << "NU EXISTA";
    } else {
        cout << "max = " << max;
    }
}

void problema16() {
    int n, a, b, X[10], Y[10];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    cout << "\nIntervalul [a, b]: "; cin >> a >> b;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (X[i] >= a && X[i] <= b) {
            Y[cnt] = X[i];
            cnt++;
        }
    }
    
    if (cnt == 0) {
        cout << "\nNu am gasit niciu numar din intervaul dat!";
    } else {
        cout << "\nAm gasit " << cnt << " numere din vector: ";
        for (int i = 0; i < cnt; i++) {
            cout << Y[i] << " ";
        }    
    }
}

void problema17() {
    int n, x[10];
    bool ePerfect = false;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int perfect;
    for (int i = 0; i < n; i++) {
        perfect = 0;
        /// In acest for calculam suma divizorilor (daca este x[i] atunci e perfect)
        for (int j = 1; j <= x[i]/2; j++) {
            if (x[i] % j == 0) {
                perfect += j;
            }
        }
        
        if (x[i] == perfect) {
            cout << perfect << " ";
            ePerfect = true;
        }
    }
    
    if (ePerfect == false) {
        cout << "\nNU EXISTA";
    }
}

void problema18() {
    int n, x[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int cmmdc;
    for (int i = 0; i < n-1; i++) {
        cmmdc = x[i];
        while (cmmdc != x[i+1]) {
            if (cmmdc > x[i+1]) {
                cmmdc -= x[i+1];    
            } else {
                x[i+1] -= cmmdc;
            }
        }
    }
    
    cout << cmmdc;
}

void problema19() {
    int n;
    cin >> n;
    
    float m[10][10], max = - 999999999;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
            
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
    }
    
    cout << "\nmax = " << max;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (m[i][j] == max) {
                cout << "\nlinia " << i << " si coloana " << j;
            }
        }
    }
}

void problema20() {
    int n;
    cin >> n;
    
    float m[10][10], min = 999999999;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
            
            if (m[i][j] < min) {
                min = m[i][j];
            }
        }
    }
    
    cout << "\nmin = " << min;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (m[i][j] == min) {
                cout << "\nlinia " << i << " si coloana " << j;
            }
        }
    }
}

int main()
{
    problema18();

    return 0;
}

