#include    <iostream>
using namespace std;

/*

void minim_fara_extreme(){
    int N, copie, ultimacif;
    float nrcif = 0.1;
    cin >> N;
    copie = N;
    
    while (copie){
        ultimacif=copie%10; 
        copie/=10;
        nrcif*=10;
    }
    
    if (N/10 < N-ultimacif*nrcif){
        cout << N/10;
    } else {
        cout << N-ultimacif*nrcif;
    }
}
    
--------------------------------------------------------------------------------

void elimina_maxim(){
    int N, copie, nrcif=1, max=0, rest=1;
    
    cin >> N;
    copie=N;
    
    while (copie){
        nrcif *= 10;
        copie/=10;
    }

    while (nrcif >1){
        if ((N%nrcif/(nrcif/10))>max){
            max = N%nrcif/(nrcif/10);
        }
        nrcif /= 10;
    }
    
    copie = N;
    
    while (copie%10 != max){
        rest *= 10; 
        copie /= 10; 
    }
    
    cout << (N/(rest*10))*rest + N%rest;
}   
    
--------------------------------------------------------------------------------

void elimina_minim(){
    int N, cifre=1, poz_min=1, copie, min=9;
    
    cin >> N;
    copie = N;
    
    while (copie){
        if (copie%10 < min){
            min =  copie%10;
        }
        copie /= 10;
    }
    
    copie = N;
    
    while (copie%10 != min){
        poz_min *=  10;
        copie /= 10;
    }
    
    cout << (N/(poz_min*10)) * poz_min + N%poz_min;
}

--------------------------------------------------------------------------------
    
void minim_fara_cifra(){
    int N, minimul= 1000000000, contor=1, copie;
    cin >> N;
    copie = N;
    
    while (copie){
        if (((N/(contor*10))*contor + N%contor) < minimul){
            minimul = (N/(contor*10))*contor + N%contor;
        }
        
        contor *= 10;
        copie /= 10;
    }
    
    cout << minimul;
}

--------------------------------------------------------------------------------
    
void maxim_fara_cifra(){
    int N, maximul=0, contor=1, copie;
    cin >> N;
    copie = N;
    
    while (copie){
        if (((N/(contor*10))*contor + N%contor) > maximul){
            maximul = (N/(contor*10))*contor + N%contor;
        }
        
        contor *= 10;
        copie /= 10;
    }
    
    cout << maximul;
}

--------------------------------------------------------------------------------

EXPLICATIE: min si max fara o cifra {
    Smecheria este sa elimin pe rand fiecare cifra si sa aleg maximul dintre fiecare numar format. De ex un nr de 4 cire:
        
        Pentru eliminarea ultimei cifre:
            N/10;                           (5912/10)*1 +  = 591
            
        Pentru eliminarea penultimei cifre:
            (N/100)*10 + N%10;              (5912/100)*10 + 5912%10 = 59*10 + 2 = 590 + 2 = 592
            
        Pentru eliminarea antepenultimei cifre:
            (N/1000)*100 + N%100;           (5912/1000)*100 + 5912%100 = 5*100 + 12 = 500 + 12 = 512
            
        Pentru eliminarea primei cifre:
            (N/10000)* 1000 + N%1000;       (5912/10000)*1000 + 5912%1000 = 0 + 912 = 912
}

*/ /// Minim si maxim fara o cifra

