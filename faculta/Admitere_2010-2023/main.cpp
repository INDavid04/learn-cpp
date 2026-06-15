/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <set>
#include <math.h>

using namespace std;

/// 2010-INFO - septembrie
void SumOfSquaredDifferences();
void LinearSumOfSquaredDifferences();
/// 2010-MATE - septembrie
void a2010smKElemCuSumaDivCuN();
void a2010smKElemCuSumaDivCuNLiniar();
/// 2010-INFO
bool isInH(int a);
void printFirstNInH(int n);
void printFirstNInHLinear(int n);
/// 2010-MATE
bool canBeGenerated(const vector<int>& permutation, int m);
/// 2011-INFO
int productOfSums(const vector<int>& partition);
int findMaxProduct(const vector<int>& v);
int findMaxProducEfficient(const vector<int>& v);
/// 2011-MATE
vector<vector<double>> calculateDistances(vector<vector<double>>& x, vector<vector<double>>& y);
vector<vector<double>> calculateOrthogonalDistances(vector<vector<double>>& x, vector<vector<double>>& y);
/// 2012-INFO
void a2012info();
void b2012info();
void c2012info();
void d2012info();
/// 2012-MATE
void a2012mate();
/// 2013-INFO
/// 2013-MATE
/// 2014-INFO
/// 2014-MATE
/// 2015-INFO
/// 2015-MATE
/// 2016-INFO
/// 2016-MATE
/// 2017-INFO
/// 2017-MATE
/// 2018-INFO
/// 2018-MATE
/// 2019-INFO
/// 2019-MATE
/// 2022-INFO
/// 2022-MATE
/// 2023-INFO
/// 2023-MATE

void a2012mate() {
    /*
    2024-05-18-22-10
    Observam ca suma diametrelor este 10 (2 * (2 + 1 + 2) = 2 * 5 = 10). Daca am scadea din 10, numarul 0.343, obtinem 9.656.
    */
    float r, suma = 0, n, diferenta;
    cin >> n;
    diferenta = (n * 100 + (n + 1) * 10 + n) / 1000;
    for (int i = 0; i < n; i++) {
        cin >> r;
        suma += r;
    }
    suma *= 2;
    suma -= diferenta;
    cout << suma;
}

void d2012info() {
    /*
    d) solutie liniara pentru c)
    -> Pentru o solutie liniara, trecem o singura data prin y si numaram de cate ori se afla un numar, folosim un vector.
    */
    int n, i, identic = 1;
    cin >> n;
    int y[n];
    for (i = 0; i < n; i++) {
        cin >> y[i];
    }
    int ap[n] = {0};
    for (i = 0; i < n; i++) {
        ap[y[i]]++;
    }
    for (i = 0; i < n; i++) {
        if (ap[i] > i) {
            identic = 0;
            cout << "\nNU";
        }
    }
    if (identic) {
        cout << "\nDA";
    }
}

void c2012info() {
    /*
    c) n din N stelat dat, n nr: y1, ..., yn. Afisam DA daca exista permutarea a y1...yn identica cu primii n termeni (x) sau NU in caz contrar
    -> Sortam cele n numere citite si verificam daca pentru cele n valori, se verifica relatia xi = yi, i = 1...n.
    */
    int n, i, j, l = 1, copie, cnt = 0;
    cin >> n;
    copie = n;
    int x[n], y[n];
    for (i = 0; i < n; i++) {
        cin >> y[i];
    }
    /// Sirul x, cel initial
    while (n) {
        i = 1;
        while (n != 0 && i <= l) {
            x[cnt++] = l;
            i++;
            n--;
        }
        l++;
    }
    /// Sortarea sirului y
    n = copie;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (y[i] > y[j]) {
                int aux = y[i];
                y[i] = y[j];
                y[j] = aux;
            }
        }
    }
    /// Verificarea xi = yi
    bool suntEgali = 1;
    for (i = 0; i < n; i++) {
        if (x[i] != y[i]) {
            suntEgali = 0;
            i = n;
        }
    }
    if (suntEgali) {
        cout << "\nDA";
    } else {
        cout << "\nNU";
    }
}

