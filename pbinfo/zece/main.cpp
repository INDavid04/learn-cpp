#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct fractie { unsigned int numarator, numitor; };
struct vector { int poz, val; };

/// 2023-05-22 19:15
unsigned int cmmdc(int a, int b);
void FractiiMax(); /// foloseste cmmdc() si struct fractie
void normalizare(); /// foloseste struct vector TODO
/// 2023-05-31 19:27
int Partition(int v[], int start, int end);
void QuickSort(int v[], int start, int end);
/// 2023-05-26 18:58
int FSumVecMin(int v[], int n, int m); /// in: n=6, x= (12, 7, 6, 3, 8, 5), m=4 ... out: 21 adica 3+5+6+7
/// 2023-06-05 14:26
void FNume(char s[], char id[]); /// BacNume #4184
void Pozitii(); /// in: oasele sunt fragile ... out: 4
void Vocale(); /// in: romancier ... out: rOmAncIEr
void Initiale(); /// in: mare frig   rosu ... out: MarE FriG   RosU
void prosir(); /// in: ana are   multe   mare si o gutuie. ... out: an5 ar5   mult5   mar5 s5 5 gutui5.
/// 2024-03-02
void Prefixe(); /// in: pro ... out: pro pr p pro ro o
bool prim(unsigned int n); /// in: daca n este prim ... out: 1 sau daca n nu e prim ... out: 0
unsigned int sum_div(unsigned int n); /// in: 4 ... out: 7 which is  1 + 2 + 4
void sum_div_prim(int n, int &sum); /// in: 4 .. out: 2 because 2 is only prime number
void sum_cif (unsigned int n, unsigned int &sum); /// in: 23 ... out: 5 beacuse is 2 + 3

/******************************************************************************/

int main() {
    unsigned int result;
    sum_cif(3, result);
    cout << result;
    
    return 0;
}

/******************************************************************************/

void sum_cif (unsigned int n, unsigned int &sum) {
    /// 13:02 - 13:13 /// First, we add to the sum the last digit of the number. If the number without that digit is not zero we repeat the process until the number becomes zero.
    sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
}

void sum_div_prim(int n, int &sum) {
    /// 12:03 - 12:59 /// We take any number between 2 and sqrt(n) exculsive because we want the sum of prime divisors. If this number is prime we can add him to the sum - 80p. For 100p we must divide the number in prime factors.
    int d = 2;
    sum = 0;
    while (n > 1) {
        if (n % d == 0) {
            sum += d;
            while (n % d == 0) {
                n /= d;
            }
        }
        d++;
        if (n > 1 && d * d > n) { /// d * d > n means that we pass over all possible divisors exept with n
            d = n;
        }
    }
    /*
    bool ePrim;
    sum = 0;
    for (unsigned int d = 2; d <= n /2; d++) {
        if (n % d == 0) {
            ePrim = 1;
            for (unsigned int i = 2; i * i <= d; i++) {
                if (d % i == 0) {
                    ePrim = 0;
                }
            }
            if (ePrim) {
                sum += d;
            }
        }
    }
    if (n != 1) {
        ePrim = 1;
        for (unsigned int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ePrim = 0;
            }
        }
        if (ePrim) {
            sum += n;
        }
    }
    */
}

unsigned int sum_div(unsigned int n) {
    /// 11:28 - 11:58 /// If the problem exclude 1 and n as divisors we can increment the initalized with zero sum with that numbers which divide n perfectly. Else, we should add to this sum the 1 and n, to have the sum of all divisors.
    if (n == 0 || n == 1) {
        return n;
    }
    unsigned int sum = 1 + n; /// if we want all divisors, else sum = 0
    for (unsigned int d = 2; d <= n / 2; d++) {
        if (n % d == 0) {
            sum += d;
        }
    }
    /*
    /// Another way, more efficient
    unsigned int d, sum = 0;
    for (d = 1;  d * d < n; d++) {
        if (n % d == 0) {
            sum += d + n / d; /// e.g; d = 1 => sum += 1 + n
        }
    }
    if (d * d == n) { /// If it is perfect square we add the square root of n
        sum += d;
    }
    */
    return sum;
}

bool prim(unsigned int n) {
    /// 11:00 - 11:20 /// If the number can be divided in any number between 2 and n/2 (optimized sqrt(n)) we must return 0, else return 1. Execptions are 0 and 1 where we must return 0.
    if (n == 0 || n == 1) {
        return 0;
    }
    for (unsigned int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*Siruri de caractere**********************************************************/

void Prefixe() {
    /// 10:20 - 10:55 /// If we take a variable from n to 1 and show the string until that variable we obtain the prefixes. If we take a variable from 0 to n - 1 and show the the strig starting with that position we obtain the suffixes.
    int n, i, j;
    char s[10];
    cin >> s;
    n = 0;
    for (i = 0; s[i] != '\0'; i++) {
        n++;
    }
    /// Prefixes
    for (i = n; i > 0; i--) {
        for (j = 0; j < i; j++) {
            cout << s[j];
        }
        cout << "\n";
    }
    /// Suffixes
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            cout << s[j];
        }
        cout << "\n";
    }
}

void prosir() {
    ifstream fin("prosir.in");
    ofstream fout("prosir.out");
    char s[256];
    fin.getline(s, 256);
    int i, n = strlen(s);
    for (i = 0; i < n - 1; i++) {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '.')) {
            s[i] = '5';
        }
    }
    fout << s;
}

