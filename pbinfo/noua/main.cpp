#include <iostream> /// cin >>; cout <<;
#include <fstream> /// fin >>; fout <<;
#include <stdio.h> /// scanf(); print();
#include <math.h> /// sqrt(); tan();
#include <cmath> /// abs(); M_PI;
#include <cstring>

using namespace std;

/// 2022-11-03
void Sfera(); //80p/
void sabc();
void Disc();
void primacifraapartiizecimale();
void dreptunghi();
void InaltimeTriunghi();
void AriePatrulaterInscriptibil();
void AriePoligonRegulat();
void ArieTrapez();
void trapez();
void multimeGauss_37p();
/// 2023-05-18
float Varsta_40p(float a, float b, float c, float d); /// chiar daca iau o variabila intreaga si afisez intreg/100.intreg%100
void romb(float d1, float d2) { cout << 4*sqrt(d1*d1/4 + d2*d2/4) << " " << d1 * d2 / 2; }
void LaturaTriunghi();
/// 2023-05-19
int countmod10(int a, int b);
int abcd(int a, int b, int c, int d);
int sumcif(int n) { return n%10 + (n/10)%10 + n/100; } /// numarul are fix 3 cifre, complexitate liniara
int sumapatratecifre(int n) { return (n%10)*(n%10) + ((n/10)%10)*((n/10)%10) + (n/100)*(n/100); } /// n are 3 cifre
int Numar (int n) { return (n%10) * (n/100); } /// fix 3 cifre
int Numar1 (int n) { return ((n/100)*10 + n%10) * ((n/100)*10 + n%10); } /// fix 3 cifre
int ElimCif (int n) { int m = (n/100)*10 + n%10; return m; } /// fix 3 cifre
int schimbarecifre(int a) { return ((a%10)*10 + a/10) * ((a%10)*10 + a/10); } /// fix 2 cifre
/// 2023-05-20
int sumacifperm(int n); /// in: 123 ... out: 1332 adica 123+132+213+231+312+321
void picioare1(); /// in: 5 14 ... out: 3 2 pentru ca 3+2=5 si 3*2+2*4=15 (5 capete, 14 picioare, gaina 1C 2P, oaia 1C 4P)
void EleviSiBanci(); /// in: 2 3 5 5 ... out: 45 20
/// 2023-01-03
int sum_cons_impare_50p(int n); /// in: 5 ... out: 9 adica 1+3+5
void medie1(int x, int y, int z); //60p/ in: 9 9 7 ... out: 8.33
void Timp(int h, int m, int x); //20p/ in: 7 11 90 ... 8 41 respectiv dupa 90 de minute va fi ora 8 si 30 de minute
/// 2024-02-01
unsigned int sumaCifreN(unsigned int N) { if (N < 10) return N; return sumaCifreN(N%10) + sumaCifreN(N/10); }
unsigned int sumaPrefixePare(unsigned int n); /// in: 12345 ... out: 1246 ,adica 1234 + 12
unsigned int dublare2(unsigned int n); /// in: 102 ... out: 110022
/// 2024-02-02
void povesti(unsigned int N); /// in: 113 ... out: 3 232 adica 3 = 1*3 si 232 = card(0)+card(1)+card(2)+...+card(232) = 232
/// 2024-02-06
unsigned int bacterie1(unsigned int n, unsigned int m); /// in: 3 5 ... out 9
void joc12(int x, int a, int b, int y, int c, int d); //10p/ in: 7 9 30 9 60 20 .., out: Maria 4; Ioana x=7, Maria y=9, [a,b]
void AfCar(char c) { int asciiNumber = c; cout << asciiNumber; } /// in: 'a' ... out: 97 /// 17:52 - 17:54
void Uppercase(char c) { char u = c - 32; cout << u; } /// in: 't' ... out: 'T'
/// 2024-02-08
void Timp1(unsigned int h, unsigned int m, unsigned int x, unsigned int y); /// in: 7 11 5 34 ... out: 12 45
/// 2024-02-10
unsigned int PatratMagic5(unsigned int n) { return n*(n*n + 1)/2; } /// in: 3 ... out: 15
int Coada2(unsigned int x, unsigned int y, unsigned int z); //80p/ in: 0 1 1 ... out: 2 ... Mihai y fata | x per | Andrei z spate
int sum(int a, int b) { int S = a + b; return S; } /// in: 12 13 ... out: 35
/// 2024-02-12
void Zmeu(unsigned int N, unsigned int M, unsigned int &Z, unsigned int &anotherZ); /// in: 72 10 ... out: 3 8
void ndivnlen(unsigned int n); /// in: 3 ... out: 123, pentru ca 123 se imparte la 3 si are 3 cifre
void vanatoare(unsigned int ka, unsigned int kb); /// in: 9 10 ... out: 4 2 6; din 4 randuri, raman 2/9 sageti albe si 6/10 negre
/// 2024-02-13
void regula(unsigned int c, unsigned int v); //50p/ in: 1 8 ... out: 3 sau in: 2 3 ... out: 8
/// 2024-02-14
void SumeGaussDeSumeGauss(unsigned int n); //40p/ in: 5 si 5 3 2 10 7 ... out: 35 10 4 220 84
void CifreZecimale1(); /// in: 3 si 5 10 18 ... out: 0 1 5, reprezentand valorile de pe pozitiile 5, 10 si 18 si sir [100,999]
/// 2024-02-26
unsigned int suma_n(unsigned int n); /// in: 5 si 6 2 0 4 1 ... out: 13
int maxim2(int a, int b); /// in: 125 68 ... out: 125
int maxim3(int a, int b, int c); /// in: 125 68 200 ... out: 200
unsigned int maxmin(unsigned int a, unsigned int b, unsigned int c); /// in: 10 7 2 ... out: 8, adica 10 - 2
///2024-06-17
int NumarMinim1(int n, int b, int r); /// in: 5 97 14 ... out: 10005 pt ca: 10005 / 97 are restul 14
int douabaze(int n); /// in: 100011 ... out: 203 pt ca (100011)baza2 = (203)baza4

