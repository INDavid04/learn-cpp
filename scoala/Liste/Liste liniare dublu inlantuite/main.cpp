/******************************************************************************

    Fiecare nod e legat prin pointeri atat de nodul dinaintea lui cat si de nodul aflat dupa el.
    
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

void creare_lista (PNOD &prim, PNOD &ultim) {
    PNOD nou;
    int n, i;
    cout << "\nn: "; cin >> n;
    
    prim = new TNOD;
    utlim = new TNOD;
    
    prim->urm = urm;
    ultim->prec = prim;
    prim->prec = NULL;
    ultim->urm = NULL;
    
    for (i=1; i<=n; i++) { /// Creeaza intr-un ciclu cele n noduri cu informatia utila
        nou = ultim; /// santinela de sfarsit devine noul nod care va fi adaugat
        
        cout << "\nInformatia din nodul " << i << ": ";
        cin >> nou->info;
        
        ultim = new TNOD; /// aloca memorie pentru a crea o alta santinela de sfarsit
        nou->urm = ultim; /// leaga ultimul nod cu informatia utila
        ultim->prec = nou;
        ultim ->urm = NULL;
    }
}

*******************************************************************************/
#include <iostream>

using namespace std;


int main() {
    cout<<"Hello World";

    return 0;
}

