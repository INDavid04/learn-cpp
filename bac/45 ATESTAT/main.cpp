#include <stdio.h>
#include <iostream>     /// cin, cout
#include <fstream>      /// ifstream file; file.open("bac.txt"); ifstream fin("bac.txt");
#include <cstring>      /// strlen, strcat, strcpy, strcmp, strchr, strstr, strtok

using namespace std;
/// Nota: functiile care incep cu majuscule fie sunt incorecte(SumaPrimeLimita), fie nu apartin celor 45 probleme de atestat

/// mie-26-apr-2023 (p1-p7; rezolvari: 7, ultima rezolvata a doua zi)
void prefix(int n); /// Daca citim 1234 afisam 123 12 1
void palindrom(int n); /// in: {42, 8, 122, 3003, 40} ... out: 2 /// in: {15, 23, 5789, 12323} ... out: NU EXISTA
int cifraControl(int N); /// in: 1971 ... out: 9 adica 1+9+7+1 = 18 > 10 deci 1+8 = 9 < 10
void perfectSauSumaDivizorilor(int n); /// in: 28 ... out: DA pt ca 28=1+2+4+7+14 /// in: 15 ... out: 9 adica 1+3+5
int interval(int a, int b, int n); /// in: (10, 20, 3) si x={12, 99, 19} ... out: 2 pt ca 12 si 19 sunt intre 10 si 20 inclusiv
void primSauDivizori(int n); /// in: 71 ... out: DA /// in: 20 ... out: NU Divizorii: 1, 2, 4, 5, 10, 20
int SumaPrimeLimita(int n); /// in: 7 ... out: 17 adica 2+3+5+7
/// joi-27-apr-2023 (p7-p10; rezolvari: 4)
int sumaPrimeLimita(int n); /// in: 7 ... out: 17 adica 2+3+5+7
void numarAparitiiInVector(int N); /// in: 14 5 {2, 3, 4, 4, 7} ... out: NU EXISTA pentru ca nu a gasit 14 in v[5]={...}
void inserareElpePozitieVector(int n); /// in: 5 {42, 10, 300, 555, 16} 7 1000 ... out: pozitie depasita lumgime vector = 5
void stergereElpePozitieVector(int n); /// in: 8 {16 5 90 434 55 71 31 33} 4 ... out: 16 5 90 55 71 31 33
/// vin-28-apr-2023 (p11-p24; rezolvari: 14)
void fractiiOrdonateCrescator(int n); /// in: 6 {1 4 7 -2 26 8 -6 5 12 5 9 -3} ... out: -3.5  -3 -1.2 0.25 2.4 3.25 (Bubble-Sort)
int sumaCifrePare(int x); ///in: 1234 ... out: 6 /// in: 9753 ... out: -1 pentru ca 9753 nu are nicio cifra para
void vectorParDinVectorOarecare(int n); /// in: 2 {4, 9} ... out: {4} /// in: {3, 9} ... out: NU EXISTA NUMERE PARE
void aparInVector(int n); /// in: 7 {14, 48, 14, 200, 6, 763, 50} 14 ... out: 1 3 /// in: 2 {4 8} 5 ... out: NU EXISTA
int maxValoriNegative(int n); /// in: 6 {23, -7, -40, 200, -15, 0} ... out: -7 /// in: 2 {1 35} ... out: NU EXISTA
void contorNrDinIntervalSiVectorFara(int n); /// in: 7 {14 76 201 35 23 9 46} 20 50 ... out: contor = 3 {14, 76, 201, 9}
void nrPerfecteDinVector(int n); /// in: 5 {41, 5, 90, 28, 6} ... out: 28 6 pt ca 28=1+2+4+7+14 si 6=1+2+3
int cmmdcVector(int n); /// in: 5 {42 8 36 24 6} ... out: 2 pt ca D42={1 2 3 6 7 14 21} D8={1 2 4 8} D36={1 2 3 4 6 9 12 18} ...
int maximMatrice(int n); /// in: 3 {[5 9 7][4 9 9][2 3 7]} ... out: max = 9 (l=1 c=2) (l=2 c=2) (l=2 c=3)  
void minimMatrice(int n); /// in: 3 {[5 9 7][4 9 9][2 3 7]} ... out: mim = 2; l = 3; c = 1
float mediaAritmeticaPozitiveMatrice(int n); /// daca toate elemente sunt negatice afisam NU EXISTA
void interschimbareDouaLiniiMatrice(int n); /// se da matricea nXn si doua linii; se afiseaza matricea cu liniile interschimbate
void liniiToateElemPareMatrice(int n); /// daca toate liniile au toate elementele impare afisam NU EXISTA, altfel indicii
void coloaneToateElemImpareMatrice(int n); /// indicii coloanelor cu toate elementele impare, altfel NU EXISTA
/// sam-29-apr-2023 (p25-p31; rezolvari: 7)
float mediaAritmeticaDiagonalaSecundara(int n); /// in: 3 {[1 2 4][6 5 4][7 8 9]} ... out: 5.33 pt ca (4+5+7)/3=5.33
void maximFiecareLinie(int n); /// se afiseaza maximul de pe fiecare linie a matricii separat de un spatiu
string simetricaFataDiagonalaPrincipala(int n); /// se afiseaza simetrica daca este, altfel nu este simetrica
int numarElementePareDiagonalaPrincipala(int n); /// in: 2 {[1 2][2 1]} ... out: 0 pt ca diag principala este 1 1 nr impare
void interschimbareDiagonaleMatrice(int n); /// elementele diagonalei principale devin celei secundare si viceversa
void nrVocaleSir(int n); /// in: ELEVUL redacteaza o scrisoare. ... out: 13 /// in: 1734 m.p. ... out: NU
void nrConsoaneLitereMiciSir(int n); /// in: ia ai ... out: nu /// in: dave hax ... out: 4
/// dum-30-apr-2023 (p32; rezolvari: 0)
void FaraCifreinSir(void); /// in: Suprafata lotului 2 este de 2341 m.p. ... out: Suprafata lotului este de m.p. /// else: NU
/// mie-03-mai-2023 (p32; rezolvari: 1)
void PrefixeSufixe(void); /// https://www.youtube.com/watch?v=aRgySvHh1e8
void faraCifreinSir(void); /// in: Suprafata lotului 2 este de 2341 m.p. ... out: Suprafata lotului este de m.p. /// else: NU
/// joi-04-mai-2023 (p33; rezolvari: 0)
void EleviDescrescatorMedii(void); /// @TODO: learn stuct
/// sam-06-mai-2023 (p34-p36; rezolvari: 3)
int maxDinVector(int n); /// in: 4 {-23, -675, 21, 8} ... out: 21
int numarElementeCuTreiZeroFinali(int n); /// in: 3 {12, 1000, 10000} ... out: 1, mer
void numereCuFixTreiDivizoriLimN(int n); /// in: 70 ... out << {4, 9, 25, 49}, adica patratele perfecte prime
/// lun-08-mai-2023 (p37-p45; rezolvari: 9)
unsigned int cmmdcRecursiv(int x, int y); /// Subprogramul returneaza cmmdc al nr nat x, y prin scaderi repetate, recursiv
unsigned int sumaCifreRecursiv(int p); /// in: 3815 ... out: 17 adica 3 + 8 + 1 + 5
unsigned int prodCifreRecursiv(int n); /// in: 3815 ... out: 120 afica 3 * 8 * 1 * 5
void douaNrPrimeAdunateDauN(int n); /// in: 100 ... out: 3 97 pt ca 3 + 97 = 100
void sirFibonacci(int n); /// in: 10 ... out: 0 1 1 2 3 5 8 13 21 34
void contorNrPrimeDinVector(int n); /// in: 8 {16 5 90 434 55 71 31 33} ... out: 3 adica 5, 71, 31
bool ePrim(int n); /// o folosim la problema de mai sus ca mi sila sa o fac in interiorul ei :)
void inlocuireMediaAritmeticaCelelateNrVector(int n); /// in: 3 {7 14 20} ... out: {17 13.5 10.5} adica 34/2, 27/2 si 21/2
void eliminElementeNuleDinVector(int n); /// in: 7 {0 0 27 14 0 8 0} ... out: {27 14 8}
void submultimiDouaElementeClasic(int n); /// in: 3 ... out: 1 2 \n 1 3 \n 2 3. scrisa la ora 10:50, a doua zi avand atestatul-2

