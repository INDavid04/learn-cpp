#include <stdio.h>  /// scnaf(), printf()
#include <iostream> /// cin >>, cout <<
#include <climits>  /// INT_MAX si -INT_MAX
#include <cstring>  /// siruri de caractere
#include <cmath>    /// sqrt()
#include <fstream>  /// fisiere text 

using namespace std; /// std::

/// 01-apr-2023-ora-16-19
bool ePrim(int n);
bool ePrimRecursiv(int n, int divizor);
void DivizoriProprii(int n);
void FactoriPrimi(int n); /// @TODO: Debug
int Baza10in2(int n);
int Baza2in10(int n);
void MaximMinim();
/// 08-apr-2023-ora-10-57
void Fibonacci(int n);
void VectorAdaugareStergere(int n);
void VectorSumaMaximIntersectie(int n);
void MaximImparMinimParDouaCifre(); /// p1 la vectori frecventa
void OrdonImpareleInainteaParelor(); /// p2 la vectori frecventa
int CautareBinaraClasica (int NumarCautat); /// @TODO: celelate doua cautari de la cautarea binara
/// 06-mai-2023-ora-11-27
void InterclasareDoiVectori (int n, int m); /// cei doi vectori trebuiesc sortati: crescator/descrescator
/// 12-mai-2023-ora-23-00
void BubbleSort(int v[], int n); /// usor de inteles, mai greoi datorita permutarilor
void SelectionSort(int v[], int n); /// aceeasi complexitate, dar mai eficient ca precedentul
/// 19-mai-2023-ora-18-15
int cmmdcRecursiv(int a, int b);
void SimplificareaFractiilor(int a, int b); /// foosim cmmdcRecursiv pentru a simplifica fractia cu acesta
/// 20-mai-2023-ora-17-26
float DistantaDouaPuncte(int xa, int ya, int xb, int yb) { return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya)); }
/// 22-mai-2023-ora-18-35
struct melodie { char titlu[64], interpret[64]; int puncte; };
void ProbStruct1(); /// struct melodie;
/// 07-iun-2023-16-22
void FunctiaStrtok();
/// 09-iun-2023-18-32 Sesiunea speciala 2023
void II_3_PrefixPrimaLitera(char s[]); /// in: elemente ... out: elemente elemente ele e
void III_1_Putere_TODO(int n, int &x, int &p); /// n=16 ... x=2, p=4 sau daca n=216 ... x=6, p=3 sau daca n=12 ... x=12 și p=1
void III_2_DiagSecSumVec(); /// in: n=5, apoi 90, 10, 4, 27, 30 ... matricea are -1 in dreapta diag sec si suma vec sus in st<100
/// 12-iun-2023-12-01 Subiectul 3 de pe Live#1  https://youtu.be/wpXOiU3qA9I
void NrMaxDinCifreNr();
void SecventaMaximaElPozitiv();
/// 17-iun-2023-22-03 Subiectul 3 de pe Live#2 https://youtu.be/WAqXitaPk5o
void Matrice1234Ori4();

/******************************************************************************/
int main() {
    Matrice1234Ori4();
    
    return 0;
}

/******************************************************************************/

