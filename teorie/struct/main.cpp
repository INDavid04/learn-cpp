#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

/// Exemplu de la clasa
struct melodie { char nume[30], autor[20], tara[20]; int loc_top, an_top; } m[200];
void melodiiLocTop3Din2018(); /// TODO problema 1 din folderul structuri de date omogene
/// 22-mai-2023
struct complex { double reala; double imaginara; };
void SumaTreiComplexe();
/// 06-iun-2023
//2 Afis nr medalii aur, nr medalii argint si nr medalii bronz obtinute de sportivii din judetul Iasi in anul 2023
struct medalie { char nume[20], judet[30], nume_medalie[10]; int an; } sp[500];
void NrMedaliiIasi2023();
//3 Afis nume pacienti programati pt consultatii la cabient stomatologie pe 10 august 2023 si nr pacienti prog la aceasta data
struct data { int zi, luna, an; }; /// folosit la p4, p8
struct consultatie { char pacient[20], cabinet[40]; data data_cons; } c[100];
void PacientiProgramati();
//4 Afis dest (tara, oras) si data pt fiecare din excurs la care s-a inscris pers cu nume mem prin var numed sau “Nicio excursie”.
struct excursie { char nume[30], oras[40], tara[30]; data data_exc; } e[300]; char numed[30]; /// tipul data declarat la p3
void DestinatieExcursie();
//5 Are valoarea 1 daca triunghiul ale carui laturi sunt memorate in variabila t este un triunghi isoscel fara a fi echilateral.
struct triunghi { float a, b, c; } t;
bool IsoscelNuEchilateral();
/// 21-iun-2023-21-04
//6 Afis pt magaz M, pt fiec din cele nrProduse, \n, val tot a stoc (cantitate*pret), daca are cant dif 0, cod prod in caz contrar
struct produs { int cod; float cant, pret; };
struct magazin { produs P[100]; int nrProduse; } M;
void ValTotStocSauCodProd();
//7 Citim de la tastatura numarul de jucatori ai echipei E si informatiile despre acestia
struct jucator { int nrTricou, marimeTricou; };
struct echipa { int nrJucatori; jucator juc[20]; } E;
void CitireNrJucatoriSiInfo();
//9 Afis suma incasata din vanz bil pt toate spec desf in mai 2019. Afis date calend in care au fost sustinute spec de ILCaragiale
struct spectacol { char denumire[30], autor[20]; data data_sp; int nr_bilete, pret; } s[50]; /// tipul data declarat la p3
void SumBilMai2019CalendarSpec();
//10 Nume lector care au prez art in 2019, la conf IT Ro, SUA, Jap; Nume participant din aprilie 2019, la conf med Iasi si nr lor
struct conferinta { char denumire[30], oras[20], tara[25], tematica[20]; data data_conf; char nume[20], tip_inreg[20]; } c[100];
void LectorParticipant();

int main() {
    SumBilMai2019CalendarSpec();
    
    return 0;
}

void LectorParticipant() {
    if (strcmp("lector", c[0].tip_inreg) && c[0].data_conf.an == 2019 && strcmp("IT", c[0].tematica) && strstr("RomaniaSUAJaponia", c[0].tara)) {
        cout << c[0].nume << "\n";
    }
    unsigned nrpart = 0;
    if (strcmp("participant", c[0].tip_inreg) && c[0].data_conf.an == 2019 && c[0].data_conf.luna == 4  && strcmp("medicina", c[0].denumire) && strstr("Iasi", c[0].tara)) {
        cout << c[0].nume << "\n";
        nrpart++;
    }
    cout << nrpart;
}

