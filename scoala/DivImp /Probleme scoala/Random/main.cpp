#include <iostream>

using namespace std;

/*

void matrice1() {
    int n, mat[25][25], L1, i, j, aux, maxim=-1000000;

    cout << "\nn = "; cin >> n;

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout << "\nmat[" << i << "][" << j << "] = "; cin >> mat[i][j];
        }
    }

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            if (i>j){
                mat[i][j] = mat[i][i];
            } else {
                mat [i][j] = mat[j][j];
            }
        }
    }

    cout << "\nMatricea este: \n";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nL1 = "; cin >> L1;

    for (i=1; i<=n; i++){
        j=L1;
            if (mat[i][j]>maxim){
                aux = maxim;
                maxim = mat[i][j];
                mat[i][j] = aux;
            }
    }


    cout << "\nMatricea este: \n";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrice2() {
    int a[10][10], n, i, j, sum=0, p=1, nr, sum2=0;

    cout << "De ce ordin sa fie matricea patratica? \n";
    cin >> n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
                /// Suma elemetelor de pe diag principala
              if(i==j){
                sum += a[i][j];
              }

              /// Media aritmetica a elem aflate pe linii pare si coloane impare
              if((i%2==0) && (j%2==1)){
                    sum2 += a[i][j];
                    nr++;
              }
        }
    }

            /// Produsul elementelor situate in triunghiul superior
    for (i=1; i<=n-1; i++){
        for (j=i+1; i<=n; j++){
            p *= a[i][j];
        }
    }

    for(i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout << a[i][j] << "   ";
        }
        cout << "\n";
    }

    cout << "\nSuma este " << sum;
    cout << "\nProdusul este " << p;
    cout << "\nMedia aritmetica este " << float(sum2/nr);
}

void interclasareVectori() {
    int x[1], y[1], i, j, m, n, k, z[1];

    cout << "m= "; cin >> m;
    cout << "\nx[1]= "; cin >> x[1];

    for (i=2; i<=m; i++){
        do {
            cout << "\nx[" << i << "]= "; cin >> x[i];
        } while (x[i] <= x[i-1]);
    }

    cout << "\n\nn= "; cin >> n;
    cout << "\ny[1]= "; cin >> y[1];

    for (j=2; j<=n; j++){
        do {
            cout << "\ny[" << j << "]= "; cin >> y[j];
        } while (y[j] <= y[j-1]);
    }

    /// ALG interclasare
    i=j=k=1;
    while (i<=m && j<=n){
        if (x[i] < y[i]){
            z[k] = x[i];
            i++;
            k++;
        } else {
            z[k] = y[i];
            i++;
            k++;
        }
    }

    if(i <= m){
        while (i<=m){
            z[k] = x[i];
            i++;
            k++;
        }
    }

    if(j <= m){
        while (i<=m){
            z[k] = y[j];
            i++;
            k++;
        }
    }

    cout << "\nVectorul obtinut este: \n";
    for (i=1; i<=k-1; i++){
        cout << z[i] << " ";
    }
}

*/ /// Matrici si vectori

/*

long calcul (long n){
    long x=0, d;
    d=n;

    while(d){
        if (d%10%2==0){
            x = x*10+d%10;
        }
        
        d/=10;
    }

    return x;
}

void numarConsoaneSiVocale() {
    char s[101], sc[101], sv[101];
    int i, n, kc=0, kv=0;

    cin >>s;
    n = strlen(s);

    for (i=0; i<n; i++){
        if (strchr("aeiouAEIOU", s[i])){
            sv[kv] = s[i]; /// VOCALE
            kv ++;
        } else {
            sc[kc] = s[i]; /// CONSOANE
            kc ++;
        }
    }

    cout << "\nVocale: " << sv << " in numar de: " << kv;
    cout << "\nConsoane: " << sv << " in numar de: " << kc;
}

void struct1() {
    /// Asta trebuie in afara functiei:
        typedef struct{
        string titlu;
        int nrexemple;
        float pret;
        float val;
    } CARTE;

    CARTE carti[80];

    int n, decizie, valtotal=0;
    cout << "Dati o valoare lui n: ";
    cin >> n >> decizie;

    for (int i=0; i<n; i++){
        cout << "Titlul este: "; cin >> carti[i].titlu;
        cout << "Numarul de exemplare este: "; cin >> carti[i].nrexemple;
        cout << "Pretul cartii este: "; cin >> carti[i].pret;
    }

    switch (decizie){
    case 1:
        cout << "Titlul ete: "; cin >> carti[decizie].titlu;
        cout << "Numarul de exemplare este: "; cin >> carti[decizie].nrexemple;
        cout << "Pretul este: "; cin >> carti[decizie].pret;


    case 2:
        for (int i=0; i<n; i++){
            carti[i].val = carti[i].pret + carti[i].nrexemple;
            valtotal += carti [i].val;
        }

        cout << "Valoarea totala a cartilor din librarie este " << valtotal;
        break;

    case 3:
        for (int i=0; i<n; i++){
            cout << "Tiltu: " << carti[i].titlu;
            cout << "Nr exemple: " << carti[i].nrexemple;
            cout << "Pret: " << carti[i].pret;
            cout << "Val: " << carti[i].val;
            cout << endl;
        } break;
    }
}

*/ /// A mai ramasa sap: 9 si 11

int main() {
    

    return 0;
}
