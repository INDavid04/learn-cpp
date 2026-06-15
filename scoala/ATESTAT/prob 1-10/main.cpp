#include <iostream>

using namespace std;

/*

INSPECTORATUL ȘCOLAR JUDEȚEAN VRANCEA

Subiectele probei practice pentru
Examenul de atestare a competenţelor profesionale a absolvenţilor claselor de matematică-informatică şi matematică-informatică, intensiv informatică, an școlar 2022-2023

Subiecte propuse pentru PROGRAMARE
Limbaj de programare Pascal/C/C++

--------------------------------------------------------------------------------

Problema 1

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Citeşte de la tastură un număr natural n cu cel mult 8 cifre (n≥10) şi  scrie pe ecran toate prefixele nenule ale lui n, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a valorii 
Exemplu: pentru n=10305 Rezultat: 
Exemple:
Date de intrare	Date de ieşire	Explicaţii
10305	1030 103 10 1	
12323	12323 1232 123 12 1
	
--------------------------------------------------------------------------------

Problema 2

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n şi cele n elementele ale unui vector X care memorează numere naturale. Să se afişeze numărul elementelor care sunt numere palindrom. Dacă nu există numere palindrom, se va afişa mesajul NU EXISTA. (Un număr este palindrom dacă citit de la stânga la dreapta sau de la dreapta spre stânga rămâne neschimbat)
Exemple:
Date de intrare	Date de ieşire	Explicaţii
5
42 8 122 3003 40	2	Vectorul conţine numerele palindrom : 8, 3003
4
15 23 5789 12323	
NU EXISTA	

--------------------------------------------------------------------------------

Problema 3

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural N și afișează pe ecran cifra de control. „Cifra de control” a unui număr întreg N se calculează efectuând suma cifrelor sale, apoi suma cifrelor acestei sume etc. până se obtine o sumă formată dintr-o singură cifră. 
Exemple:
Date de intrare	Date de ieşire	Explicaţii
1971	9	1971 este 9 ( 1971 -> 18 ->9).
99	9	

--------------------------------------------------------------------------------

Problema 4

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte n un număr natural de la tastatură. Să se verifice dacă numărul este perfect şi în caz afirmativ să se afişeze mesajul DA. Dacă nu este perfect se afişează suma divizorilor săi, mai mici decât numărul. (Un număr este perfect dacă este egal cu suma divizorilor săi mai puţin el însuşi.)
Exemple:
Date de intrare	Date de ieşire	Explicaţii
28	DA	28=1+2+4+7+14
15	9	1+3+5=9

--------------------------------------------------------------------------------

Problema 5

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citesc de la tastatură  numerele naturale a, b, n (1<n<100) şi un şir de n valori întregi şi scrie pe ecran numărul de elementele care se găsesc în intervalul [a,b].
Exemple:
Date de intrare	Date de ieşire	Explicaţii
a=10, b=20, n=3, x=12, 99,19	2	
a=0, b=9, n=3, x=12, 99,19	0	

--------------------------------------------------------------------------------

Problema 6

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme:
Se citeşte n număr natural de la tastatură. Să se verifice dacă numărul este prim. În caz afirmativ, se va afişa mesajul DA şi în caz contrar, se va afişa mesajul NU şi divizorii acestuia ca în exemplul de mai jos.
Exemple:
Date de intrare	Date de ieşire	Explicaţii
71	DA	
20	NU
Divizorii: 1 2 4 5 10 20	

Problema 7

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte citeşte de la tastatură un număr natural nenul n cu cel mult 3 cifre, calculează şi scrie pe ecran suma elementelor prime până la n. 
Exemple:
Date de intrare	Date de ieşire	Explicaţii
n=7 
	17	
n=12	28	

--------------------------------------------------------------------------------

Problema 8

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citesc de la tastatură număr natural N cu maxim 4 cifre şi un vector cu m numere întregi şi afişează pe ecran de câte ori apare fiecare N în  cele m numere. Dacă numărul nu se regăsește se afișează mesajul “NU EXISTA”.

Exemple:
Date de intrare	Date de ieşire	Explicaţii
N=4, m=5, v=(2,3,4,4,7)	2	

N=14, m=5, v=(2,3,4,4,7)	
NU EXISTA	

--------------------------------------------------------------------------------

Problema 9

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n şi cele n elementele ale unui vector X care memorează numere întregi. Să se insereze pe poziţia k, o valoare a citită de la tastatură. Poziţia k se citeşte de la tastatură. Dacă poziţia k nu se află în vector se afişează mesajul pozitie depasita şi lungimea vectorului, ca în exemplu.
Exemple:
Date de intrare	Date de ieşire	Explicaţii
8
16 5 90 434 55 71 31 33
4 (poziţia k)
2000	16 5 90 2000 434 55 71 31 33
	Se inserează 2000 pe poziţia 4 din vector.
5
42 10 300 555 16
7 (poziţia k)
1000	pozitie depasita
lungime vector=5	Vectorul rămâne neschimbat.

--------------------------------------------------------------------------------

Problema 10

Subiectul II - programare
Scrieţi un program Pascal/C/C++ pentru rezolvarea următoarei probleme: 
Se citeşte de la tastatură un număr natural n şi cele n elementele ale unui vector X care memorează numere întregi. Să se 
şteargă elementul  de pe poziţia k (citită de la tastatură). Dacă poziţia k nu se află în vector se afişează mesajul pozitie
depasita şi lungimea vectorului ca în exemplu.

Exemple:
Date de intrare	Date de ieşire	Explicaţii
in:
8
16 5 90 434 55 71 31 33
4
out:
16 5 90 55 71 31 33
Se elimină elementul 434 situat pe poziţia 4 în vector.
	
5
42 10 300 555 16
7	pozitie depasita
lungime vector=5	Vectorul rămâne neschimbat.

*/ /// Cerinte