void b2012info() {
    /*
    b) n din N stelat dat/citit, de afisat in O(1) al n-lea termen (n = 3, afisam 2)
    -> Folosim formula 1 + 2 + ... + n = (n + 1) / 2. Observam ca pana cand, n nu este mai mare decat n*(n+1)/2, se va modifica valoarea ceruta, al n-lea terment. De exemplu, este 1 pala la 1, 2 pana la 3, 3 pana la 6, 4 pana la 10 si asa mai departe. Algoritmul are un numar finit de pasi, nu depinde de n, asadar are complexitatea O(1)
    */
    int n, x, suma = 0, contor = 1, caut = 1;
    cin >> n;
    while (caut) {
        suma += contor;
        if (n >= suma) {
            x = contor;
        } else {
            caut = 0;
        }
        contor++;
    }
    cout << x;
}

void a2012info() {
    /*
    Fie sirul x = 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, ...
    a) n din N stelat, de afisat primii n termeni, de exemplu: pentru n = 3 afisam 1 2 2
    -> Luam o limita l, initializata cu 1. Cat timp numarul dat, n, este nenul vom afisa, cu ajutorul unei bucle repetitive, termenii din sirul x. Dupa aceasta, incrementam limita.
    */
    int n, l = 1, i;
    cin >> n;
    while (n) {
        i = 1;
        while (n !=0 && i <= l) {
            cout << l << " ";
            i++;
            n--;
        }
        l++;
    }
}

vector<vector<double>> calculateOrthogonalDistances(vector<vector<double>>& x, vector<vector<double>>& y) {
    int n = x.size();
    int m = y.size();
    vector<vector<double>> distances(n, vector<double>(m, 0.0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            double dist = 0.0;
            for (int k = 0; k < x[i].size(); ++k) {
                dist += x[i][k] * y[j][k];
            }
            distances[i][j] = dist;
        }
    }

    return distances;
}

vector<vector<double>> calculateDistances(vector<vector<double>>& x, vector<vector<double>>& y) {
    int n = x.size();
    int m = y.size();
    vector<vector<double>> distances(n, vector<double>(m, 0.0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            double dist = 0.0;
            for (int k = 0; k < x[i].size(); ++k) {
                dist += pow(x[i][k] - y[j][k], 2);
            }
            distances[i][j] = dist;
        }
    }

    return distances;
}

int findMaxProducEfficient(const vector<int>& v) {
    int sum = 0;
    int n = v.size();

    // Calculăm suma tuturor elementelor din vector
    for (int num : v) {
        sum += num;
    }

    // Calculăm produsul sumelor elementelor din fiecare subvector (toate elementele sunt 1)
    int product = (sum / 2) * (sum / 2);

    return product;
}

int productOfSums(const vector<int>& partition) {
    int product = 1;
    for (int num : partition) {
        product *= num;
    }
    return product;
}

int findMaxProduct(const vector<int>& v) {
    int n = v.size();
    int maxProduct = 0;

    // Generăm toate partițiile posibile ale vectorului
    for (int i = 1; i <= n; ++i) { // Numărul de subvectori într-o partiție
        for (int j = 0; j < n - i + 1; ++j) { // Poziția de start a primei secțiuni
            vector<int> partition;
            for (int k = j; k < j + i; ++k) { // Creăm subvectorul curent
                partition.push_back(v[k]);
            }
            // Calculăm produsul sumelor elementelor din subvectorul curent și actualizăm maximul
            maxProduct = max(maxProduct, productOfSums(partition));
        }
    }

    return maxProduct;
}

/// bool canBeGenerated(const vector<int>& permutation, int m) {
    /*
    2024-04-20 17:21
    Fie S(m) un sistem de triaj cu o stiva de dimensiune m si doua operatii: 
    1. Se introduce in stiva un numar citit de la tastatura
    2. Se afiseaza la consola un numar extras din stiva nevida, oricare dintre cele doua operatii putand fi aplicata ori de cate ori este posibil. 
    Prin citirea de la tastatura a numerelor 1, . . . , n, in aceasta ordine, cu n ≤ m si aplicarea operatiilor descrise mai sus, S(m) poate genera permutari cu n elemente, dar nu toate.
    a) Dati exemplu de permutare cu 3 elemente care nu poate fi generata de S(m), (n = 3, m ≥ 3).
    b) Fie p o permutare arbitrara cu n ≤ 100 elemente, data. Sa se scrie un program intr-unul dintre limbajele studiate in liceu (Pascal/C/C++) care sa decida daca p poate fi generata de S(m).
    */
    /*
    int n = permutation.size();
    stack<int> stiva;
    int index = 0; // indexul elementului din permutare
    for (int i = 1; i <= n; ++i) {
        // Introducem în stivă elementele până când elementul i este la începutul stivei
        while (stiva.empty() || stiva.top() != permutation[index]) {
            if (stiva.size() == m) // dacă stiva este plină, nu se poate genera permutarea
                return false;
            stiva.push(i);
            ++index;
        }
        // Extragem elementul i din stivă
        if (!stiva.empty() && stiva.top() == permutation[index]) {
            stiva.pop();
            ++index;
        }
    }
    return true; // permutarea poate fi generată
    */