/*

void inversare_cifre(){
    int N, contor1, contor2, copie, nou=0;
    float zerouri = 0.1;
    
    cin >> N;
    
    copie = N;
    
    while (copie){
        zerouri *= 10;
        copie /= 10;
    } /// Numararea cifrelor din numar
    
    contor1 = zerouri/10;
    contor2 = zerouri;
    copie = N;
    
    while (contor1>0){
        nou = nou*10 + (N/contor1)%10;
        nou = nou*10 + (N/contor2)%10;
        
        contor1 /= 100;
        contor2 /= 100;
    } /// Calcul numar de afisat - cu inversarea cifrelor doua cate doua
    
    cout << nou;
}

EXPLICATIE {
    456.789 --- 547.698 = 5*100.000 + 4*10.000 + 7*1.000 + 6*100 + 9*10 * 8*1
    
    De unde l-am scos pe:
        5 --- (456.789/10.000) % 10
        4 --- (456.789/100.000) % 10
        7 --- (456.789/100) % 10
        6 --- (456.789/1.000) % 10
        9 --- (456.789/1) % 10
        8 --- (456.789/10) % 10
        
    Am folosit 2 contori pentru /100 /100 /1 /10 etc pt ca observam doua progresii geometrice
        1 100 10000 ... 10^2n unde n>=0
        10 1000 100000 ... 10^2n+1 unde n>=0
}

--------------------------------------------------------------------------------
    
void inserare_numar_in_mijloc(){
    int A, B, juma=1;
    
    cout << "Introduceti doua numere. Eu voi insera al doile in mijlocul primului numar :) \n";
    cin >> A >> B;
    
    int cifre_A = 1;
    int copie_A = A;
    int cifre_B = 1;
    int copie_B = B;
    
    while (copie_A > 9){
        cifre_A ++;
        copie_A /= 10;
    }
    
    cifre_A /= 2;
    while (cifre_A){
        juma *= 10;
        cifre_A --;
    }
    
    while (copie_B){
        cifre_B *= 10;
        copie_B /= 10;
    }
    
    cout << ((A/juma)*cifre_B + B)*juma + (A%juma);
}

--------------------------------------------------------------------------------    
    
void inlocuire_cifre(){
    int N, A, B, cifre=10, copie_N;
    cin >> N >> A >> B;
    
    copie_N = N;
    
    while(copie_N){
        if(copie_N%10 == A){
            N = ((N/cifre)*10+B)*(cifre/10)+(N%(cifre/10));
        }
        copie_N /= 10;
        cifre *= 10;
    }
    
    cout << "\n\n" << N;
}

EXPLICATIE {
    N=44512, A=4, B=1 ....... 11512
    
    (copie_N=N, N/=10): 44512 ... 4451 ... 445 ..... 44 ....... 4
    (cifra = N%10):     2!=4 .... 1=!4 ... 5!=4 .... 4=4 ...... 4=4
    (nrcif *= 10):      10 ...... 100 .... 1.000 ... 10.000 ... 100.000
}
    
--------------------------------------------------------------------------------
    
void divizibil_cu_trei() {
    int N, copie_N, suma_cif=0, e_divibil=0;
    
    cin >> N;
    copie_N = N;
    
    while(copie_N){
        suma_cif += copie_N%10;
        copie_N /= 10;
    } /// Calculez suma cifrelor
    
    while(N){
        if((suma_cif - (N%10)) % 3 == 0){
            e_divibil ++;
        }
        N /= 10;
    } /// Numarar de cate ori N fara o cifra, eliminata rand pe rand, e divizibil cu trei 
    
    cout << e_divibil;
}

EXPLICATIE {
    N=95231
    
    95231/10 ....... 9523*1 + 0 ....... 9523
    95231/100 ...... 952*10 + 1 ....... 9521
    95231/1000 ..... 95*100 + 31 ...... 9531
    95231/10000 .... 9*1000 + 231 ..... 9231
    95231/100000 ... 0*10000 + 5231 ... 5231
    
        Calculam suma cifrelor intr-un while: 1+3+2+5+9 = 20
    
    Eliminand pe 1: suma_cif - eliminat = 20 - 1 = 19
    Eliminand pe 3: suma_cif - eliminat = 20 - 3 = 17
    Eliminand pe 2: suma_cif - eliminat = 20 - 2 = 18 divizibil cu 3
    Eliminand pe 5: suma_cif - eliminat = 20 - 5 = 15 divizibil cu 3
    Eliminand pe 9: suma_cif - eliminat = 20 - 9 = 11
    
        Cum luam fiecare cifra rand pe rand?
            Cu un while. 
            Ne folosim de: 
                copie_N pentru a calcula suma cifrelor
                si de N pentru a lua fiecare caz in care eliminam cate o cifra rand pe rand.
}

*/ /// Concatenarea a doua numere

