#include <iostream> /// cin >>; cout <<;
#include <stdio.h> /// scanf(); print();
#include <math.h> /// sqrt(); tan();
#include <cmath> /// abs(); M_PI;

using namespace std;

void Sfera_80p();
void sabc();
void Disc();
void primacifraapartiizecimale();
void dreptunghi();
void InaltimeTriunghi();
void AriePatrulaterInscriptibil();
void AriePoligonRegulat();
void ArieTrapez();
void trapez();
void multimeGauss();
/// 18-mai-23
float Varsta_40p(float a, float b, float c, float d); /// chiar daca iau o variabila intreaga si afisez intreg/100.intreg%100
void romb(float d1, float d2) { cout << 4*sqrt(d1*d1/4 + d2*d2/4) << " " << d1 * d2 / 2; }
void LaturaTriunghi();
/// 19-mai-23
int countmod10(int a, int b);
int abcd(int a, int b, int c, int d);
int sumcif(int n) { return n%10 + (n/10)%10 + n/100; } /// numarul are fix 3 cifre, complexitate liniara
int sumapatratecifre(int n) { return (n%10)*(n%10) + ((n/10)%10)*((n/10)%10) + (n/100)*(n/100); } /// n are 3 cifre
int Numar (int n) { return (n%10) * (n/100); } /// fix 3 cifre
int Numar1 (int n) { return ((n/100)*10 + n%10) * ((n/100)*10 + n%10); } /// fix 3 cifre
int ElimCif (int n) { int m = (n/100)*10 + n%10; return m; } /// fix 3 cifre
int schimbarecifre(int a) { return ((a%10)*10 + a/10) * ((a%10)*10 + a/10); } /// fix 2 cifre
/// 20-mai-23
int sumacifperm(int n); /// in: 123 ... out: 1332 adica 123+132+213+231+312+321
void picioare1(); /// in: 5 14 ... out: 3 2 pentru ca 3+2=5 si 3*2+2*4=15 (5 capete, 14 picioare, gaina 1C 2P, oaia 1C 4P)
void EleviSiBanci(); /// in: 2 3 5 5 ... out: 45 20

/*******************************************************************************************************************************/

int main() {
    EleviSiBanci();
    
    return 0;
}

/*******************************************************************************************************************************/

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

void multimeGauss() {
    long long n;
    int m = 1;
    cin >> n;
    /*
    while (n != 0) {
        for (int i = 1; i <= n; i++) {
            if(i > m) {
                m++;
            }
            n--;
        }
    }
    */
    
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

void Sfera_80p() {
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