/*
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
*/

/******************************************************************************/

int main() {
    int numar;
    cin >> numar;
    
    submultimiDouaElementeClasic(numar);
    
    return 0;
}

/******************************************************************************/

void submultimiDouaElementeClasic(int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        for (j = i + 1; j <= n; j++) {
            cout << i << " " << j << "\n";
        }
    }
}

void eliminElementeNuleDinVector(int n) {
    int X[n], i, pozitie;
    bool eliminat = false;
    for (i = 0; i < n; i++) {
        cin >> X[i];
    }
    for (i = 0; i < n; i++) {
        if (X[i] == 0) {
            for (pozitie = i; pozitie < n - 1; pozitie++) {
                X[pozitie] = X[pozitie + 1];
            }
            n--;
            eliminat = true;
            i--; /// in cazul in care avem doua sau mai multe elemente nule consecutive
        }
    }
    if (!eliminat) {
        cout << "NU EXISTA";
    } else {
        for (i = 0; i < n; i++) {
            cout << X[i] << " ";
        }
    }
}

void inlocuireMediaAritmeticaCelelateNrVector(int n) {
    float X[n], C[n], suma;
    int i, j;
    for (i = 0; i < n; i++) {
        cin >> X[i];
        C[i] = X[i]; /// copiem X[i] ca sa calculam media aritmetica a numerelor initiale
    }
    for (i = 0; i < n; i++) {
        suma = 0;
        for (j = 0; j < n; j++) {
            suma += C[j];
        }
        suma -= C[i];
        X[i] = suma / (n - 1);
    }
    for (i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
}

bool ePrim(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void contorNrPrimeDinVector(int n) {
    int X[n], i, contor = 0;
    for (i = 0; i < n; i++) {
        cin >> X[i];
        if (ePrim(X[i])) {
            contor++;
        }
    }
    if (contor) {
        cout << contor;
    } else {
        cout << "\nNU EXISTA";
    }
}

void sirFibonacci(int n) {
    int n1 = 0, n2 = 1, aux;
    cout << n1 << " " << n2;
    while (n > 2) {
        cout << " " << n1 + n2;
        aux = n2;
        n2 += n1;
        n1 = aux;
        n--;
    }
}

void douaNrPrimeAdunateDauN(int n) {
    int i, divizor;
    bool ePrim1, ePrim2; /// verificam daca cele doua numere (i, n-i) sunt prime
    for (i = 2; i <= n / 2; i++) {
        ePrim1 = true;
        ePrim2 = true;
        for (divizor = 2; divizor <= i / 2; divizor++) {
            if (i % divizor == 0) {
                ePrim1 = false;
            }
        }
        for (divizor = 2; divizor <= (n - i) / 2; divizor++) {
            if ((n - i) % divizor == 0) {
                ePrim2 = false;
            }
        }
        if (ePrim1 && ePrim2) {
            cout << i << " " << n - i;
            i = n; /// break;
        }
    }
    /// Complexitate O(n^2)
}

unsigned int prodCifreRecursiv(int n) {
    unsigned int prod = 1;
    if (n == 0) {
        return 1;
    } else {
        return prodCifreRecursiv(n/10) * (n % 10);
    }
}

unsigned int sumaCifreRecursiv(int p) {
    unsigned int suma = 0;
    if (p == 0) {
        return 0;
    } else {
        return sumaCifreRecursiv(p/10) + (p % 10);
    }
}

unsigned int cmmdcRecursiv(int x, int y) {
    if (x == y) {
        return x;
    } else if (x > y) {
        return cmmdcRecursiv(x-y, y);
    } else {
        return cmmdcRecursiv(x, y-x);
    }
}

void numereCuFixTreiDivizoriLimN(int n) {
    int i, divizor, patrat;
    bool ePrim;
    /// Luam toate patratele perfecte de la 4 la n
    for (i = 2; i * i <= n; i++) {
        patrat = i * i; /// pentru ca i este de la 2 la sqrt(n), vom salva in patrat variabila i la a doua
        ePrim = true;
        for (divizor = 2; divizor*divizor < patrat; divizor++) {
            if (patrat % divizor == 0) {
                ePrim = false;
                break;
            }
        }
        if (ePrim) {
            cout << patrat << " ";
        }
    }
}

int numarElementeCuTreiCifre(int n) {
    int v[n], k = 0, i;
    for (i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 1000 == 0 && v[i] < 10000) {
            k++;
        }
    }
    return k;
}

int maxDinVector(int n) {
    int i, v[n], max = -999999999;
    for (i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}
/******************************************************************************/
void EleviDescrescatorMedii(void) {
    int n;
    cin >> n; /// numarul de elevi
/*
Se citesc de la tastatură, pentru n elevi (n<30), numele şi media (număr real). Să se construiască în memorie, 
folosind date structurate, un vector care să reţină datele citite şi să se afişeze elevii în ordinea descrescătoare a mediilor.
Exemple:
Date de intrare	Date de ieşire
5
Popescu 8.47
Ionescu 6.21
Vasile 7.05
Matei 9.21
Popa 8.33	    Matei 9.21
                Popescu 8.47
                Popa 8.33
                Vasile 7.05
                Ionescu 6.21	
2
Andrei 8.21
Mihai 8.65  	Mihai 8.65
                Andrei 8.21
*/
}
/******************************************************************************/
void faraCifreinSir(void) {
    /// Salvam toate caracterele din afara intervalului [0,9] in sirul doarLitere[101]
    char s[101], doarLitere[101];
    int i, n, poz = 0;
    
    cin.get(s, 101);
    n = strlen(s);
    
    for (i = 0; i < n; i++) {
        if (s[i] < '0' || s[i] > '9') {
            doarLitere[poz] = s[i];
            poz++;
        }
    }

    puts(doarLitere); /// cout << doarLitere;
}

void PrefixeSufixe() {
    char s[256], copie[255];
    int i;
    
    cin.get(s, 256); /// citim sirul s cu ajutorul functiei cin.get();
    strcpy(copie, s); /// salvam in copie sirul s
    
    /// Afisare prefixelor folosind caracterul fantoma, \0, care marcheaza sfarsitul unui cuvant
    for (i = strlen(s); i > 0; i--) {
        s[i] = '\0';
        cout << s << endl;
    }
    
    /// Afisarea sufixelor folosind strcpy ... salvam sirul de la o pozitie i de la 0 la n-1
    for (i = 0; i < strlen(copie); i++) {
        strcpy(s, copie + i);
        cout << s << endl;
    }
}

void FaraCifreinSir(void) {
    int i, j;
    bool eliminat = false;
    char s[101];
    
    cin.get(s, 101);
    cout << s << " are lungimea " << strlen(s) << endl;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
            for (j = i; j < strlen(s); j++) {
                s[j] = s[j + 1];
            }
            eliminat = true;
            i--;
        }
    }
    if (!eliminat) {
        cout << "\nNU";
    } else {
        for (i = 0; i < strlen(s); i++) {
            cout << s[i];
        }
    }
    /// Subprogramul elimina toate cifrele dar in locul blocului de cifre lasa un caracter space
}

