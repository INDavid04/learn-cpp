#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

/// 25-mai-2023-22-47
void baza10in16(int n); /// in: 243 ... out: F3
void combinatii(int n); /// in: 4 ... out: 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1
/// 07-iun-2023-20-10-functii
int SumaFactorialeCifre(int n); //1 in: 231 ... out: 9 adica 2! + 3! + 1!
bool EsteInBaza(int n, int b); //2 in: 100 2 ... out: 1, de ex: baza 2 foloseste 0 si 1, baza 10 foloseste 0, 1, 2, ... 9
int SumPrimCifESumRest(int n, int v[], int &sum); //3 in: 5 125 624 44 2110 23 ... out: 2778, 624+44+2110, prima cif e suma rest
void SirPrimeCuY(int n, int y, int x[], int p[], int &np); //4 in: n=5, y=3, x={9, 11, 2, 33, 7} ... p={11, 2, 7} si np=3
/// 08-iun-2023-17-29-functii recursive
void functia9(int a, int b); //9 in: 1 3 ... out: 1 2 3 3 2 3 3
/// 15-iun-2023-18-21
void egale(int n, int x[], int y[], int &eg);
void interschimbareLinii(int n, int m, int linie1, int linie2, int a[40][40]);
struct punct { float x, y; };
float distanta(punct A, punct B) { return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y)); }
void MinMaxSum(unsigned int m, int v[], int &mini, int &maxi, int &sum);
void interschimbareVariabile(int &x, int &y);
/// 23-iun-2023-15-58
void ArieTriunghiSauEroare(unsigned a, unsigned b, unsigned c);
unsigned Suma3nMinus2(unsigned n); /// f(2) = f(1) + 4 = 1 + 4 = 5
unsigned Suma2nMinus1(unsigned n); /// f(2) = f(1) + 3 = 1 + 3 = 4

int main() {
    cout << Suma2nMinus1(2);
    
    return 0;
}

unsigned Suma2nMinus1(unsigned n) {
    if (n == 1) {
        return 1;
    } else {
        return Suma2nMinus1(n - 1) + 2*n - 1;
    }
    /// Oare mere sa calculez prin formula 2*n + 1?
}

unsigned Suma3nMinus2(unsigned n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return Suma3nMinus2(n - 1) + 3*n - 2;
    }
}

void ArieTriunghiSauEroare(unsigned a, unsigned b, unsigned c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Nu exista niciun triunghi care se poate calcula. Date incorecte!";
    } else {
        float semi = (a + b + c) / 2;
        cout << sqrt(semi * (semi - a) * (semi - b) * (semi - c));
        
    }
}

void interschimbareVariabile(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
    /*Functia main
    int a, b, c;
    cin >> a >> b >> c;
    /// am plecat de aici: daca a > b atunci switch(a,b); daca, in plus, b > c atunci switch(b,c);
    if (a > b) {
        if (b > c) {
            interschimbareVariabile(b, c);
        }
        /// cout << "stage1a: " << a << " " << b << "\n";
        interschimbareVariabile(a, b); /// 312 132 sau: 321 231 rezolvat cu if-ul de sus b>c interschimba b si c
        if (b > c) {
            /// cout << "stage1b: " << b << " " << c << "\n";
            interschimbareVariabile(b, c); /// 132 123
        }
    } else {
        if (b > c) {
            /// cout << "stage2: " << b << " " << c << "\n";
            interschimbareVariabile(b, c); /// 132 123
            if (a > b) {
                interschimbareVariabile (a, b); /// 231 213 123
            }
        }
    }
    cout << a << " " << b << " " << c;
    */
}

void MinMaxSum(unsigned int m, int v[], int &mini, int &maxi, int &sum) {
    int i;
    mini = v[0];
    maxi = v[0];
    sum = v[0]; /// nu de la 0, pentru ca pornim for-ul de la 1
    for (i = 1; i < m; i++) {
        if (v[i] < mini) {
            mini = v[i];
        }
        if (v[i] > maxi) {
            maxi = v[i];
        }
        sum += v[i];
    }
    /*Functia main
    int i, m, mini, maxi, sum;
    cin >> m;
    int v[m];
    for (i = 0; i < m; i++) {
        cin >> v[i];
    }
    MinMaxSum(m, v, mini, maxi, sum);
    float media = (float) (sum - mini - maxi) / (float) (m - 2);
    cout << media;
    /// cout << "\n(" << sum << " - " << mini << " - " << maxi << ") / " << m - 2;
    */
}