/*

void prime_intre_ele() {
    int A, B, rest;
    cin >> A >> B;
    
    while(B) {
        rest = A%B;
        A = B;
        B = rest;
    }
    
    if(A == 1) {
        cout << "DA";
    } else {
        cout << "NU";
    }
}

EXPLICATIE {
    
    -> CMMDC PRIN SCADERE:
    while(A != B) {
        if(A>B) {
          A -= B;  
        } else {
            B -= A;
        }
    }
        
    -> CMMDC PRIN IMPARTIRE
    while(B) {
        rest = A%B;
        A = B;
        B = rest;
    } /// A = valoarea celui mai mare divizor comun
    
    -> Daca valoarea CMMDC este 1 atunci cele doua numere sunt prime intre ele
    if(A = 1) cout << "\nCele doua numere sunt prime intre ele!" << flush;
}

--------------------------------------------------------------------------------

void operatii_cu_fractii() {
    int x, y, z, w, a, b, c, d, rest1, rest2, div1, div2;
    cin >> x >> y >> z >> w;
    
    a = x*w + z*y;
    b = y*w;
    c = x*z;
    d = y*w;
    
    while (b)
    {
        rest1 = a%b;
        a = b;
        b = rest1;
    }
    div1 = a;
    
    while (d)
    {
        rest2 = c%d;
        c = d;
        d = rest2;
    }
    div2 = c;
    
    a = x*w + z*y;
    b = y*w;
    c = x*z;
    d = y*w;
    
    cout << a/div1 << " " << b/div1 << " " << c/div2 << " " << d/div2;
    
}

EXPLICATIE {
    x = numaratorul unei fractii F1
    y = numitorul unei fractii F1
    z = numaratorul unei fractii F2
    w = numitorul unei fractii F2
    
    CERINTA: De calculat suma si produsul fractiilor aducandu-le la forma ireductibila.
    
    De exemplu, daca: x, y, z si w  = 60, 40, 36 si 80.
    
    -> Pentru a aduna: aducem la acelasi numitor, adica sa amplificam F1 cu numitorul de la F2 si viceversa.
    suma: 60/40 + 36/80 = (60*80)/(40*80) + (36*40)/(80*40) = (4800+1440)/3200 = 6240/3200

    -> Pentru a inmulti fractiile: vom inmultii numaratorii si numitorii.
    produs: 60/40 + 36/80 = (60*36)/(40*80) = 2160/3200
        
    -> Pentru a aduce la forma ireductibila: impartim numaratorul si numitorul la cmmdc!
    suma:   6240/3200 = (6240/160) / (3200/160) = 39/20
    produs: 2160/3200 = (2160/80) / (3200/80) = 27/40
        
        x=60, y=40, z=36 si w=80
        numarator suma: a = 60*80 + 36*40   <=> a = x*w + z*y;
        numitor suma:   b = 40*80 + 80*40   <=> b = y*w;
        numarator produs: c = 60*36         <=> c = x*z;
        numitor produs:   d = 40*80         <=> d = y*w;
    
}

--------------------------------------------------------------------------------

void cmmdc_n_numere() {
    int n, copie;
    
    cin >> n;
    copie = n;
    
    while (n) {
        while (n != copie) {
            if (n > copie) {
                n -= copie;
            } else {
                copie -= n;
            }
        }
        
        cin >> n;
    }
    
    cout << copie;
}

EXPLICATIE {
    Se citesc nr: 60 36 40 80 0 ... se afiseaza 4
    
    Prima data citim n si ii copiem valoarea in variabila copie.
    Ne vom folosi de n si copie si daca valorile acestora sunt diferite vom parcurge un while pana le gasim cmmdc prin scaderi repetate.
    La final mai citim inca un n. Codul se va repeta pana ii dam lui n valoarea 0.
    In principiu, pentru a calcula cmmdc a n numere calculam de fapt cmmdc dintre un numar curent si cmmdc gasit anterior.
    
}

--------------------------------------------------------------------------------

void tort() {
    int M, N, m, n, rest;
    cin >> M >> N;
    m = M; n = N;
    
    while (n) {
        rest  = m%n;
        m = n;
        n = rest;
    } /// cmmdc(m, n) = m
    
    cout << (M/m)*(N/m) << " " << m;
    
}

EXPLICATIE {
    -> Calculam cmmdc al dimensiunilor M si N folosindu-ne de copiile acestor: m si n.
    -> Nr minim de portii/ patratelele obtinute din dreptungi este produsul dintre M/m si N/m.
    -> m = cmmdc al laturilor dreptunghiului
}

*/ /// CMMDC si ALgoritmul lui Euclid