void nrConsoaneLitereMiciSir(int n) {
    char s[n];
    unsigned int i, cntConsoane = 0;
    cin.get(s, n);
    cout << endl;
    for (i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
    for (i = 0; i < n; i++) {
        if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z') {
            cntConsoane++;
        }
    }
    if (cntConsoane) {
        cout << cntConsoane;
    } else {
        cout << "NU";
    }
}

void nrVocaleSir(int n) {
    char s[n];
    int i, cntVocale = 0;
    cin.get(s, n);
    /// Citind sirul caracter cu caracter pierdem spatiile goale, asadar folosim cin.get() pentru propozitii
    for (i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            cntVocale++;
        }
    }
    s[n] = '\0'; /// caracterul fantoma incheie sirul fara a se mai afisa alte caractere dubioase
    if (cntVocale) {
        cout << cntVocale;
    } else {
        cout << "NU";
    }
}

void interschimbareDiagonaleMatrice(int n) {
    unsigned int i, j, aux, a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        aux = a[i][i];
        a[i][i] = a[i][n-i-1]; /// indicii liniei sunt identici; indicii coloanei adunati fac n-1 pt ca i pleaca de la 0
        a[i][n-i-1] = aux;
    }
    cout << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int numarElementePareDiagonalaPrincipala(int n) {
    int a[n][n], i, j, cntPar = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
        if (a[i][i] % 2 == 0) {
            cntPar++;
        }
    }
    return cntPar;
}