void interschimbare(int n, int m, int linie1, int linie2, int a[40][40]) {
    int j, aux;
    for (j = 0; j < m; j++) {
        aux = a[linie1][j];
        a[linie1][j] = a[linie2][j];
        a[linie2][j] = aux;
    }
    /*Functia main
    int n, m, l1, l2;
    cin >> n >> m;
    int i, j, a[40][40]; /// nu mere a[n][m] in head-ul functiei interschimbare tre sa ii dau valori identice ca in main
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> l1 >> l2;
    interschimbare(n, m, l1, l2, a);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    */
}

void egale(int n, int x[], int y[], int &eg) {
    int i = 0, j = 0;
    eg = 0;
    while (i < n && j < n) {
        /// cout << "Compar " << x[i] << " cu " << y[j] << "\n";
        if (x[i] == y[j]) {
            eg++;
            i++;
            j++;
        } else if (x[i] < y[j]) {
            i++;
        } else {
            j++;
        }
        /// cout << i << " si " << j << "\n";
    }
    /*
    1 3 5 7
    1 2 3 7
    i   j   x[i]    x[j]    eg
    0   0   1       1       1
    1   1   3       2
        2   3       3       2
    2   3   5       7
    3   3   7       7       3
    Functia main
    int i, n, x[9], y[9], eg = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (i = 0; i < n; i++) {
        cin >> y[i];
    }
    egale(n, x, y, eg);
    cout << eg;
    */
}

void functia9(int a, int b) {
    /// pentru a = 1 si b = 3, se apeleaza f(1, 3) care afiseaza 1, apeland f(2, 3) care afiseaza 2, apeland f(3, 3) care afiseaza 3. Acum, prin backtracking, f(2, 3) afiseaza 3, respectiv 2 3 si, intr-un final 3 
	for(int i = a; i <= b; i++) { 
		cout << i << " ";
		functia9(i + 1, b);
		/// cout << "\n";
	}
	/*Tabel
	a   b   i   out
	1   3   1   1
	2       2   1 2
	3       3   1 2 3
	2       3   1 2 3 3
	1       2   1 2 3 3 2
	3       3   1 2 3 3 2 3
	1       3   1 2 3 3 2 3 3
	*/
}

void SirPrimeCuY(int n, int y, int x[], int p[], int &np) {
    np = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % y != 0) {
            p[np] = x[i];
            np++;
        }
    }
    /*Functia main()
    int vector[] = {9, 11, 2, 33, 7};
    int Prime[5], nrPrime;
    SirPrimeCuY(5, 3, vector, Prime, nrPrime);
    for (int i = 0; i < nrPrime; i++) {
        cout << Prime[i] << " ";
    }
    cout << "\n" << nrPrime;
    */
}

int SumPrimESumRest(int n, int v[], int &sum) {
    int i, suma, copie;
    sum = 0;
    for (i = 0; i < n; i++) {
        suma = 0;
        copie = v[i];
        while (copie > 9) {
            suma += copie % 10;
            copie /= 10;
        }
        if (suma == copie) {
            sum += v[i];
        }
    }
    if (!sum) {
        sum = -1;
    }
    return sum;
    /*Functia main()
    int vector[] = {5, 125, 624, 44, 2110, 23};
    int SUMA;
    cout << SumPrimESumRest(5, vector, SUMA);
    cout << "\nSuma este " << SUMA;
    */
}

bool EsteInBaza(int n, int b) {
    while (n) {
        if (n % 10 >= b) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int SumaFactorialeCifre(int n) {
    int cifra, factorial, result = 0;
    while (n) {
        if (n % 10) {
            cifra = n % 10;
        } else {
            cifra = 1;
        }
        factorial = 1;
        while (cifra > 1) {
            factorial *= cifra;
            cifra--;
        }
        n /= 10;
        result += factorial;
    }
    return result;
}

void combinatii(int n) {
    if (n == 1) {
        cout << n << " ";
    } else {
        combinatii(n - 1);
        cout << n << " ";
        combinatii(n - 1);
    }
}

void baza10in16(int n) {
    if (n) {
        baza10in16(n/16);
        if (n % 16 < 10) {
            cout << n % 16;
        } else {
            cout << (char)('A' + n % 16 - 10);
        }
    }
}