void Matrice1234Ori4() {
    unsigned int n, k, i, j;
    cin >> n >> k;
    unsigned int a[n * k + 1][n + 1];
    for (i = 3; i <= n * k; i += 3) {
        a[i - 0][1] = i / 3;
        a[i - 1][1] = i / 3;
        a[i - 2][1] = i / 3;
    }
    for (i = 1; i <= n * k; i++) {
        for (j = 2; j <= n; j++) {
            a[i][j] = a[i][j - 1] + 1;
        }
    }
    for (i = 1; i <= n * k; i++) {
        for (j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    /*Varianta din video
    unsigned int a[401][401]; /// in afara main-ului
    unsigned int n, k, i, j, contor = 0;
    cin >> n >> k;
    for (i = 1; i <= n*k; i++) {
        for (j = 1; j <= n; j++) {
            a[i][j] = j + contor;
        }
        if (i % k == 0) {
            contor++;
        }
    }
    */
}

void SecventaMaximaElPozitiv() {
    ifstream fin("bac.in");
    int contor = 0, prim = -1, ultim, nr;
    while (fin >> nr) {
        if (prim == -1 && nr > 0) { /// actualizam prim o singura data
            prim = contor;
        }
        if (nr > 0) { /// actualizam ultim cu fiecare posibilitate
            ultim = contor;
        }
        contor++;
    }
    if (contor - prim > ultim + 1) {
        cout << contor - prim; /// nu mai aduna 1, pentru ca depindem de contor care s-a incrementat la finalul while-ului
    } else {
        cout << ultim + 1;
    }
}

void NrMaxDinCifreNr() {
    ifstream fin("numere.txt");
    unsigned int nr, AP[10] = { 0 };
    int i; /// i nu poate fi natural, conditia i >= 0
    while (fin >> nr) {
        while (nr) {
            AP[nr % 10]++;
            nr /= 10;
        }
    }
    for (i = 9; i >= 0; i--) {
        while (AP[i]) {
            cout << i;
            AP[i]--;
        }
    }
}

void III_2_DiagSecSumVec() {
    int n, i, j;
    cin >> n;
    int a[n][n];
    /// Citim prima linie, construind restul matricei dupa cerinta
    for (j = 0; j < n; j++) {
        cin >> a[0][j];
    }
    for (i = 1; i < n; i++) {
        /// In stanga diagonalei secundare
        for (j = 0; i + j < n; j++) {
            if (a[i - 1][j] + a[i - 1][j + 1] < 100) {
                a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
            } else {
                a[i][j] = (a[i - 1][j] + a[i - 1][j + 1]) % 100; /// ultimele doua cifre a sumei lor
            }
        }
        /// In dreapta diagonalei secundare
        for (j = n - 1; i + j >= n; j--) {
            a[i][j] = -1;
        }
    }
    /// Afisam matricea
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

void III_1_Putere(int n, int &x, int &p) {
    int copie;
    x = 1;
    while (x <= n) {
        p = 0;
        copie = n;
        if (!copie % x) {
            while (!copie && !copie % x) {
                p++;
                copie /= x;
            }
        }
        x++;
    }
}

void II_3_PrefixPrimaLitera(char s[]) {
    for (int k = strlen(s) - 1; k >= 0; k--) {
        if (s[k] == s[0]) {
            for (int i = 0; i <= k; i++) {
                cout << s[i];
            }
        }
        cout << " ";
    }
    /*Functia main
    char sir[] = "elemente"; /// char sir[] = {'e', 'l', 'e', 'm', 'e', 'n', 't', 'e'}
    II_3_PrefixPrimaLitera(sir);
    */
}

void FunctiaStrtok() {
    char s[128] = "Calul sare azi";
    char* cuvant = strtok(s, " ");
    cout << "strtok(s, \" \") = \n"; /// chestia \" afiseaza caracterul "
    while(cuvant != NULL) {
        cout << "token: " << cuvant << "\n";
        cuvant = strtok(NULL, " ");
    }
}

void ProbStruct1() {
    int n, i, j, max;
    cin >> n;
    melodie v[n], copie;
    for (i = 0; i < n; i++) {
        cout << "\nTitlul, interpretul si punctele melodiei " << i + 1 << ": ";
        cin >> v[i].titlu >> v[i].interpret >> v[i].puncte;
    }
    /// BubbleSort ForTheWin
    for (i = 0; i < n; i++) {
        max = 0;
        for (j = 1; j < n - i; j++) {
            if (v[j].puncte > v[max].puncte) {
                max = j;
            }
        }
        copie = v[n - i - 1];
        v[n - i - 1] = v[max];
        v[max] = copie;
    }
    for (i = n - 1; i > n - 5; i--) {
        cout << v[i].titlu << " ";
    }
}

void SimplificareaFractiilor(int a, int b) {
    if (cmmdcRecursiv(a, b) == 1) {
        cout << "Fractie ireductibila";
    } else {
        cout << a / cmmdcRecursiv(a, b) << " / " << b / cmmdcRecursiv(a, b);
    }
}

int cmmdcRecursiv(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return cmmdcRecursiv(b, a % b);
    }
}

void SelectionSort(int v[], int n) {
    int max, maxInd, i, j, aux;
    for (i = 0; i < n - 1; i++) {
        max = v[0];
        maxInd = 0;
        for (j = 1; j < n - i; j++) {
            if (v[j] > max) {
                max = v[j];
                maxInd = j;
            }
        }
        cout << "maxim: " << v[maxInd] << " interschimbat cu: " << v[n - i - 1] << endl;
        aux = v[maxInd];
        v[maxInd] = v[n - i - 1];
        v[n - i - 1] = aux;
    }
    /// Complexitate O(n^2) desi este mai lung decat BubbleSort, este mai eficient pt ca nu face permutari repetate
    /// Debug: {4 3 2 1} i = 0 work ... {1 3 2 4} i = 1, max = 1, maxInd = 0, j = 1, v[1] = 3 (> 1) , maxInd = 1, j = 2 rezolved
}

void BubbleSort(int v[], int lim) {
    int i, j, aux;
    for (i = 0; i < lim - 1; i++) {
        for (j = 0; j < lim - i - 1; j++) {
            if (v[j + 1] < v[j]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    /// Complexitate O(n^2)
}

void InterclasareDoiVectori (int n, int m) {
    int k, i, j, p, a[n], b[m], c[n+m];
    /// Citim cei doi vectori crescator
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (j = 0; j < m; j++) {
        cin >> b[j];
    }
    /// Punem elementele in c prin compararea lui a cu b
    i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    /// Daca raman elemente in a, le punem in c
    if (i < n) {
        for (p = i; p < n; p++) {
            c[k] = a[p];
            k++; /// incrementam k dupa, pentru ca in while il incrementam la final
        }
    }
    /// Daca raman elemente in b, le punem in c
    if (j < m) {
        for (p = j; p < m; p++) {
            c[k] = b[p];
            k++; /// incrementam k dupa, pentru ca in while il incrementam la final
        }
    }
    /// Afisam vectorul c
    for (p = 0; p < k; p++) { /// p mere pana la k, pentru ca il incrementam la final, o data in plus pentru fiecare element
        cout << c[p] << " ";
    }
}

int CautareBinaraClasica(int x) {
    int n;
    cin >> n;
    int i, v[n], stang = 0, drept = n, mij, sol = -1;
    for (i = 0; i < n; i++) {
        cin >> v[i]; /// algoritmul merge daca citim elementele crescator
    }
    
    while (stang <= drept) {
        mij = (stang + drept) / 2;
        if (v[mij] == x) {
            sol = mij;
            break;
        }
        if (x > v[mij]) {
            stang = mij + 1;
        }
        if (x < v[mij]) {
            drept = mij - 1;
        }
    }
    
    return sol;
}

void OrdonImpareleInainteaParelor() {
    ifstream fin("OrdonImpareleInainteaParelor.in");
    int i, n, impar[1001] = {0}, par[1001] = {0}, maxImpar = -1, maxPar = -1;
    
    /// Salvam in vectorii de frecventa numarul de aparitii in sir ale numerelor si maximul imparelor, respectiv parelor
    while (fin >> n) {
        if (n % 2 == 1) {
            impar[n]++;
            if (n > maxImpar) {
                maxImpar = n;
            }
        } else {
            par[n]++;
            if (n > maxPar) {
                maxPar = n;
            }
        }
    }
    
    /// Afisam sirul numerelor impare crescator
    for (i = 1; i <= maxImpar; i += 2) {
        while (impar[i]) {
            cout << i << " ";
            impar[i]--;
        }
    }
    
    /// Afisam sirul numerelor pare crescator
    for (i = 0; i <= maxPar; i += 2) {
        while (par[i]) {
            cout << i << " ";
            par[i]--;
        }
    }
}

void MaximImparMinimParDouaCifre() {
    ifstream fin ("MaximImparMinimParDouaCifre.in");
    int i, n, lim, AP[100] = {0}; /// pentru AP[10] - AP[99], vectorul AP pleaca de la 0 pana la 100 exclusiv ... [0, 100)
    int maxImpar = 0, minPar = 0; /// daca valorile raman atunci afisam NU EXISTA
    
    /// Citim numarul de elemente alaturi de sirul respectiv din fisierul MaximImparMinimParDouaCifre.in
    fin >> lim;
    for (i = 0; i < lim; i++) {
        fin >> n;
        if (n < 100) {
            AP[n]++;
        }
    }
    
    /*/ DEBUG-PASS: afisam vectorul de frecventa
    for (i = 10; i < 100; i++) {
        cout << i << " " << AP[i] << "\n";
    }
    */
    
    /// Cautam maximul impar in vectorul de apartitii, in ordine descrescatoare
    for (i = 99; i > 9; i--) {
        if (AP[i] > 0 && i % 2 == 1) {
            maxImpar = i;
            i = 9; /// out
        }
    }
    
    /// Cautam minimul par in vectorul de apartitii, in ordine crescatoare
    for (i = 10; i < 100; i++) {
        if (AP[i] > 0 && i % 2 == 0) {
            minPar = i;
            i = 100; /// out
        }
    }
    
    if (minPar == 0 && maxImpar == 0) {
        cout << "NU EXISTA";
    } else {
        cout << maxImpar << " " << minPar;
    }
}

void VectorSumaMaximIntersectie(int n) {
    int v[n], i;
    cout << "Introduceti elementele tabloului unidimensional: ";
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    /// Suma elementelor dintr-un Vector
    int suma = 0;
    for (i = 0; i < n; i++) {
        suma += v[i];
    }
    cout << "\nSuma elementelor este: " << suma;
    
    /// Afisarea maximului si a numarului sau de aparitii
    int maxim = -INT_MAX, aparitii = 0;
    for (i = 0; i < n; i++) {
        if (v[i] > maxim) {
            maxim = v[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (v[i] == maxim) {
            aparitii++;
        }
    }
    cout << "\nMaximul este " << maxim << " si apare de " << aparitii << " ori.";
    
    /// Intersectia cu alt vector cu un numar oarecare de elemente.
    int m;
    bool identic = false;
    cout << "\nCate elemente sa aiba cel de al doilea vector? "; cin >> m;
    int w[m]; /// Tabloul unidimensional w are m elemente
    for (int j = 0; j < m; j++) {
        cin >> w[j];
    }
    cout << "\nIntersectia celor doi vectori este: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i] == w[j]) {
                identic = true;
            }
        }
        if (identic) {
            cout << v[i] << " ";
        }
    }
}

void VectorAdaugareStergere(int n) {
    int v[n], Add, pAdd, Del, pDel;
    cout << "Introduceti elementele tabloului unidimensional: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    cout << "\nIntroduceti elementul de adaugat si pozitia sa: "; cin >> Add >> pAdd;
    for (int i = n; i > pAdd; i--) {
        v[i] = v[i - 1]; /// mutam elementele la dreapta
    }
    n++;
    v[pAdd] = Add;
    cout << "Vectorul cu elementul adaugat este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    cout << "\n\nIntroduceti pozitia elementului de sters: "; cin >> pDel;
    for (int i = pDel; i < n - 1; i++) {
        v[i] = v[i + 1]; /// mutam elementele la stanga
    }
    n--;
    cout << "Vectorul cu elementul sters este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

void Fibonacci(int n) {
    int nr0 = 0, nr1 = 1, nr2;
    cout << nr0 << " " << nr1 << " ";
    for (int i = 2; i < n; i++) {
        nr2 = nr1 + nr0;
        cout << nr2 << " ";
        nr0 = nr1;
        nr1 = nr2;
    }
}

void MaximMinim() {
    int n, minim = INT_MAX, maxim = -INT_MAX;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < minim) {
            minim = v[i];
        }
        if (v[i] > maxim) {
            maxim = v[i];
        }
    }
    cout << "\nminim: " << minim << "\nmaxim: " << maxim;
}

int Baza2in10(int n) {
    /// n vine 10000100, 
    int convertit = 0, putere = 1;
    while (n != 0) {
        convertit = putere * (n % 10) + convertit;
        n /= 10;
        putere *= 2;
    }
    return convertit;
    /* n = 10000100
    1   * 0 + 0 = 0
    2   * 0 + 0 = 0
    4   * 1 + 0 = 4
    8   * 0 + 4 = 4
    16  * 0 + 4 = 4
    32  * 0 + 4 = 4
    64  * 0 + 4 = 4
    128 * 1 + 4 = 132
    */
}

int Baza10in2(int n) {
    /// n vine 132%2 da 0 (0) dupa 66%2 da 0 (00) dupa 33%2 da 1 (100) dupa 16%2 da 0 (0100) si tot asa
    int convert = 0, power = 1;
    while (n) {
        convert = (n % 2) * power + convert;
        n /= 2;
        power *= 10;
    }
    return convert;
    /* n = 132
    0 * 1 + 0 = 0 (n=66)
    0 * 10 + 0 = 0 (n=33)
    1 * 100 + 0 = 100 (n=16)
    0 * 1000 + 100 = 100 (n=8)
    0 * 10000 + 100 = 100 (n=4)
    0 * 100000 + 100 = 100 (n=2)
    0 * 1000000 + 100 = 100 (n=1)
    1 * 10000000 + 100 = 10000100 (n=0)
    */
}

void FactoriPrimi(int n) {
    /// Luam divizorul de la 2 si de fiecare data in care imparte numarul, puterea creste cu 1. Astefl obtinem divizorul si puterea sa. Pentru ca la final sa nu mai afisam * la final, vom caclula produsul dintre ultimii divizori la puterile respective si divizorul care urmeaza. Daca acest prdus este n, inseamna ca urmatorul divizor e ultimul si nu mai afisam *. Cum calculam divizorul care urmeaza?
    int putere = 0, divizor = 2, DivizorInmultit = 1, UltimDivizor, copieN = n;
    while (n > 1) {
        if (n % divizor == 0) {
            /// Calcularea divInmultit, adica urmatorului divior pentru ca daca el inmultit cu prdusul divizorilor anteriori este n nu mai afisam "*"" la final
            if (putere == 0) {
                DivizorInmultit *= 1;
            } else if (putere == 1) {
                DivizorInmultit *= divizor;
            } else {
                for (int i = 1; i <= putere; i++) {
                    DivizorInmultit *= divizor;
                }
            }
            /// Calcularea divizorului si puterii sale
            putere = 0;
            UltimDivizor = 1;
            while (n % divizor == 0) {
                n /= divizor;
                putere++;
                UltimDivizor *= divizor;
            }
            if (copieN == DivizorInmultit * UltimDivizor) {
                cout << divizor << "^" << putere;
            } else if (putere != 0 && putere == 1) {
                cout << divizor << " * ";
            } else {
                cout << divizor << "^" << putere << " * ";
            }
        }
        divizor++;
    }
    cout << "\n" << copieN << " - " << DivizorInmultit << " * " << UltimDivizor;
} /// De rezolvat finalul afisarii: 12 = 2^2 * 3 *

void DivizoriProprii(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
} /// divizor <= numar / 2

bool ePrimRecursiv(int n, int divizor) {
    /// La primul apel in care nu returnam FALSE crestem divizorul de la 2 la 3, dupa care il incrementam cu 2 DIV={2, 3, 5, 7...}
    if (n == 2) {
        return true;
    }
    if (n < 2) {
        return false;
    }
    if (n % divizor == 0) {
        return false;
    }
    if (divizor*divizor > n) {
        return true;
    }
    if (divizor == 2) {
        return ePrimRecursiv(n, 3);
    }
    return ePrimRecursiv(n, divizor + 2);
    
} /// divizor * divizor > numar

bool ePrim(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true; /// Daca nu gaseste un numar: negativ, diferit de 2, ce se imparte la 2, 3, ... sqer(n) atunci sare de celelate if-uri si lucrul acesta inseamna ca indeplineste conditiile unui numar prim (strict mai mare decat 2, fara divizori proprii, divizorii improprii fiind 1 si n, numarul in sine)
    
} // divizor * divizor <= numar