string simetricaFataDiagonalaPrincipala(int n) {
    float a[n][n];
    int i, j;
    bool eSimetrica = true;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + i; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                eSimetrica = false;
            }
        }
    }
    if (eSimetrica) {
        return "simetrica";
    } else {
        return "nu e simetrica";
    }
}

void maximFiecareLinie(int n) {
    int i, j;
    float a[n][n], maxim;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        maxim = a[i][0]; /// comparam primul cu al doilea element si asa mai departe ... a[i][0] cu a[i][1]
        for (j = 1; j < n; j++) {
            if (a[i][j] > maxim) {
                maxim = a[i][j];
            }
        }
        cout << maxim << " ";
    }
}

float mediaAritmeticaDiagonalaSecundara(int n) {
    float a[n][n], suma = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
        suma += a[i][n - i - 1];
    }
    return suma/n;
}

void coloaneToateElemImpareMatrice(int n) {
    int a[n][n], i, j;
    bool coloanaImpara, afisat = false;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (j = 0; j < n; j++) {
        coloanaImpara = true;
        for (i = 0; i < n; i++) {
            if (a[i][j] % 2 == 0) {
                coloanaImpara = false;
            }
        }
        if (coloanaImpara) {
            cout << j + 1 << " "; /// for-ul pleaca de la 0
            afisat = true;
        }
    }
    if (!afisat) {
        cout << "\nNU EXISTA";
    }
}

