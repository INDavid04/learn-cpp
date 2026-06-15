#include <iostream>
using namespace std;

/*

Teorie si cerinte {
    Numim functie recursiva o functie care se autoapeleaza din corpul ei.
Orice program care foloseste un ciclu se poate implemeta si recursiv.
Orice functie recursiva trebuie sa conduca spre un caz particular in care
se incheie recursivitatea.

EX1: n! = 1*2*3*...*n, n numar natural
Scrieti o functie recursiva care primeste ca parametru un numar intreg n
si returneaza n factorial.

EX2: Scrieti o functie recursiva care afiseaza primele n elemete din
sirul lui Fibonachi.

EX3: Scrieti o functie recursiva care calculeaza cel mai mare divizor
comun a doua numere a si b date ca parametrii.

EX4: Scrieti o functie recursiva care primeste ca parametru un numar
intreg si returneaza numarul de cifre pare.
}

int fact (int nr) {
    if (nr==0){
        return 1;
    } else {
        return nr*fact(nr-1);
    }
}

long fib(int k){
    if (k==1 || k==2){
        return 1;
    } else {
        return fib(k-1)+fib(k-2);
    }
}

int cmmdc (int a, int b){
    if (a==b){
        return a;
    } else {
        if (a>b){
            return cmmdc (a-b, b);
        }
    } else {
        return cmmdc (a, b-a);
    }
}

*/ /// Recursivitate

/*

int st[25], n;

void initializari(){
    int i;
    cout << "\nn="; cin >> n;
    for (i=1; i<=n; i++){
        st[i]=0;
    }
}

void tipar(int p){
    int j;
    for (j=1; j<=p; j++){
        cout << st[j] << " ";
    }
    cout << "\n";
}

int valid(int p){
    int i, ok;
    ok=1;
    for(i=1; i<=p-1; i++){
        if (st[p] == st[i]) {
            ok=0;
        }
    }
    return ok;
}

void backtracking (int p){
    int pval;
    for (pval=1; pval<=n; pval++){
        st[p]=pval;
        if(valid(p)){
            if(p==n){
                tipar(p);
            } else {
                backtracking(p+1);
            }
        }
    }
}

int main(){
    initializari();
    backtracking(1);

    return 0;
}

*/ /// Permutari de n elemente

/*

int st[50], nr[50], n;

void initializari (){
    int i;
    cout << "\nn: "; cin >> n; /// Citim numarul de multimi
    
    for(i=1; i<=n; i++){
        st[i] = 0;
    }
    for(i=1; i<=n; i++){
        cout << "\nNumarul de elemete al multimii: " << i << ": "; cin >> nr[i];
    }
}

int valid(int p){
    return 1;
}

void tipar(int p){
    int j;
    for(j=1; j<=p; j++){
        cout << st[j] << " ";
    }
    cout << "\n";
}

void back () {
    int p=1;
    st[p]=0;
    while (p>0){
        if(st[p]<nr[p]){ /// Daca mai exista valori neincercate pe nivelul p
            st[p]++; /// Punem in stiva urmatoarea valoare
            
            if(valid(p)){
                if(p==n){
                    tipar (p);
                } else {
                    p++;
                    st[p]=0;
                }
            }
            
        } else {
            p--;
        }
    }
}

int main() {
    initializari();
    back();
    
    return 0;
}



*/ /// Produs cartezian de n multimi

/*

int i, n, st[50];

int initializari(){
    cout << "\nn: "; cin >> n;
    for (i=1; i<=n; i++){
        st[i] = 0;
    }
}

void tipar(int p){
    for (int i=1; i<=p; ++i){
        cout << st[i] << " ";
    }
    cout << "\n";
}

int valid (int p){
    if (p==1){
        return true;
    }
    if (st[p] > st[p-1]){
        return true;
    }
    return false;
}

void back (int p){
    int pval;
    for (pval=1; pval <=n; pval++){
        st[p] =pval;
        if (valid(p)){
            tipar(p);
            back(p+1);
        }
    }
}

int main(){
    initializari();
    back(1);

    return 0;
}

*/ /// Submultimile unei multimi

int main () {
    
    return 0;
}
