#include <stdio.h>
#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

using namespace std;

void unuDupa1(); /// problema 1
void nrAparDiftong(); /// problema 4
/// 20-mai-2023
bool SirulAreSpatii(char s[]);
bool SirulAreCifre(char s[]);
void InversulSirului(char s[]); /// @TODO
/// 13-iun-2023-21-50
void NumarCuCifreDinSiruri(); /// problema 2
void SecventaMaximaVocalaInOut(); /// problema 3
/// 20-iun-2023-15-33     
void mstrtok();
char* mstrstr(char *sir1, char *sir2);
char* mstrchr(char *sir, char s);
void mstrcpy(char *sir1, char *sir2);
void mstrcat(char *sir1, char *sir2);
unsigned int mstrcmp(char *sir1, char *sir2);
unsigned int mstrlen(char *sir);
void bac2020s3p2(); /// @TODO

/******************************************************************************/

int main() {
    bac2020s3p2();

    return 0;
}

/*BAC**************************************************************************/

void bac2020s3p2() {
    /// De tratat cazul in care cuvantul are doua litere si de ce se afiseaza doar un pentru un palc mic de scolarite ilumina sala
    char s[101], aux;
    char *cuvant;
    bool exista = false;
    int n, i, k;
    cin.get(s, 101);
    cuvant = strtok(s, " ");
    i = 0;
    k = 0;
    while (cuvant != NULL) {
        n = strlen(cuvant);
        if (!exista && n > 2) {
            exista = true;
        }
        aux = s[i]; /// sau s[k]
        i++;
        while (i < k - 1) {
            s[i] = s[i + 1];
        }
        s[k - 1] = aux;
        i = k + 1;
        cuvant = strtok(NULL, " ");
    }
    if (!exista) {
        cout << "Nu exista";
    } else {
        cout << s;
    }
    
}

/*Functii-RePreDefinite********************************************************/

unsigned int mstrlen(char *sir) {
    int i;
    for (i = 0; sir[i] != '\0'; i++); /// la sir[i] != NULL imi da warning: NULL used in arithmetic
    return i;
}

unsigned int mstrcmp (char *sir1, char *sir2) {
    int i;
    for (i = 0; sir1[i] != '\0' && sir2[i] != '\0' && sir1[i] == sir2[i]; i++); /// gasim pozitia in care avem/nu cifre diferite
    if (sir1[i] != '\0' && sir2[i] != '\0') { /// daca parcurgem for-ul pana la capatul unui sir cel putin atunci sirurile-s egale
        return sir1[i] - sir2[i];
    } else {
        return 0;
    }
}

void mstrcat (char *sir1, char *sir2) {
    int i = 0, j;
    while (sir1[i] != '\0') {
        i++;
    }
    for (j = 0; sir2[j] != '\0'; j++, i++) {
        sir1[i] = sir2[j];
    }
}

void mstrcpy (char *sir1, char *sir2) {
    int i;
    for (i = 0; sir2[i] != '\0'; i++) {
        sir1[i] = sir2[i];
    }
    sir1[i] = '\0'; /// deoarece punem aici caracterul NULL, strcpy("abcode", wo) face ca primul sir sa fie wo
}

char* mstrchr (char *sir, char s) {
    for (unsigned i = 0; sir[i] != '\0'; i++) {
        if (sir[i] == s) {
            return sir + i;
        }
    }
    return NULL;
}

char* mstrstr (char *sir1, char *sir2) {
    unsigned int i, j, k;
    for (i = 0; sir1[i] != '\0'; i++) {
        if (sir1[i] == sir2[0]) { /// daca gasim prima cifra a subsirului in sirul mama atunci (nu) e posibil sa se afle in sir
            bool gasit = true;
            unsigned int k = i + 1; /// k pastreaza pozitiile sirului mama
            for (j = 1; sir2[j] != '\0'; j++) {
                if (sir1[k] != sir2[j]) {
                    gasit = false;
                    sir2[j] = '\0'; /// break;
                }
            }
            if (gasit) {
                return sir1 + i;
            }
        }
    }
    return NULL;
}