/// }

void printFirstNInHLinear(int n) {
    /*
    Fie multimea de numere H = {2^x * 3^y * 5^z | x, y, z ∈ N}. Sa se rezolve urmatoarele cerinte intr-unul dintre limbajele de programare studiate in liceu (Pascal/C/C++):
    b) Dandu-se un numar natural n ≤ 100, sa se afiseze primele n numere ale multimii H, in ordine crescatoare. De exemplu, pentru n = 8 trebuie afisate numerele: 1, 2, 3, 4, 5, 6, 8, 9.
    c) Dati o solutie in timp O(n), liniar in functie de n, pentru cerinta de la punctul b). Justificati.
    */
    vector<long long> H(n);
    H[0] = 1;
    int index2 = 0, index3 = 0, index5 = 0;
    long long nextMultipleOf2 = 2, nextMultipleOf3 = 3, nextMultipleOf5 = 5;
    for (int i = 1; i < n; ++i) {
        long long nextNum = min(nextMultipleOf2, min(nextMultipleOf3, nextMultipleOf5));
        H[i] = nextNum;
        if (nextNum == nextMultipleOf2) {
            ++index2;
            nextMultipleOf2 = H[index2] * 2;
        }
        if (nextNum == nextMultipleOf3) {
            ++index3;
            nextMultipleOf3 = H[index3] * 3;
        }
        if (nextNum == nextMultipleOf5) {
            ++index5;
            nextMultipleOf5 = H[index5] * 5;
        }
    }
    cout << "Primele " << n << " numere din multimea H sunt:\n";
    for (auto num : H) {
        cout << num << " ";
    }
    cout << endl;
}

void printFirstNInH(int n) {
    /*
    Fie multimea de numere H = {2^x * 3^y * 5^z | x, y, z ∈ N}. Sa se rezolve urmatoarele cerinte intr-unul dintre limbajele de programare studiate in liceu (Pascal/C/C++):
    b) Dandu-se un numar natural n ≤ 100, sa se afiseze primele n numere ale multimii H, in ordine crescatoare. De exemplu, pentru n = 8 trebuie afisate numerele: 1, 2, 3, 4, 5, 6, 8, 9.
    */
    set<long long> H;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    pq.push(1);
    while (H.size() < n) {
        long long current = pq.top();
        pq.pop();
        H.insert(current);
        pq.push(current * 2);
        pq.push(current * 3);
        pq.push(current * 5);
    }
    cout << "Primele " << n << " numere din multimea H sunt:\n";
    for (auto num : H) {
        cout << num << " ";
    }
    cout << endl;
}

bool isInH(int a) {
    /*
    2024-04-10 16:00
    Fie multimea de numere H = {2^x * 3^y * 5^z | x, y, z ∈ N}. Sa se rezolve urmatoarele cerinte intr-unul dintre limbajele de programare studiate in liceu (Pascal/C/C++):
    a) Sa se scrie o procedura care pentru un numar natural a ≤ 32000 decide daca aapartine multimii H. Sa se determine complexitatea timp a acestei proceduri in functie de a.
    */
    while (a % 2 == 0) a /= 2;
    while (a % 3 == 0) a /= 3;
    while (a % 5 == 0) a /= 5;
    return a == 1;
}

void a2010smKElemCuSumaDivCuNLiniar() {
    /// Folosim tehnica sumei prefixelor
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    unordered_map<int, int> prefixSum;
    prefixSum[0] = -1;
    int suma = 0;

    for (int i = 0; i < n; ++i) {
        suma = (suma + v[i]) % n;
        if (suma < 0) {
            suma += n;
        }
        if (prefixSum.find(suma) != prefixSum.end()) {
            int k = i - prefixSum[suma];
            cout << k << " ";
            for (int j = prefixSum[suma] + 1; j <= i; ++j) {
                cout << j + 1 << " ";
            }
            break; /// echivalent cu return 0
        }
        prefixSum[suma] = i;
    }
    cout << 0;
}