void liniiToateElemPareMatrice(int n) {
    int a[n][n], i, j;
    bool liniePara, afisat = false;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        liniePara = true;
        for (j = 0; j < n; j++) {
            if (a[i][j] % 2 != 0) {
                liniePara = false;
            }
        }
        if (liniePara) {
            cout << i + 1 << " "; /// for-ul pleaca de la 0
            afisat = true;
        }
    }
    if (!afisat) {
        cout << "\nNU EXISTA";
    }
}

void interschimbareDouaLiniiMatrice(int n) {
    int a[n][n], l1, l2, i, j, aux;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> l1 >> l2;
    for (i = 0; i < n; i++) {
        aux = a[l1 + 1][i];
        a[l1 + 1][i] = a[l2 + 1][i];
        a[l2 + 1][i] = aux;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

float mediaAritmeticaPozitiveMatrice(int n) {
    int i, j, suma = 0, cntPoz = 0;
    float a[n][n];
    bool negative = true;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] > 0) {
                suma += a[i][j];
                cntPoz++;
                negative = false;
            }
        }
    }
    if (negative) {
        cout << "NU EXISTA\n";
        return 0;
    } else {
        return (float)suma/cntPoz; /// media aritmetica este suma a n elemente supra numarul acestora
    }
}

void minimMatrice(int n) {
    int i, j, minim = 999999999;
    float a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] < minim) {
                minim = a[i][j];
            }
        }
    }
    cout << minim << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == minim) {
                cout << "linia " << i + 1 << " coloana " << j + 1 << endl;
            }
        }
    }
}

int maximMatrice(int n) {
    int i, j, maxim = -999999999;
    float a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] > maxim) {
                maxim = a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == maxim) {
                cout << "linia " << i + 1 << " coloana " << j + 1 << endl;
            }
        }
    }
    return maxim;
}

int cmmdcVector(int n) {
    int X[n], i, cmmdc;
    for (i = 0; i < n; i++) {
        cin >> X[i];
    }
    cmmdc = X[0]; /// cmmdc intre X[0] si X[1] dupa care intre cmmdc anterior si X[2] pana la X[n]
    for (i = 1; i < n; i++) {
        while (cmmdc != X[i]) {
            if (cmmdc > X[i]) {
                cmmdc -= X[i];
            } else {
                X[i] -= cmmdc;
            }
        }
    }
    return cmmdc;
}

void nrPerfecteDinVector(int n) {
    int i, X[n], divizor, sumaDivizor;
    bool afisat = false;
    for (i = 0; i < n; i++) {
        cin >> X[i];
        sumaDivizor = 1;
        for (divizor = 2; divizor <= X[i]/2; divizor++) {
            if (X[i] % divizor == 0) {
                sumaDivizor += divizor;
            }
        }
        if (sumaDivizor == X[i]) { /// un numar e perfect daca este egal cu suma divizorilor afara de el insusi, 28=1+2+4+7+14
            cout << X[i] << " ";
            afisat = true;
        }
    }
    if (!afisat) {
        cout << "\nNU EXISTA";
    }
}