void Initiale() {
    /// 21:10 - 21:54 /// The first and the last letter will be incremented with 32. If we have a space characher and if we have no space on the left or if we have no space on the right we increment with 32 also.
    char s[256];
    int i = 0;
    cin.get(s, 256);
    while (s[i] != '\0') {
        if (i == 0 || s[i + 1] == '\0' || s[i] != ' ' && (s[i + 1] == ' ' || s[i - 1] == ' ')) {
            s[i] -= 32;
        }
        i++;
    }
    cout << s;
    /*
    char s[255];
    cin.get(s, 255);
    int i, n = strlen(s);
    s[0] -= 'a' - 'A';
    s[n - 1] -= 32;
    for (i = 0; i < n; i++) {
        if (s[i - 1] == ' ' || s[i + 1] == ' ') {
            s[i] -= 32;
        }
    }
    cout << s;
    */
}

void Vocale() {
    char s[21];
    cin.get(s, 21);
    int i, n = strlen(s);
    for (i = 0; i < n; i++) {
        if (s[i] == 'a') {
            cout << 'A';
        } else if (s[i] == 'e') {
            cout << 'E';
        } else if (s[i] == 'i') {
            cout << 'I';
        } else if (s[i] == 'o') {
            cout << 'O';
        } else if (s[i] == 'u') {
            cout << 'U';
        } else {
            cout << s[i];
        }
    }
    
    /*
    int i, n;
    n = strlen(s);
    for (i = 0; i < n; i++) {
        if (strchr("aeiou", s[i])) {
            s[i] -= 32;
        }
    }
    cout << s;
    */ /// 70 puncte din cauza cin.get(s), trebuie cin >> s;
}

void Pozitii() {
    /// Verificam daca o vocala s[i] este incojurata de consoane s[i - 1] si s[i + 1]. Cond Suplimentara s[i + 1] != ' '
    char s[255];
    cin.get(s, 225);
    int i, n, contor = 0;
    char vocale[10] = "aeiou", consoane[30] = "qwrtypsdfghjklzxcvbnm";
    n = strlen(s);
    for (i = 1; i < n - 1; i++) {
        /// !strchr("aeiou", s[i - 1]) && strchr("aeiou", s[i]) && !strchr("aeiou", s[i + 1]) && s[i + 1] != ' '
        if (strchr(consoane, s[i - 1]) && strchr(vocale, s[i]) && strchr(consoane, s[i + 1])) {
            contor++;
        }
    }
    cout << contor;
    
    /*
    int i, j, n, contor;
    i = 0, n = strlen(s), contor = 0;
    while (i < n - 1) {
        if (strchr("aeiou", s[i]) == NULL) {
            j = i + 1;
            cout << (j < n && strchr("aeiou", s[j]) != NULL);
            while (j < n && strchr("aeiou", s[j]) != NULL) {
                cout << "debug: " << s[i] << " si " << s[j] << "\n";
                contor++;
                j++;
                cout << "debug: " << contor << " si " << j << "\n";
            }
        }
        i = j;
    }
    cout << contor;
    */ /// afiseaza 0
}

void FNume(char s[], char id[]) {
    strcpy(id, strchr(s, ' ') + 1);
    strcat(id, "2022");
    cout << id;
}

/*Functii**********************************************************************/

int FSumVecMin(int v[], int n, int m) {
    int i, suma = 0;
    /// Quicksort + suma primelor m elemente din vector
    QuickSort(v, 0, n - 1);
    for (i = 0; i < m; i++) {
        suma += v[i];
    }
    
    return suma;
}
void QuickSort(int v[], int start, int end) {
    int pivindex;
    if (start < end) {
        pivindex = Partition(v, start, end);
        QuickSort(v, start, pivindex - 1);
        QuickSort(v, pivindex + 1, end);
    }
}
int Partition(int v[], int start, int end) {
    int pivot = v[end];
    int pivindex = start;
    int i, aux;
    for (i = start; i < end; i++) {
        if (v[i] <= pivot) {
            aux = v[i];
            v[i] = v[pivindex];
            v[pivindex] = aux;
            pivindex++;
        }
    }
    aux = v[end];
    v[end] = v[pivindex];
    v[pivindex] = aux;
    
    return pivindex;
}

/*Structuri********************************************************************/

void normalizare() {
    int n, i, j;
    cin >> n;
    vector a[n], b[n], copie, min;
    for (i = 0; i < n; i++) {
        a[i].poz = i;
        cin >> a[i].val;
    }
    for (i = 0; i < n; i++) {
        min = a[0];
        for (j = 1; j < n - i; j++) {
            if (a[j].val < min.val) {
                min = a[j];
            }
        }
        copie = a[n - i];
        a[n - i] = a[min.poz];
        a[min.poz] = copie;
        
    }
    for (i = 0; i < n; i++) {
        cout << min.val << " poz " << min.poz << endl;
    }
}

void FractiiMax() {
    fractie unu, doi;
    
    cin >> unu.numarator >> unu.numitor >> doi.numarator >> doi.numitor;
    
    if ((double)unu.numarator / (double)unu.numitor > (double)doi.numarator / (double)doi.numitor) {
        cout << unu.numarator / cmmdc(unu.numarator, unu.numitor) << " " << unu.numitor / cmmdc(unu.numarator, unu.numitor);
    } else {
        cout << doi.numarator / cmmdc(doi.numarator, doi.numitor) << " " << doi.numitor / cmmdc(doi.numarator, doi.numitor);
    }
}
unsigned int cmmdc(int a, int b) {
    if (b != 0) {
        return cmmdc(b, a % b);
    }
    return a;
}