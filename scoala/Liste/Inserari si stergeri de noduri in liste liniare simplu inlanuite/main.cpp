/******************************************************************************

    Fiecare nod e legat prin pointeri atat de nodurile dinaintea lui cat si de nodul aflat dupa el. 

*******************************************************************************/
#include <iostream>

using namespace std;

typedef struct un_nod {
    int info;
    un_nod *urm, *prec;
} TNOD;

typedef TNOD *PNOD; /// folosit pt redenumire (typedef float real; schimba numele tipului de variabila)

void afisare_dr (PNOD prim, PNOD ultim) {
    PNOD p = ultim->prec;
    while (p != prim) {
        cout << p->info << " ";
        p = p->prec;
    }
}

void afisare_st (PNOD prim, PNOD ultim) {
    PNOD p = prim->urm;
    while (p != prim) {
        cout << p->urm << " ";
        p = p->urm;
    }
}

TNOD *inserare_sfarsit (TNOD*p) {
    TNOD *q, *nou;
    q = p; /// facem o copie a lui p pe care o vom muta la ultimul nodul
    
    while (q->urm != NULL) {
        q = q->urm;
    }
    
    nou = new TNOD; /// alocam spatiu in memorie pt noul nodul
    cout << "\ninfo: "; cin >> nou->info; /// citim informatia
    nou->urm = NULL; /// leaga nodul in lista si noul nod devine ultimul
    q->urm = nou;
    
    return p;
}

TNOD *stergere_inceput (TNOD*p) {
    TNOD *q;
    q = p->urm;
    delete p;
    
    return q;
}

TNOD *stergere_interior (TNOD *p, int k) {
    TNOD *q, *r;
    int i;
    q = p;
    for (i=2; i<=k-1; i++){
        q = q->urm;
    }
    
    r = q->urm;
    q->urm = r->urm;
    
    delete r;
    return p;
}

int main() {
    

    return 0;
}