/******************************************************************************/

int main() {
    cout << douabaze(100011);

    return 0;
}

/******************************************************************************/

int douabaze(int n) {
    int nInBase4 = 0;
    /// Observam: 00 -> 0; 11 -> 3; 10 -> 2; deci 01 -> 1
    while(n) {
        if (n % 100 == 0) {
            nInBase4 = nInBase4 * 10 + 0;
        }
        if (n % 100 == 1) {
            nInBase4 = nInBase4 * 10 + 1;
        }
        if (n % 100 == 10) {
            nInBase4 = nInBase4 * 10 + 2;
        }
        if (n % 100 == 11) {
            nInBase4 = nInBase4 * 10 + 3;
        }
        n /= 100;
    }
    n = nInBase4;
    nInBase4 = 0;
    while (n) {
        nInBase4 = nInBase4 * 10 + n % 10;
        n /= 10;
    }
    return nInBase4;
}

int NumarMinim1(int n, int b, int r) {
    /// 20p
    int result = 1;
    while (n > 1) {
        result *= 10;
        n--;
    }
    while (result % b != r) {
        result++;
    }
    return result;
}

unsigned int maxmin(unsigned int a, unsigned int b, unsigned int c) {
    /// 20:50 - 21:00 /// If the first number is greater than the second, max will be the first number and min will be the second. Else, the first max will be the second number and min will be the first one. Moreover, if the third number is greater than the max, it will be the new maximum and if ther third number is less than the min, it will be the new minimum.
    unsigned int max, min, mm;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    if (c > max) {
        max = c;
    }
    if (c < min) {
        min = c;
    }
    mm = max - min;
    return mm;
}

