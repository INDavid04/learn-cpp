/******************************************************************************

    Coada este o lista de tip FIFO (first in first out - primul sosit primul servit)
    in care adaugarea elemetelor se face pe la un capat numit capat de introducere
    iar eliminarea se face pe la celalalt numit capat de extragere.

    Se numeste LISTA un ansamblu de noduri/celule legate intre ele.
    
    Numim NOD o unitate informationala de sine statatoare care contine informatii utile
    (date numerice, intregi sau reale) si date de legatura.
    
    EXEMPLE {
    
    typedef struct un_elev {
        char nume[30];
        float media;
        un_elev *urm;
    } TELEV;
    TELEV *x; // x este un pointer catre un elev
    
        Campurile elevului *x sunt: (*x).nume, (*x).media, x(*x).urm care se mai pot scrie:
    x->nume, x->media, x->urm
    
    
    
    Declararea si reprezentarea unei liste liniare simplu inlantuite de numere intregi:
    
    typedef struct un_nod{
        int info;
        un_nod *urm;
    } TNOD;
    TNOD *x, *y, *z, *t;
    
    
    Functia void afisare_1(TNOD *p) tipareste cheile memorate in nodurile unei liste
    Paramentru p reprezinta pointerul catre primul nod al listei.
    
    void afisare_1(TNOD *p){ /// cat timp pointerul p nu a ajuns la finalul listei
        while (p){
            cout << p->info << " "; /// afiseaza informatia din nodul p
            p=p->urm; /// muta pointerul la nodul urmator
        }
    }

    }
    
    I. Prima varianta a functiei de creare. {
    Primul nod se creaza sparat, pentru el legaturile stabilindu-se intr-un alt mod decat pentru celelate.
    Celelate noduri se creaza intr-un ciclu for, deoarece legaturile se realizeaza la fel. Fiecare nod
    incepand cu al doilea se adauga la sfarsitul listei existente. Astfel, prin parcurgerea listei de la
    stanga, vom vizita nodurile in ordinea in care au fost create.
    
    Stergerea nodului cu numarul de ordine k din interiorul listei {
    
        Tnod *stergere_interior(Tnod *p, int k){
            Tnod *q, *r // avem nevoie de doi pointeri, unul spre nodul k ce urmeaza a fi sters si altul spre nodul anterior k-1
            int i;
            q=p; // facem o copie a pointerului pointerului pointerului
            
            for (i=2; i<=k-1; i++){
                q=q->urm;
            }
            r=q->urm;
            q->urm = r->urm;
            delete r;
            return p;
        }
    }
    
    }
    
    II. A doua varianta a functiei de creare {
        
        typedef struct un_nod {
            int info;
            un_nod *urm;
        } TNOD;
        
        TNOD*L;
        
        void afisare (TNOD*p) {
            while (p) {
                cout << p-> info << " ";
                p = p->urm;
            }
        }
        
        TNOD* creare () {
            TNOD *prim, *nou;
            int n, i;
            cout << "\nn: "; cin >> n;
            prim = NULL; /// initial lista e vida
            
            for (i=1; i<=n; i++) {
                nou = new TNOD; /// alocamemorie pt nodul nou
                cout << "\nCheia din nodul " << i << " este: ";
                cin >> nou->info;
                
                nout->urm = prim;
                prim = nou;
            }
            
            return prim; /// functia returneaza pointer catre primul nod
        }
        
        int main () {
            L = creare();
            cout << "\nElementele listei afisate in ordine inversa sunt: \n";
            afisare (L);
            
            return 0;
        }
        
    }
    
    Inserari si stergeri de noduri in liste liniare simplu inlantuite {
        
TNOD *inserare_inceput (TNOD *p) {
    TNOD *nou;
    nou = new TNOD; /// se aloca memorie pt noul nod
    cout << "\nInformatia din noul nod: "; cin >> nou->info;
    nou->urm = p; /// se leaga noul nod in lista in fata nodului p care e primul nod
    return nou; /// noul nod devine primul,, deci functia returneaza pointer catre primul nod
}

TNOD *inserare_interior (TNOD *p) {
    TNOD *p, *nou;
    int l ,k;
    cout << "\nk: "; cin >> k;
    q = p; /// facem o copie a lui p si o mutam peste k-1 noduri pana ajunge la pozitia k
    
    for (i=1; i<=k; i++) {
        q = q->urm; /// intre pozitiile lui k si k+1 vom insera noul nod
    }
    
    nou = new TNOD; /// alocam spatiu in memorie pt noul nod
    cout << "\ninfo: "; cin >> nou->info; /// citim informatia
    nou->urm = q->urm; /// legam nodul intre nodurile k si k+1
    q->urm = nou;
    
    return p;
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
        
    }

*******************************************************************************/

#include <iostream>
using namespace std;

typedef struct un_nod{
    int info;
    un_nod *urm;
} TNOD;

TNOD *L;

void afisare_1(TNOD *p){ /// cat timp pointerul p nu a ajuns la finalul listei
    while (p){
        cout << p->info << " "; /// afiseaza informatia din nodul p
        p=p->urm; /// muta pointerul la nodul urmator
    }
}

TNOD* creare_lista(){
    TNOD *prim, *ultim, *nou;
    int n, i, x;
    
    cout << "\nn: "; cin >> n;
    
    prim = new TNOD; /// creeaza separat primul nod
    cout << "\nDati informatia din primul nod: "; cin >> prim->info; /// primul nod este deocamdata si ultimul
    
    prim->urm=NULL;
    ultim = prim; /// creeaza intr-un ciclu celelate noduri
    
    for (i=2; i<=n; i++){
        nou = new TNOD;
        
        cout << "\nDati informatia din nodul " << i << ": "; cin >> nou->info;
        nou -> urm = NULL;
        ultim -> urm = nou; /// leaga nodul creat in lista
        ultim = nou; /// nodul creat devine acum ultimul
    }
    
    return prim;
}

int main(){
    L = creare_lista();
    
    cout << "\nElementele listei sunt afisate in ordinea in care au fost create.";
    cout << "\nLista creata este :\n";
    afisare_1(L);

    return 0;
}