void contorNrDinIntervalSiVectorFara(int n) {
    int X[n], Y[n], pozY = 0, a, b, i, contor = 0;
    cin >> a >> b; /// citim intervalul [a,b] inaintea vectorului ca sa nu repetam un for degeaba :)
    for (i = 0; i < n; i++) {
        cin >> X[i];
        if (!(X[i] >= a && X[i] < b)) { /// daca nu e din interval atunci stocam valoare in Y[pozY]
            Y[pozY] = X[i];
            pozY++;
        } else {
            contor++;
        }
    }
    cout << "\ncontor: " << contor << "\n";
    if (contor) { /// daca contor = 0 atunci nu exista niciun numar in intervalul [a,b] si Y este de fapt X
        for (i = 0; i < pozY; i++) {
            cout << Y[i] << " ";
        }
    }
}

int maxValoriNegative(int n) {
    int X[n], max=-999999999, i;
    bool macarUnNegativ = false;
    for (i = 0; i < n; i++) {
        cin >> X[i];
        if (X[i] < 0 && X[i] > max) {
            max = X[i];
            macarUnNegativ = true;
        }
    }
    if (!macarUnNegativ) {
        cout << "NU EXISTA\n";
        return 0;
    } else {
        return max;
    }
}

void aparInVector(int n) {
    bool gasit = false;
    float X[n], valoare;
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    cin >> valoare; /// cea pe care o comparam cu fiecare numar din vector ca sa afisam pozitiile pe care se afla
    for (int i = 0; i < n; i++) {
        if (valoare == X[i]) {
            cout << i + 1 << " ";
            gasit = true;
        }
    }
    if (!gasit) {
        cout << "NU EXISTA";
    }
}

void vectorParDinVectorOarecare(int n) {
    int X[n], par[n], cntNrPar = 0, i;
    for (i = 0; i < n; i++) {
        cin >> X[i];
        if (X[i] % 2 == 0) {
            par[cntNrPar] = X[i];
            cntNrPar++;
        }
    }
    if (cntNrPar == 0) {
        cout << "NU EXISTA NUMERE PARE";
    } else {
        for (i = 0; i < cntNrPar; i++) {
            cout << par[i] << " ";
        }
    }
}

int sumaCifrePare(int x) {
    int suma = -1; /// pentru a afisa -1 in caz de nu are cifre pare dar si pentru a verifica daca suma s-a modificat (caz: x=0)
    while (x) {
        if ((x % 10) % 2 == 0) {
            suma += x % 10;
        }
        x /= 10;
    }
    if (suma == -1) {
        return suma; /// sau return -1;
    } else {
        return suma + 1; /// pentru ca suma initiala este -1 nu 0
    }
}

void fractiiOrdonateCrescator(int n) {
    int i, numarator, numitor;
    float v[n], aux;
    for (i = 0; i < n; i++) {
        cin >> numarator >> numitor;
        v[i] = (float)numarator/numitor;
    }
    /// Bubble-Sort Optimizat
    bool sortat;
    int mutari = n, limita;
    do {
        sortat = true;
        limita = mutari;
        for (i = 0; i < limita - 1; i++) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sortat = false;
                mutari = i + 1; /// 
            }
        }
    } while (!sortat);
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    /*/ Bubble-Sort First-Attempt
    bool sortat = true; /// presupunem ca vectorul trebuie sortat
    while (sortat) {
        for (i = 0; i < n - 1; i++) {
            if (v[i + 1] < v[i]) { /// sau daca elementul curent mai mic decat urmatorul atunci vectorul trebuie sortat
                sortat = false;
                aux = v[i + 1];
                v[i + 1] = v[i];
                v[i] = aux;
            }
        }
        if (sortat) { /// in acest caz nu intram deloc in if-ul de comparatie (v[i + 1] < v[i])
            sortat = false; /// iesim din while
        } else { /// in acest caz a fost nevoie de o interschimbare si am efectuat-o
            sortat = true; /// repetam while-ul pana nu mai este nevoie de nicio interschimbare
        }
    }
    */
}

