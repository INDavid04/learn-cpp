/******************************************************************************

Enunt {
    Sa se creeze o lista liniara simplu inlantuita ale carei chei din noduri 
    vor fi elem unui sir de numere intergi din fisierul NUMERE.TXT.
    Fisierul contine pe primul rand numarul n de elem ale sirului, apoi pe
    fiecare din urmatoarele n randuri cate un elem al sirului. Scrieti apoi un 
    subprogram care primeste ca parametru un pointer catre primu nod al listei
    si sterge nodul in care este memorat cel mai mare numar din lista.
    Functia va returna lista ramasa dupa stergere.
}

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

typedef struct un_nod {
    int info;
    un_nod *urm;
} TNOD;
TNOD *L;

int n;

void afisare (TNOD *p){
    while (p){
        cout << p-> info << " ";
        p = p->urm;
    }
}

TNOD *creare (){
    TNOD *prim, *ultim, *nou;
    FILE *f;
    int i;
    
    f = fopen ("numere.txt", "r");
    fscanf (f, "%d\n", &n);
    cout << "\nLista are " << n << " noduri!";
    prim = new TNOD;
    fscanf (f, "%d\n", &prim->info);
    pri->urm = NULL;
    ultim = prim;
    
    for (i=2; i<=n; i++){
        nou = new TNOD;
        fscanf (f, "%D\n", &nou->info);
        nou->urm = NULL;
        ultim = nou;
    }
    
    fclose(f);
    return prim;
}

TNOD *sterg_sfarsit (TNOD *p){
    TNOD *q;
    q=p;
    
    while (q->urm->urm){
        q = q->urm;
    }
    delete q-> urm;
    q->urm = NULL;
    return p;
}

TNOD *sterg_inceput (TNOD *p){
    TNOD *q;
    q=p->urm;
    delete q;
    return p;
}

Tnod *sterg_interior(Tnod *p, int k){
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

TNOD *sterg_maxim (TNOD *p){
    TNOD *u;
    int max, ord, i;
    u=p;
    max = INT_MIN;
    ord = 0;
    i = 0;
    
    while (u){
        i++;
        if (u->info > max){
            max = u-> info;
            ord = i;
        }
        u = u->urm;
    }
    
    cout << "\nElementul maxim este: " << max << " si are pozitia " << ord;
    
    if (ord==1){
        p = sterg_inceput(p);
    } else if (ord==n){
        p = sterg_sfarsit(p);
    } else {
        p = sterg_interior(p, ord);
    }
    
    return p;
}

int main(){
    L = creare();
    afisare (L);
    cout << "\n";
    L = sterg_maxim(L);
    cout << "\nLista dupa stergere este: \n";
    Afisare (L);

    return 0;
}