int maxim3(int a, int b, int c) {
    /// 20:45 - 20:47
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int maxim2(int a, int b) {
    /// 20:30 - 20:32
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

unsigned int suma_n(unsigned int n) {
    /// 20:20 - 20:25
    unsigned int S = 0, number;
    while (n) {
        cin >> number;
        S += number;
        n--;
    }
    return S;
}

void CifreZecimale1() { /// p: 123 456 789 
    /// 20:05 - 21:00 /// row: 100|101|102|103|104|105|106|107|108|109|110|111|112|113|114|1115|116|117|118|119|120...998|999
    /*
    In  n = how many natural numbers k to read
    Out the values from row on k positions
    
    1 0 0 1 0 1 1 0 2  1  0  3  1  0  4  1  0  5  1  0  6  1  0  8  1  0  9  1  1  0  1  1  1  1  1  2  1  1  3  1 ...   9   9   9
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 ...
    
    We observe we must return only a number between 0 and 9.
    0 for: 2, 3, 5, 8, 11, 14, 17, 20, 23, 26, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360, 390 420
        k%30 == 0 || ((k+1)%3 == 0 && k < 27) || k == 3 -> out: 0
    1 for: 1, 4, 6, 7, 10, 13, 16, 19, 22, 25, 28, 29, 31, 32, 33, 34, 35, 37, 38, 40
        start with 1 if ((k - 1) % 3 == 0)
        1 in middle if ((k + 1) % 3 == 0)
        end with 1 if (k % 6 == 0)
    */
}

void SumeGaussDeSumeGauss(unsigned int n) {
    /// 15:45 - 15:50 /// From 0 to n-1, we'll read the number. While the number > 0 we will calculate the sum. Each time the number will be decremented by 1. After the the while we print the sum, and the for will contiune to the end.
    unsigned int i, number, sum;
    for (i = 0; i < n; i ++) {
        cin >> number;
        sum = 0;
        while (number) {
            sum = sum + (number * (number + 1) / 2);
            number--;
        }
        cout << sum << " ";
    }
}

void regula(unsigned int c, unsigned int v) {
    /// 14:45 - 15:30
    unsigned int step = 0, limit = 1, number;
    if (c == 1) {
        /// Out: the value from v position represented by number var
        while (step < v) {
            /// First que: 1, 12, 123, 1234, 12345, etc.
            number = 0;
            while (step < v && number < limit) {
                number++;
                step++;
            }
            /// Second que: 1, 13, 135, etc.
            if (step != v) {
                number = 1;                               
                step++;
            }
            while (step < v && number < limit - 1) {
                number += 2;
                step++;
            }
            limit++;
        }
        cout << number;
    } else if (c == 2) {
        /// Out: first position of v value represented by step var
        while (number != v) {
            /// First: 1, 12, 123, 1234, 12345, etc.
            number = 0;
            while (number != v && number < limit) {
                number++;
                step++;
            }
            if (number != v) {
                number = 1;
                step++;
            }
            while (number != v && number < limit - 1) {
                number += 2;
                step++;
            }
            limit++;
        }
        cout << step;
    } else {
        cout << "\nOnly 1 and 2 are valid for first input!";
    }
    
    /*  20:40 - 21:00 /// For each chunk we need a limit. If c = 1 then we should count each step and stop when the step is v. If c = 2 then at each step, we should compare current number with v variable.
    if c = 1 => the value from v position
    if c = 2 => first position of v value
    
    unsigned int limit = 1, step = 1, number;
    if (c == 1) {
        while (step != v) {                 /// 1, 2 != 8 true
            number = 1;
            while (number < limit) {        /// 1 < 1 false
                number++;
                step++;
                if  (step == v) {
                    number = limit;         /// break;
                }
            }
            while (number < limit) {        /// 1 < 1
                number += 2;
                step++;
                if  (step >= v) {           /// @TODOO check
                    number = limit;         /// break;
                }
            }
            step++;
        }
    }
    cout << number;
    */
}

void vanatoare(unsigned int ka, unsigned int kb) {
    /// 20:45 - 22:20 /// We note rprecedent - number of ducks from precedent row and rcurrent - number of ducks from current row. The next one will be the sum of this two, noted with rtotal. The number of black ducks = rtotal / 2. The number of white ducks = rtotal - blackpoints. We keep the sum from each row inside whitepoints and blackpoints. If the one of the points are greater strictly than the respective arrow (ka/kb), then we should not continue to calculate the points anymore.
    /*
    a - rate albe; b rate negre, fiecare rand incepe cu o rata alba si nu pot fi doua rate de aceeasi culoare una langa alta
    ka - sageti albe; kb - sageti negre;        /// cont: 1  2  3  4   5   6   7
    rate albe:  1 + 1 + 2 + 3 + 4 + 7 + 11      /// sume: 1, 2, 4, 7, 11, 18, 29
    rate negre: 0 + 1 + 1 + 2 + 4 + 6 + 10      /// sume: 0, 1, 2, 4,  8, 14, 24
    
                         a                      /// a 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0   /// 1(1)    - 1a    +   0b
                        a b                     /// a b 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0   /// 2(2)    - 1a    +   1b
                       a b a                    /// a b a 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0   /// 3(3)    - 2a    +   1b
                     a b a b a                  /// a b a b a 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0   /// 4(5)    - 3a    +   2b
                  a b a b a b a b               /// a b a b a b a b 0 0 0 0 0 0 0 0 0 0 0 0 0   /// 5(8)    - 4a    +   4b
            a b a b a b a b a b a b a           /// a b a b a b a b a b a b a 0 0 0 0 0 0 0 0   /// 6(13)   - 7a    +   6b
    a b a b a b a b a b a b a b a b a b a b a   /// a b a b a b a b a b a b a b a b a b a b a   /// 7(21)   - 11a   +   10b
    */
    unsigned int rprecedent = 1, rcurrent = 2, rtotal = 2, blackpoints = 0, whitepoints = 1, row = 2;
    if (ka == 0) {
        cout << 0 << "\n" << ka << "\n" << kb;
    } else if (ka == 1) {
        cout << 1 << "\n" << 0 << "\n" << kb;
    } else {                                    /// row = 2 @TODOO: debug pe cazul else
        blackpoints += rtotal / 2;              /// blackpoints = 0 + 1 = 1
        whitepoints += rtotal - blackpoints;    /// whitepoints = 1 + 2 - 1 = 2
        rtotal = rprecedent + rcurrent;         /// rtotal = 1 + 2 = 3
        rprecedent = rcurrent;                  /// rprecedent = 2
        rcurrent = rtotal;                      /// rcurrent = 3
        while (rtotal / 2 <= kb && rtotal - rtotal / 2 <= ka) {
            blackpoints += rtotal / 2;
            whitepoints += rtotal - blackpoints;
            rtotal = rprecedent + rcurrent;
            rprecedent = rcurrent; 
            rcurrent = rtotal;
            row++;
        }
        cout << row << endl;
        if (ka < whitepoints) {
            cout << 0 << endl;
        } else {
            cout << ka - whitepoints << endl;
        }
        if (kb < blackpoints) {
            cout << 0 << endl;
        } else {
            cout << kb - blackpoints << endl;
        }
    }
}

void ndivnlen(unsigned int n) {
    /// 17:45 - 18:00 /// until n = 19, where the result is negative
    /*
    long long contor = 1, copieN = n;
    while (n) {
        contor *= 10;
        n--;
    }
    contor /= 10;
    n = copieN;
    while (contor % n) {
        contor++;
    }
    cout << contor;
    */
    ///                                                    1  2   3    4      5       6        7           8           9
    /// 18:05 - 19:00 /// We observe the followin results: 1; 10; 102; 1.000; 10.000; 100.002; 1.000.006;  10.000.000; 100.000.008
    /// So, if we have a naturl number n, the k number of n digits will be divisible with n depending of the last digit. For 1, we do not have more choices than 1, for 2, we can write 1 followed by a a fixed (n - 1) number of zeros, same will be with any number divizible with 2, 5. For any number divizible with 3, we have 1 followed by (n - 2) zeros and final 2.
    unsigned int last;
    if (n == 1) {
        cout << 1;
    } else {
        cout << 1;
        if (n % 41 == 0) {
            last = 1000;
            n -= 3;
        }
        else if (n % 39 == 0) {
            last = 280;
            n -= 2;
        }
        if (n % 39 == 0) {
            last = 180;
            n -= 2;
        }
        else if (n % 37 == 0) {
            last = 160;
            n -= 2;
        }
        else if (n % 31 == 0) {
            last = 100;
            n -= 2;
        }
        else if (n % 29 == 0) {
            last = 28;
            n--;
        }
        else if (n % 23 == 0) {
            last = 22;
            n--;
        }
        else if (n % 19 == 0) {
            last = 18;
            n--;
        }
        else if (n % 17 == 0) {
            last = 16;
            n--;
        }
        else if (n % 13 == 0) { /// the number does not have 13 digits, problem from 12 to 10^5. debug in future @TODOO
            last = 12;
            n--;
        }
        else if (n % 11 == 0) {
            last = 10;
            n--;
        }
        else if (n % 9 == 0) {
            last = 8;
        } else if (n % 7 == 0) {
            last = 6;
        } else if (n % 5 == 0) {
            last = 0;
        } else if (n % 3 == 0) {
            last = 2;
        } else if (n % 2 == 0) {
            last = 8;
        }
        while (n > 2) {
            cout << 0;
            n--;
        }
        cout << last;
    }
}

void Zmeu(unsigned int N, unsigned int M, unsigned int &Z, unsigned int &anotherZ) {
    /// 17:07 - 17:21 /// N - number of meters they have, M - number of meters for one string of two to build the kite, Z - number of kites realized with two ropes of M meters from N totally meters. So, we can divide N at 2 times M for Z. Getting the necessary meters to build another kite, we can calculate the rest.
    Z = N / (M * 2);
    anotherZ = (M * 2) - (N % (M * 2));
}

int Coada2(unsigned int x, unsigned int y, unsigned int z) {
    /// 21:10 - 21:40 /// We observe one condition: between Mihai and Andrei, must to be x = y + z - 2.
    if (x <= y + z - 2) {
        return y + z - x;
    } else {
        return -1;
    }
}

void Timp1(unsigned int h, unsigned int m, unsigned int x, unsigned int y) {
    /// 15:10 - 15:24 /// We observe that we have to start with the minutes. If minutes >= 60 then we can divide them to 60 and the rest will be the final minutes. For the hours, we cand add  the two hours and minutes/60. If the hours > 24, then we divide the hours to 24 and the rest will be the final hours.
    unsigned int minutes = m + y;
    unsigned int hours = h + x;
    if (minutes >= 60) {
        minutes = minutes % 60;
        hours++; /// or hours += minutes / 60;
    }
    if (hours >= 24) {
        hours = hours % 24;
    }
    cout << hours << " " << minutes;
}

void joc12(int x, int a, int b, int y, int c, int d) {
    /// 11:20 - 11:50 /// Observam ca daca avem [a,b] cu a > b, intervalul devina [b,a] pe exemplul lor. Totodata, in [9,30] avem 3 multiplii de 7. Pe 3 il putem obtine din (30 - 9) / 7. La fel si pe 4 din (60 - 20) / 9. Punctajul P il putem obtine daca ii atribuim numarul de multiplii alesi in intervalul Ioanei, urmand sa comparam P cu numarul de multiplii alesi in intervalul Mariei. Daca este mai mare, suprascriem P corespunzator. In caz contrar, P ramane cu valoarea initiala.
    unsigned int P;
    if (a < b) {
        P = (b - a) / x;
    } else {
        P = (a - b) / x;
    }
    // cout << "debug P: " << P << endl << "[" << a << "," << b << "] si [" << c << "," << d << "]\n" << (b - a) / x << " si " << (c - d) / y << endl;
    if (c < d) {
        if (P > (d - c) / y) {
            P = (d - c) / y;
            cout << "Maria " << P;
        } else if (P < (d - c) / y) {
            cout << "Ioana " << P;
        } else {
            cout << "Egalitate " << P;
        }
    } else if (c > d) {
        if (P < (c - d) / y) { /// initial am scris ">", dar in acel caz imi gasea numarul minim de multiplii in interval
            P = (c - d) / y;
            cout << "Maria " << P;
        } else if (P > (c - d) / y) {
            cout << "Ioana " << P;
        } else {
            cout << "Egalitate " << P;
        }
    }
}

unsigned int bacterie1(unsigned int n, unsigned int m) {
    /// 11:00 - 11:05 /// Observam ca trebuie sa scadem din numarul total de patratele (n*m), numarul de patratele intr-un patrat de dimensiune n pe n, daca n este mai mic decat m sau m, in caz contrar, cu prorietatea ca vom numara doar acele patratele care se formeaza conform desenului, adica, pentr n = 3 si m = 5, vom avea 1 + 2 + 3 = 3 * 4 / 2, conform formulei.
    if (n < m) {
        return n * m - (n * (n + 1) / 2); /// 3 * 5 - (3 * 4 / 2) = 15 - 6 = 9
    } else {
        return n * m - (m * (m + 1) / 2);
    }
}

void povesti(unsigned int N) {
    /// 17:35 - 18:15 /// Iterativ, aux creste de 10 ori pentru fiecare cifra a lui N, fara 2 din ele. Plecam de la 10 pana la valoarea obtinuta si verificam daca produsul dintre restul impartirii lui N la i si N impartit la i*10 este mai mare decat P. In caz afirmativ, lui P ii atribuim aceasta valoare. C creste cu o unitate pentru ficare cifra a variabilei aux care incepe de la 1 si se termina la N inclusiv.
    unsigned int P = 0, C = 1, aux, copie, i; /// pagini magice, cifru deschidere carte
    for (i = 1; i <= N; i++) { /// i pleaca de la 1 si C = 1 pentru ca excludem prima pagina datorita conditiei (pagina != 0)
        aux = i;
        while (aux) {
            C++;
            aux /= 10;
        }
    }
    aux = 1;
    copie = N;
    while (copie) {
        aux *= 10;
        copie /= 10;
    }
    aux /= 100;
    cout << "aux: " << aux << endl;
    for (i = 10; i <= aux; i *= 10) {
        if ((N%i) * (N/(i*10)) > P) {
            P = (N%i) * (N/(i*10)); /// i = 10 => 21035%10 * 21035/100 = 5 * 210
        }
    }
    cout << P << " " << C;
}

unsigned int dublare2(unsigned int n) {
    /// 21:34 - 21:45 /// Iterativ
    unsigned int result = 0, power = 1;
    while (n) {
        result = result + ((n%10)*10 + n%10) * power;
        n /= 10;
        power *= 100;
    }
    return result;
    /// 21:45 - 21:50 /// Recursiv
    /*
    dublare2 =  (n%10)*10 + n%10, daca n < 10
                dublare2(n/10) * 100 + (n%10)*10 + n%10, daca n >= 10
    
    if (n < 10) return (n%10)*10 + n%10;
    return dublare2(n/10) * 100 + (n%10)*10 + n%10;
    */
}

unsigned int sumaPrefixePare(unsigned int n) {
    /// 15:27 - 15:29 /// Iterativ
    
    unsigned int S = 0;
    while (n) {
        if (n%2 == 0) {
            S += n;
        }
        n /= 10;
    }
    return S;
    
    /// 15:35 - 15:42 /// Recursiv
    /*
    sumaPrefixePare =
        n, daca n < 10 si n par
        0, daca n < 10 si n impar
        n + sumaPrefixePare(n/10), daca n >= 10 si n par
        sumaPrefixePare(n/10), daca n >= 10 si n impar
    
    if (n < 10) {
        if (n%2 == 0) {
            return n;
        }
        return 0;
    }
    if (n%2 == 0) {
        return n + sumaPrefixePare(n/10);
    }
    return sumaPrefixePare(n/10);
    */
}

void Timp(int h, int m, int x) {
    int h2 = h, m2 = m;
    if (x + m2 < 60) {
        m2 += x;
    } else {
        h2 += x/60;
        m2 += x%60;
    }
    cout << h2 << " " << m2;
}

void medie1(int x, int y, int z) {
    float medie = (float) (x + y + z) / (float) 3;
    printf("%.2f", medie);
}

int sum_cons_impare_50p(int n) {
    int result = 1;
    for (int i = 3; i <= n; i += 2) {
        result += i;
    }
    return result;
    
}

void EleviSiBanci() {
    int elevi, banci;
    int n, m, e, b; /// cate n elevi intr-o banca => e elevi in picioare si m elevi intr-o banca => b banci neocupate
    
    cin >> n >> m >> e >> b;
    
    elevi = m * (n*b + e) / (m - n); /// elevi = n*banci + e
    banci = (e + b*m) / (m - n); /// banci = elevi / m + b
    
    cout << elevi << " " << banci;
}

void picioare1() {
    int C, P, G, O; /// capete, picioare, gaini, oi
    
    cin >> C >> P;
    
    G = 2*C - P/2; /// G+O = C <=> G = C-O <==> G = C-(P/2-C) <=> G = 2*C-P/2
    O = P/2 - C; /// 2*(G+2*O) = P <=> G+2*O = P/2 <=> 2*(C-O)+4*O = P <=> 2*O = P-2*C <=> O = P/2-C
    
    cout << G << " " << O;
}

int sumacifperm(int n) {
    int dublu = 2 * (n%10 + (n/10)%10 + n/100);
    int suma = dublu;
    suma = suma * 10 + dublu;
    suma = suma * 10 + dublu;
    return suma;
    /// 2*(1+2+3) = 2*6 = 12 ... 120 + 12 = 132 ... 1320 + 12 = 1332
}

int abcd(int a, int b, int c, int d) {
    int result;
    if (a%3 == 0) {
        result = 1 + b/3 - a/3;
    } else {
        result = b/3 - a/3;
    }
    if (c%3 == 0) {
        result += 1 + d/3 - c/3;
    } else {
        result += d/3 - c/3;
    }
    return result;
}

int countmod10(int a, int b) {
    if (!(a % 10)) {
        return 1 +  b/10 - a/10;
    } else {
        return b/10 - a/10;
    }
    /*
    int i, contor = 0;
    for (int i = a; i <= b; i++) {
        if (!(i % 10)) {
            contor++;
            i += 9;
        }
    }
    return contor;
    */ /// Complexitate O(n)
}

void LaturaTriunghi() {
    unsigned int a, b, u;
    cin >> a >> b >> u;
    float c = sqrt(a*a + b*b - 2*a*b*cos(u/180*3.14159265));
    cout << c;
}

float Varsta_40p(float a, float b, float c, float d) {
    float x = (b * c - a * d) / (d - c);
    int intreg = x * 100;
    x = intreg / 100.f;
    return x;
    /*
    (x+a)/(x+b) = c/d
    dx + da = cx + bc
    x(d-c) = bc - ad
    x = (b * c - a * d) / (d - c);
    */
}

void multimeGauss_37p() {
    long long n;
    int i, m = 1;
    cin >> n;
    /// 2024-06-15 - 17:28
    while (n) {
        i = 0;
        while (n != 0 && i < m) {
            i++;
            n--;
        }
        m++;
    }
    m--;
    cout << m;
    
    /*
    n | 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
    m | 1 2 2 3 3 3 4 4 4 4  5  5  5  5  5  6  6  6  6  6  6  7  7  7
    */
    
    /*
    while (n != 0) {
        for (int i = 1; i <= n; i++) {
            if(i > m) {
                m++;
            }
            n--;
        }
    }
    
    // Another way
    
    while (n != 0) {
        for (int i = 1; i <= n; i++) {
            if(i > m) {
                m++;
                n--;
            } else {
                n--;
            }
        }
    }
    
    cout << m;
    */
}

void trapez() {
    double B, b, l, d;
    cin >> B >> b >> l;
    
    /// ibb.co/NSbssYK
    d = sqrt(l*l + B*b);
    printf("%.5lf", d);
}

void ArieTrapez() {
    float a, b, c, d, A;
    cin >> a >> b >> c >> d;
    
    if((abs(d-b) < abs(c-a)) == false || (abs(c-a) < d+b) == false) {
        cout << "Imposibil";
    } else {
        A = (a+c) * sqrt(b*b - ((c-a)*(c-a) + b*b - d*d)*((c-a)*(c-a) + b*b - d*d) / 4/(c-a)/(c-a)) / 2;
        // printf("%.2f", A);
        
        int intreg = A*100;
        cout << intreg/100 << "." << (intreg/10)%10 << intreg%10;
    }
}

void AriePoligonRegulat() {
    float n, l, A;
    cin >> n >> l;
    
    A = n*l*l*(1/(4*tan(M_PI/n)));
    
    int intreg = A*100;
    cout << intreg/100 << "." << intreg%100; /// afisarea primelor doua zecimale
    if (intreg%10 == 0) cout << "0"; /// cazul in care a doua zecimala este 0
}

void AriePatrulaterInscriptibil() {
    float a, b, c, d, semi, arie;
    cin >> a >> b >> c >> d;

    semi = (a + b + c + d)/2;    
    arie = sqrt((semi - a)*(semi - b)*(semi - c)*(semi - d));
    
    /// printf("%.3f", arie); /// folosind biblioteca stdio.h
    
    arie *= 1000; /// muta virgula peste 3 zecimale
    int intreg = arie; /// eliminim restul zecimalelor
    
    if (intreg == arie) {
        cout << ".000";
    } else {
        cout << intreg/1000 << "." << intreg%1000;
    }
    
    /// cout << intreg/1000 << "." << (intreg/100)%10 << (intreg/10)%10 << intreg%10; /// 100p
}

void InaltimeTriunghi() {
    int c1, c2, i;
    cin >> c1 >> c2 >> i;
    
    double h = 1.0f*(c1*c2)/i; /// calulam inaltimea din unghiul drept
    
    // puteam scrie direct: int rezultat = h*100;
    
    /// mutam virgula peste 2 zecimale pentru a pastra partea intreaga si fractionara
    h *= 100; 
    /// stocam valoarea inaltimii intr-o variabila intreaga pentru a calcula "%100"
    int rezultat = h; 
    
    int intreaga = rezultat/100;
    int fractionara = rezultat%100;
    
    cout << intreaga << "." << fractionara;
    
    /*
    Teorema matematica
    Fie ABC triunghi dreptunhic in A si H = inaltimea din A
    ABC asemenea cu HBA de unde ne rezulta:
    AB . BC . AC
    BH ` AB ` AH
    Asar AH = (AB*AC)/BC
    Adica inaltimea = (cateta1*cateta2)/ipotenuza
    
    Exemplu cum am afisat catul a doua numere cu exact 2 zecimale    
    double z = 13 / (double)3; 
    cout << z << endl;
    printf("%.2f \n", z);
    printf("%.1f \n", z);
    
    #include <stdio.h> /// pentru a putea folosi printf
    
    v1 Aici imi afiseaza cu mai multe zecimale (3 4 5 -> 2.4)
    float c1, c2, i, h;
    cin >> c1 >> c2 >> i;
    h= (c1*c2)/i;
    cout << h;
    
    v2 cu exact doua zecimale dar cu 80 de puncte pe pbinfo.ro
    unsigned int c1, c2, i;
    cin >> c1 >> c2 >> i;
    double h;
    h = 1.0f*(c1*c2)/i;
    printf ("%.2f \n", h);

    @alinaorbeanu
    int main() {
        int c1, c2, i;
        double A, h;
        scanf("%d %d %d", &c1, &c2, &i);
        A = c1 * c2 / 2;
        h = 2 * A / i; cout << "\nh este " << h << endl;
        h = h*100; cout << "\nh este " << h << endl;
        int r = h; cout << "\nh este " << r << endl;
        printf("%d.%d%d", r/100, r/10%10, r%10);
    }

    infernos_alex
    int main() {
        float x;
        int c1, c2, i;
        cin >> c1 >> c2 >> i;
        x = (float) c1 * c2 / i;
        x *= 100;
        int a = int(x);
        int b = a / 100;
        int c = a % 100;
        cout << b << "." << c;
        return 0;
    }    
    */
}

void dreptunghi() {
    unsigned int a, b;
    cin >> a >> b;
    
    unsigned int P, A, D;
    P = 2*(a+b);
    A = a*b;
    D = a*a + b*b;
    
    cout << P << " " << A << " " << D;
}

void primacifraapartiizecimale() {
    double a;
    cin >> a;
    int intreaga = a;
    float fractionara = a - intreaga; /// x = [x] + {x}
    
    int zecimale = 1;
    while (fractionara < 1) {
        fractionara *= 10;
        zecimale *= 10;
    } /// Calculez numarul de dupa virgula si ii numar cifrele
    
    intreaga = fractionara;
    cout << intreaga/(zecimale/10);
}

void Disc() {
    double r, per, arie;
    cin >> r;
    arie = M_PI*r*r;
    per = 2*M_PI*r;
    
    printf("%.6lf %.6lf", arie, per);
}

void sabc() {
    int a, b, c, ab = 0, bc = 0, ac = 0;
    cin >> a >> b >> c;
    
    for (int i = a; i <= b; i++) {
        ab += i;
    }
    for (int i = b; i <= c; i++) {
        bc += i;
    }
    for (int i = a; i <= c; i++) {
        ac += i;
    }
    
    cout << ab << " " << bc << " " << ac;
}

void Sfera() {  //80p/
    // 80p probabil pt ca pentru variabila V se depaseste limita spatiului (r=1000 => v~4miliarde) 
    
    float r, A, V;
    cin >> r;
    
    A = M_PI*r*r*4;
    V = M_PI*r*r*r*4/3;
    
    int arie, volum;
    arie = A * 100;
    volum = V * 100;
    
    cout << arie/100 << "." << (arie/10)%10 << arie%10 << " " << volum/100 << "." << (volum/10)%10 << volum%10;
}