void problema1() {
    /*
    Citeste un nr nat de la tastatura n cu cel mult 8 cifre (n>=10) si scrie pe
    ecran toate prefixele nenule ale lui n, pe o singura linie, separate prin 
    cate un spatiu, in ordine descrescatoare a valorii.
    
    in: 10305
    out: 1030, 103, 10, 1
    */
    
    int n;
    cout << "n: "; cin >> n;
    
    while (n) {
        cout << n << " ";
        n /= 10;
    }
}

void problema2() {
    /*
    Se citeste de la tastatura un numar natural n si cele n elemente ale unui vector x care memoreaza
    numere naturale. Sa se afiseze numarul elementelor care sunt numere palindrom. Daca nu exista 
    numere palindrom, se va afisa mesajul NU EXISTA.
    */
    
    int v[100], n, i, og, nr=0, b;
    cout << "Numarul de elemente: "; cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "\nv[" << i << "] = "; cin >> v[i];
        og = 0;
        b = v[i];
        
        while (b) {
            og = og*10 + b%10;
            b /= 10;
        }
        
        if (og == v[i]) {
            nr++;
        }
    }
    
    if(nr) {
        cout << "\nNumarul de elemente este " << nr;
    } else {
        cout << "\nNu exista";
    }
    
}

void problema3() {
    /*
    Se citeste de la tastatura un nr nat N si afiseaza pe ecran cifra de control.
    Cifra de control se calculeaza efectuand suma cifrelor sale, apoi suma cifrelor acestei sume etc
    pana se obtine o suma formata dintr-o singura cifra.
    
    in: 1971
    out: 9
    1971 este 9, 1971-> 18 -> 9
    */
    
    int n, s;
    cout << "n: "; cin >> n;
    
    while (n > 9) {
        while(n > 0) {
            s += n%10;
            n /= 10;
        }  
        n = s; /// Resetam
    }
    
    cout << "\nCifra de control este " << n;
}

void problema4() {
    /*
    Citim n natural. Sa se verifice daca numarul este perfect si in caz afirmativ sa se afiseze mesajul DA.
    Daca nu este sa se afiseze suma divizorilor sai, mai mici decat numarul. 
    Un nr e perfect daca este egal cu suma divizorilor sai mai putin el insusi.
    
    in: 28
    out: DA
    */
    
    int n, s = 0, i;
    cout << "n: "; cin >> n;
    
    for (i = 1; i <= n/2; i++) {
        if (n%i == 0) {
            s += i;
        }
    }
    
    if (n == s) {
        cout << "\nDA!";
    } else {
        cout << "\nSuma divizorilor este " << s;
    }
}