void a2010smKElemCuSumaDivCuN() {
    /*
    2024-04-02 21:30
    Fie n <= 100 un numar natural nenul si un vector de n numere intregi cuprinse intre -32000 si 32000. Sa se scrie un program care va afisa un k cuprins intre 1 si n si k indici 1 <= i1 < i2 < ... < ik <= n astfel incat n divide pe xi1 + xi2 + ... + xik sau va afisa 0 in cazul in care nu exista un astfel de k.
    */
    int n, afisat = 0;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int k = 1; k <= n; ++k) {
        for (int i = 0; i <= n - k; ++i) {
            int suma = 0;
            for (int j = i; j < i + k; ++j) {
                suma += v[j];
            }
            if (suma % n == 0) {
                cout << k << " ";
                for (int j = i; j < i + k; ++j) {
                    cout << j + 1 << " ";
                }
                afisat = 1; /// break sau return 0
            }
        }
    }
    if (!afisat) {
        cout << 0;
    }
    /*
    /// Cautam fiecare suma posibila si verificam daca este divizibila cu 10 (s%10==0). In caz afirmativ, oprim cautarea, salvam i si j in capatstang si capat, k fiind incrementat cu 1 la fiecare comparare a sumei. Prima bucla repetitiva cu pas de la 1 la n-1 este pentru a calcula suma avand o distanta variabila, de la 1 la n-1, intre primul si al doilea element TODO: intre fiecare element.
    int n, v[101], suma=0, i, j, pas, capatstang, capatdrept, k;
    cin >> n; 
    for (i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (pas = 1; pas <= n-1; pas++) {
        for (i = 1; i <= n-1; i++) {
            suma = v[i];
            k = 1;
            for (j = pas+i; j <= n; j++) {
                suma += v[j];
                k++;
                if (suma % 10 == 0) {
                    capatstang = i;
                    capatdrept = j;
                    i = n;
                    j = n + 1;
                    pas = n; /// pentru a iesi din bucle
                }
            }
        }
    }
    cout << k;
    for (i = capatstang; i <= capatdrept; i++) {
        cout << " " << v[i];
    }
    */
}

/******************************************************************************/

int main() {
    LinearSumOfSquaredDifferences();

    return 0;
}

/******************************************************************************/

void LinearSumOfSquaredDifferences() {
    /*
    b) Exista un algoritm care sa evalueze expresia S in timp O(n) in raport cu dimensiunea n a vectorului v? Daca da, sa se implementeze acest algoritm sub forma de program.
    */
    /// Dorim sa calculam o expresie matematica: o suma de diferenta la patrat. Variabila primaSuma retine cea de a doua suma din paranteza la patrat, astfel: adunam toate elementele din vectorul v. Mai mult, putem imparti primaSuma la n pentru a nu repeta de fiecare data acelasi calcul. In cele din urma, pentru fiecare element, il scadem cu primaSuma si rezultatul il inmultim cu numarul insusi. La final de tot, mai impartim inca o data la n si afisam rezultatul.
    int n, i, v[101], primaSuma = 0, suma = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> v[i];
        primaSuma += v[i];
    }
    primaSuma /= n;
    for (i = 0; i < n; i++) {
        suma += (v[i] - primaSuma) * (v[i] - primaSuma);
    }
    suma /= n;
    cout << suma;
}

void SumOfSquaredDifferences() {
    /*
    2010INFO 2024-04-03 14:15
    Fie n ≤ 100 un numar natural nenul si x1, . . . , xn un vector v de numere naturale cel mult egale cu 32000.
    a) Sa se scrie un program care sa evalueze expresia S = 1/n suma de la 1 la n din (xi - 1/n suma de la 1 la n din xi)^2
    */
    /// Versiunea mea implementata pe foaia de examen la punctul a
    int n, i, j, sum = 0;
    cin >> n;
    int v[n];
    for (i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (i = 1; i <= n; i++) {
        sum += ((1/n)*v[i] + sum)*((1/n)*v[i] + sum);
        cout << sum << "\n";
        for (j = 1; j <= n; j++) {
            sum += ((1/n)*v[j] + sum)*((1/n)*v[j] + sum);
            sum -= 2*(((1/n)*v[i] + sum))*((1/n)*v[j] + sum);
        }
    }
    cout << sum;
}