/*

void toate_numerele_prime () {
    bool eprim;
    int x, y, divizor;
    cin >> x >> y;
    
    while (x < y-1) {
        x++;
        
        if (x==1) {
            x++;
        }
        
        divizor = 2;
        eprim = true;
        
        while (divizor <= x/2) {
            if (x%divizor == 0) {
                eprim = false;
            }
            divizor++;
        }
        
        if (eprim) {
            cout << x << " ";
        }
    }
    
}

--------------------------------------------------------------------------------

void primele_n_numere_prime () {
    bool eprim;
    int N, divizor, numar=2, i=1;
    cin >> N;
    
    while (i<=N) {
        divizor = 2;
        eprim = true;
        
        while (divizor <= numar/2) {
            if (numar%divizor == 0) {
                eprim = false;
            }
            divizor++;
        }
        
        if (eprim) {
            cout << numar << " ";
            i++;
        }
        
        numar++;
    }
    
}

EXPLICATE {
    Daca N=5 se va afisa ... 2 3 5 7 11 adica prime 5 numere prime
}

*/ /// Verificarea proprietatii de numar prim

/*

void baza_numar () {
    int nr, baza, rest, rezultat = 0, power=1;
    cout << "Numarul si baza: "; cin >> nr >> baza;
    
    while (nr) {
        rest = nr%baza;
        rezultat += rest*power;
        power *= 10;
        nr /= baza;
    }
}

void doi_la_n_in_baza_doi () {
    int N;
    cin >> N;
    
    cout << "1";
    while (N) {
        cout << "0";
        N--;
    }
    
    /// Am ales sa rezolv problema folosindu-ma de caracterele 0 si 1 intrucat metoda cu algoritmi matematici functiona pana la N=10 si in acel caz afisa maximul variabilei int.
}

void baza_minima () {
    int N, B=1;
    cin >> N;
    
    while (N) {
        if (N%10 > B) {
            B = N%10;
        }
        N /= 10;
    }
    
    cout << B+1;
} 
Cerinta baza minima {
        Se citeste de la tastatura un numar natural N. Afisati baza minima in care acesta se poate scrie.
        
        ->  Baza 2: 0, 10
            Baza 5: 0, 1, 2, 3, 4
            
        ->  Deci: 
            921 se scrie in baza 10 din cauza lui 9.
            215 se scrie in baza 6 din cauza lui 5.
            
        ->  Astfel baza minima este acea baza in care putem scrie numarul fara a-l modifica.
        
        1.  Calculam maximul lui N, valoarea stocand-o in variabila B, conform cerintei.
        2.  Afisam B+1. 
    }
 
void cifre_de_0_si_1 () {
    int N, rest, rez=0, power=1, zero=0, unu=0;
    cin >> N;
    
    while (N) {
        rest = N%2;
        rez = rez + power*rest;
        power *= 10;
        N /= 2;
        
        if (rest == 0) {
            zero++;
        }
        if (rest == 1) {
            unu++;
        }
    }
    
    cout << zero << " " << unu;
    
    /// Numar 0 si 1 in interioarul while-ului pt ca daca as introduce N=10000, rezultatul ar depasi valoarea maxima a tipului de variabila int.
}

*/ /// Baze de numeratie