void problema5() {
    /*
    Citim a, b, n (1 < n < 100) si un sir de n valori intregi si scrie pe ecran numarul de elemente care
    se gasesc in intervalul [a, b];
    
    in: a=10, b=20, n=3, x=12, 1
    */
    
    int v[100], n, i, a, b, nr=0;
    cout << "n: "; cin >> n;
    cout << "\na si b sunt: "; cin >> a >> b;
    
    for (int i = 1; i <= n; i++) {
        cout << "\nv[" << i << "] = "; cin >> v[i];
        if (v[i] >= a && v[i] <= b) {
            nr++;
        }
    }
    cout << "\nNumarul: "  << nr;
}

void problema6() {
    /*
    Se citeste n nr natural. Verificati daca este prim cu afisarea DA si NU + divizorii gasiti!
    in: 71
    out: DA
    in: 20
    out: NU 1 2 4 5 10 20
    */
    
    int n;
    cin >> n;
    
    bool divizibil;
    
    for (int i = 2; i <= n/2; i++) {
        if(n%i == 0) {
            divizibil = true;
            cout << i << " ";
        }
    }
    
    if(divizibil = true) {
        cout << "\nDA";
    } else {
        cout << "\nNU";
    }
}

void problema7() {
    /*
    Citim n nr nat nenul cu cel mult 3 cifre. Afiseaza suma elementelor prime pana la n.
    in: 7
    out: 17 pt ca avem: 2+3+7
    
    Cand este un numar prim?
    Atunci cand nu are divizori (n%i != 0)
    */
    
    int n;
    cin >> n;
    
    int sum = 0; /// De facut in do {} while();
    for (int i = 2; i <= n; i++) {
        if (n % i != 0) {
            sum += i;
        }
    }
    
    cout << sum;
}

void problema8() {
    /*
    Citim n nr nat de maxim 4 cifre si un vector cu m numere intregi si afiseaza pe ecran de cate ori apare
    fiecare n in cele m numere intregi si afiseaza pe ecran de cate ori se gaseste n in vectorul x.
    */
    
    int n, m, x[100], i, nr = 0;
    cout << "Introduceti elementul pe care sa-l caut in vector si numarul de elemente: ";
    cin >> n >> m;
    
    for (i = 1; i <= m; i++) {
        cin >> x[i];
        if (x[i] == n) {
            nr++;
        }
    }
    if (nr == 0) {
        cout << "\nNu exista!";
    } else {
        cout << "\n" << nr;
    }
    
    
}

void problema9() {
    /*
    Citim n nr natural si vectorul x. Inserati pe pozitia k o valoare citita de la tastatura.
    Daca pozitia k nu se afla in vector se afiseaza mesajul pozitie depasita si lungime vectorului:
    */
    
    int v[100], n, i, a, k;
    cin >> n;
    
    /// Citim vectorul v
    for (i = 1; i <= n; i++) {
        cin >> v[i];
    }
    
    /// Citim a = valoarea de introdus si k pozitia pe care sa introducem
    cout << "\na: "; cin >> a;
    cout << "\nk: "; cin >> k;
    
    if (k > n) {
        cout << "\nPozitie depasita";
        cout << "\nDimensiune maxima " << n;
    } else {
        for (i = n; i >= k; i--) {
            v[i+1] = v[i];
        }
        v[k] = a;
        n++;
        cout << "\nVectorul obtinut este: ";
        for (i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
    }
}

void problema10() {
    int n, x[100], k;
    cout << "\nNumar de elemente: "; cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    
    cout << "\nPozitia elementului de eliminat: "; cin >> k;
    if (k > n) {
        cout << "\npozitie depasita";
    } else {
        for (int i = k; i <= n-1; i++) {
            x[i] = x[i+1];
        }
        
        cout << "\nVector final:\n";
        for (int i = 1; i < n; i++) {
            cout << x[i] << " ";
        }
    }
}

int main()
{
    problema10();

    return 0;
}