void SumBilMai2019CalendarSpec() {
    int i, n; /// numarul de spectacole
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "\nSpectacol " << i + 1 << ": data(ZZ/LL/AAAA), nr_bilete, pret: ";
        cin >> s[i].data_sp.zi >> s[i].data_sp.luna >> s[i].data_sp.an >> s[i].nr_bilete >> s[i].pret;
        cout << "\n\tAutor: ";
        cin.get(s[i].autor, 20); /// ceva probleme aci, rationamentul e corect
    }
    unsigned int suma = 0;
    for (i = 0; i < n; i++) {
        if (s[i].data_sp.an == 2019 && s[i].data_sp.luna == 5) {
            suma = suma + s[i].nr_bilete * s[i].pret;
        }
    }
    cout << "\nSuma incasata din vanzarile biletelor pentru toate spectacolele desfasurate in mai 2019 este " << suma;
    for (i = 0; i < n; i++) {
        if (strcmp(s[i].autor, "I. L. Caragiale")) {
            cout << s[i].data_sp.zi << "-" << s[i].data_sp.luna << "-" << s[i].data_sp.an << "-";
        }
    }
}

void CitireNrJucatoriSiInfo() {
    cin >> E.nrJucatori;
    for (int i = 0; i < E.nrJucatori; i++) {
        cin >> E.juc[i].nrTricou >> E.juc[i].marimeTricou;
    }
}

void ValTotStocSauCodProd() {
    M.nrProduse = 3;
    M.P[0].cod = 7854; M.P[0].cant = 5; M.P[0].pret = 2.1;
    M.P[0].cod = 1829; M.P[1].cant = 7; M.P[1].pret = 9.4;
    M.P[0].cod = 1001; M.P[2].cant = 0; M.P[2].pret = 5.0;
    for (int i = 0; i < M.nrProduse; i++) {
        if (M.P[i].cant) {
            cout << M.P[i].cant * M.P[i].pret << "\n";
        } else {
            cout << M.P[i].cod << "\n";
        }
    }
}

bool IsoscelNuEchilateral() {
    if ((t.a == t.b && t.a != t.c) || (t.a == t.c && t.a != t.b) || (t.b == t.c && t.b != t.a)) {
        return true;
    }
    return false;
}

void DestinatieExcursie() {
    int i;
    bool afisat = false;
    for (i = 0; i < 30; i++) {
        if (strcmp(numed, e[i].nume) == 0) {
            afisat = true;
            cout << e[i].tara << " " << e[i].oras << " " << e[i].data_exc.zi << " " << e[i].data_exc.luna << " " << e[i].data_exc.an << "\n";
        }
    }
    if (!afisat) {
        cout << "Nicio excursie";
    }
}

void PacientiProgramati() {
    int i, contor = 0;
    for (i = 0; i < 100; i++) {
        if (strcmp(c[i].cabinet, "stomatologie") == 0) {
            if (c[i].data_cons.zi == 10 && c[i].data_cons.luna == 8 && c[i].data_cons.an == 2023) {
                cout << c[i].pacient << " ";
                contor++;
            }
        }
    }
    cout << contor;
}

void NrMedaliiIasi2023() {
    int i, aur = 0, argint = 0, bronz = 0;
    for (i = 0; i < 500; i++) {
        if (strcmp(sp[i].judet, "Iasi") == 0 && sp[i].an == 2023) {
            if (strcmp(sp[i].nume_medalie, "aur") == 0) {
                aur++;
            }
            if (strcmp(sp[i].nume_medalie, "argint") == 0) {
                argint++;
            }
            if (strcmp(sp[i].nume_medalie, "bronz") == 0) {
                bronz++;
            }
        }
    }
    cout << aur << " " << argint << " " << bronz;
}

void SumaTreiComplexe() {
    complex a, b, c, suma;
    
    cout << "\nPartea reala si imaginara a primului numar: ";
    cin >> a.reala >> a.imaginara;
    
    cout << "\nPartea reala si imaginara a celui de al doilea numar: ";
    cin >> b.reala >> b.imaginara;
    
    cout << "\nPartea reala si imaginara a ultimului numar: ";
    cin >> c.reala >> c.imaginara;
    
    suma.reala = a.reala + b.reala + c.reala;
    suma.imaginara = a.imaginara + b.imaginara + c.imaginara;
    
    cout << "\nSuma celor trei numere complexe este: " << suma.reala << " + " << suma.imaginara << "i";
}

void melodiiLocTop3Din2018() {
    for (int i = 0; i <= 200; i++) {
        if (strcmp(m[i].tara, "Romania") == 0 && m[i].loc_top <= 3 && m[i].an_top == 2018) {
            cout << m[i].nume << "\n";
        }
    }
}