/*

void convertire_in_baza_10 () {
    int B, n=0, cifra=0;
    cin >> B;
    
    while (cifra < B) {
        n = n*B + cifra;
        cin >> cifra;
    }
    
    cout << n;
}

void convertire_in_baza_B () {
    int N, B, rest, rez=0, power=1;
    cin >> N >> B; /// Afisati numarul obtinut dupa convertirea acestuia in baza B.
    
    while (N) {
        rest = N%B;
        rez = rez + power*rest;
        power *= 10;
        N /= B;
    }
    
    cout << rez;
} 

Explicatie {
    -> Conditia while-ului cifra<=B inseamna ca o sa citim cifre pana apare o cifra mai mare ca baza B.
    
    Convertire din baza 10 in baza 2 {
        N = 48
        48/2 = 24 rest 0
        24/2 = 12 rest 0
        12/2 = 6 rest 0
        6/2 = 3 rest 0
        3/2 = 1 rest 1
        1/2 = 0 rest 1
        
        Deci 48 din baza 10 in baza 2 este: 110000
    }
    
    Convertire din baza 10 in baza 2 {
        n: 110000
        0*2 + 1 = 1
        1*2 + 1 = 3
        3*2 + 0 = 6
        6*2 + 0 = 12
        12*2 + 0 = 24
        24*2 + 0 = 48
        
        Deci 110000 din baza 2 in baza 10 este: 48
    }
}

*/ /// Conversii intre bazele de numeratie

/*

void numere_spartane() {
    int x, y;
    cin >> x >> y;
    
    /// Descompunem pe x in factori primi
    int divizorX = 2, putereX = 0;
    while (x > 1) {
        if (x%divizorX == 0) {
            while (x%divizorX == 0) {
                putereX++;
                x /= divizorX;
            }
        }
        divizorX++;
    }
    
    /// Descompunem pe y in factori primi
    int divizorY = 2, putereY = 0;
    while (y > 1) {
        if (y%divizorY == 0) {
            while (y%divizorY == 0) {
                putereY++;
                y /= divizorY;
            }
        }
        divizorY++;
    }
    
    if (putereX == putereY) {
        cout << "DA";
    } else {
        cout << "NU";
    }
}

void factori_olimpici() {
    int N;
    cin >> N;
    
    /// Descompunem numarul N in factori primi si in acelasi timp calculam maxu'
    int divizor=2, putere=0, F=0, P=0;
    
    while (N > 1) {
        if (N%divizor == 0) {
            putere = 0;
            while (N%divizor == 0) {
                putere++;
                N /= divizor;
                
                /// Aici calculez maxu'
                if (putere >= P && divizor >= F) {
                    P = putere;
                    F = divizor;
                }
            }
        }
        divizor++;
    }
    
    cout << F << " " << P;
}

*/ /// Descompunerea in facetori primi

/*

void echipa() {
    int N;
    cin >> N;
    
    int par = 0, impar = 0, nrCitit;
    for (int i = 1; i <= N; i++) {
        cin >> nrCitit;
        
        if (nrCitit % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    cout << par << " " << impar;
}

void numereleNorocoase() {
    int a, b; /// a, b fiind capetele intervalului de numere din care alegem numerele norocoase
    cin >> a >> b; /// numere norocoase = nr care pot fi scrise ca suma de 2 numere consecutive adica x%2 == 1
    
    for (int i=a; i<=b; i++) {
        if (i%2 == 1) {
            cout << i << " ";
        }
    }
}

*/ /// For

void convertire_in_baza_10 () {
    int B, n=0, cifra=0;
    cin >> B;
    
    while (cifra < B) {
        n = n*B + cifra;
        cin >> cifra;
    }
    
    cout << n;
}

int main() {
    convertire_in_baza_10();
    
    return 0;
}