void stergereElpePozitieVector(int n) {
    int X[n], k, i;
    for (i = 0; i < n; i++) {
        cin >> X[i];
    }
    cin >> k; /// pozitia
    if (k > n) {
        cout << "\nPozitie depasita!\nLungime vector = " << n;
    } else {
        for (i = k - 1; i < n - 1; i++) {
            X[i] = X[i + 1];
        }
        n--;
        for (i = 0; i < n; i++) {
            cout << X[i] << " ";
        }
    }
}

void inserareElpePozitieVector(int n) {
    int X[n], k, i, nrInserat;
    for (i = 0; i < n; i++) {
        cin >> X[i];
    }
    cin >> k >> nrInserat;
    if (k > n + 1) { /// pentru ca putem insera un numar pe ultima pozitie
        cout << "\nPozitie depasita!\nLungime vector = " << n;
    } else {
        n++; /// {0 1 2 3} inseram pe pozitia 1 ... {0 1 1 2 3}
        for (i = n; i >= k; i--) {
            X[i] = X[i - 1];
        }
        X[k - 1] = nrInserat;
        for (i = 0; i < n; i++) {
            cout << X[i] << " ";
        }
    }
}

void numarAparitiiInVector(int N) {
    int m, apar = 0;
    cin >> m;
    int v[m];
    for (int i = 0; i < m; i++) {
        cin >> v[i];
        if (v[i] == N) {
            apar++;
        }
    }
    if (apar) {
        cout << apar;
    } else {
        cout << "NU EXISTA";
    }
}

int sumaPrimeLimita(int n) {
    int suma = 0, divizor, i;
    bool ePrim;
    for (i = 2; i <= n; i++) {
        ePrim = true;
        for (divizor = 2; divizor <= i/2; divizor++) {
            if (i % divizor == 0) {
                ePrim = false;
                divizor = i;
                /// Daca gasim un divizor diferit de 1 si numarul i atunci nr nu e prim si iesim din acest for
            }
        }
        if (ePrim) {
            suma += i;
        }
    }
    return suma;
}

int SumaPrimeLimita(int n) {
    /// Atentie: Eroare algoritmica
    int suma = 0;
    bool ePrim;
    for (int i = 2; i <= n; i++) {
        ePrim = true;
        for (int divizor = 2; divizor <= n/2; divizor++) {
            if (i % divizor == 0) {
                ePrim = false;
            }
        }
        if (ePrim) {
            suma += i;
            cout << " + " << i;
        }
    }
    if (n >= 3) {
        suma += 5;
    } else if (n >= 2) {
        suma += 2;
    }
    cout << "\n" << suma;
    return suma;
}

void primSauDivizori(int n) {
    bool ePrim = true;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            ePrim = false;
        }
    }
    if (n == 1) {
        cout << "\nNU";
    } else if (ePrim) {
        cout << "\nDA";
    } else {
        cout << "\nNU\nDivizori: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }
    }
    
    /// Atentie: 1 si n sunt si ei niste divizori ai numarului natural n ... 1 nu e prim, 2, 3, 5 etc prime, 4 are divizorii 1, 2
}

int interval(int a, int b, int n) {
    int x[n], contor = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (x[i] >= a && x[i] <= b) {
            contor++;
        }
    }
    return contor;
}

void perfectSauSumaDivizorilor(int n) {
    int suma = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    if (suma == n) {
        cout << "\nDA";
    } else {
        cout << suma;
    }
}

int cifraControl(int N) {
    int suma;
    do {
        suma = 0;
        while (N) {
            suma += N % 10;
            N /= 10;
        }
        N = suma;
    } while (suma > 9);
    return suma;
}

void palindrom(int n) {
    int X[n], copieX, invers, contor = 0;
    for (int i = 0; i < n; i++) {
        cin >> X[i];
        
        copieX = X[i]; /// pastram o copie pentru fiecare X[i] 
        invers = 0; /// resetam inversul pentru fiecare X[i]
        while (copieX) {
            invers = invers * 10 + copieX % 10;
            copieX /= 10;
        }

        if (invers == X[i]) {
            contor++;
        }
    }
    
    if (contor == 0) {
        cout << "\nNU EXISTA";
    } else {
        cout << contor;
    }
    
    /// Initial, am initializat invers = 0 in afara for-ului, astfel ca inversul pastra vechea valoare a precedentului
}

void prefix(int n) {
    while (n > 0) {
        cout << n << " "; /// afiseaza si numarul n, var2: while(n>9) { cout << n << " "; n /= 10 }
        n /= 10;
    }
}