void mstrtok() {
    char s[128] = "Calul sare azi";
    char *cuvant = strtok(s, " ");
    cout << "strtok(s, \" \") = \n";
    /// int i = 0;
    while(cuvant != NULL) {
        /// cout << "token: " << cuvant << "\ns[" << i << "]: " << s[i] << "\n";
        /// i = i + strlen(cuvant);
        cout << cuvant << "\n";
        cuvant = strtok(NULL, " ");
    }
}

/*Probleme-din-clasa***********************************************************/

void unuDupa1() {
    char t[51], aux[51];
    cin >> t;
    
    for (int i = 0; i < strlen(t); i++) {
        if (t[i] == '1') {
            strcpy(aux, t + i + 1); /// copiem in aux ce se afla dupa caracterul t[i]
            strcpy(t + i + 1, "unu"); /// copiem in t, pe pozitia i + 1 sirul "unu"
            strcat(t, aux); /// lipim sirul t si copia aux
        }
        if (t[i] == '2') {
            strcpy(aux, t + i + 1);
            strcpy(t + i + 1, "doi");
            strcat(t, aux);
        }
    }
    
    cout << t;
}

void NumarCuCifreDinSiruri() {
    ifstream fin("main.in");
    char s[256], t[256];
    int i, n, numar = 0, schimb;
    fin >> s;
    fin >> t;
    strcat(s, t);
    n = strlen(s);
    for (i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            schimb = s[i] - '0'; /// s[23] = 0, s[24] = 1, s[25] = 2, ... s[23+9] = 9
            numar = numar * 10 + schimb;
        }
    }
    cout << numar;
}

void SecventaMaximaVocalaInOut() {
    ifstream fin ("main.in");
    int i, n, prim = -1, ultim = -1;
    char v, s;
    fin >> v >> n;
    for (i = 0; i < n; i++) {
        fin >> s;
        if (prim == -1 && s == v) {
            prim = i;
        }
        if (s == v) {
            ultim = i;
        }
    }
    if (prim == -1 || ultim == -1) {
        cout << "Nu exista!";
    } else {
        cout << ultim - prim + 1;
    }
}

void nrAparDiftong() {
    /// Citim string s cel mult 400 car, det primul cuv cu 2 voc pe poz cons si afisam cuv si nr apar, altfel mesajul "Nu exista!"
    char s[401], *p, cuv[201], vocale[] = {"aeiouAeiou"};
    int nrApel = 0, i;
    
    cin.get(s, 401);
    p = strtok(s, " "); /// Extragem primul cuvant
    
    while (p!=NULL && nrApel==0) {
        for (i = 0; i < strlen(p) - 1; i++) {
            if (strchr(vocale, p[i]) != 0 && strchr(vocale, p[i + 1]) != 0) { /// cautam doua vocale consecutive
                nrApel++;
                strcpy(cuv, p); /// salvam cuvantul dorit in cuv
                break;
            }
            p = strtok(NULL, " "); /// sarim peste cuvantul anterior, extragem urmatorul
        }
    }
    
    while (p != NULL) {
        if (strcmp(cuv, p) == 0) { /// comparam cuvantul gasit cu fiecare din "sirul mama"
            nrApel++;
        }
        p = strtok(NULL, " "); /// trecem la urmatorul
    }
    
    if (nrApel == 0) {
        cout << "Nu exista!";
    } else {
        cout << cuv << " " << nrApel;
    }
}

/*Abcode***********************************************************************/

bool SirulAreCifre(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            return true;
        }
    }
    return false;
    /*
    char sir[256];
    cin.get(sir, 256);
    
    if (SirulAreCifre(sir)) {
        cout << "\nSirul are cifre";
    } else {
        cout << "\nSirul nu are cifre";
    }
    */
}

bool SirulAreSpatii(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            return true;
        }
    }
    return false;
    /*
    char sir[256];
    cin.get(sir, 256);
    
    if (SirulAreSpatii(sir)) {
        cout << "\nSirul are spatii";
    } else {
        cout  << "\nSirul nu are spatii";
    }
    */
}