#include <iostream>

using namespace std;

/*

void primulMaximSiMinim() {
    int N, v[100], maxim = -9999, minim = 9999, pozMaxim, pozMinim;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        
        if (v[i] > maxim) {
            maxim = v[i];
            pozMaxim = i;
        }
        
        if (v[i] < minim) {
            minim = v[i];
            pozMinim = i;
        }
    }
    
    cout << maxim << " " << minim << " " << pozMaxim << " " << pozMinim;
}

void secretulVectorului() {
    int N, v[1000], suma = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        
        suma += v[i] % 10;
    }
    
    cout << suma;
}

void interschimbareaCapetelor() {
    int N;
    cin >> N;
    
    int v[1000];
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    for (int i = N-1; i >= 0; i--) {
        cout << v[i] << " ";
    }
}

void intersectieDoiVectori() {
    int N, M, v1[100], v2[100];
    
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> v1[i];
    }
    
    cin >> M;
    for (int i=0; i<M; i++) {
        cin >> v2[i];
    }
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (v1[i] == v2[j]) {
                cout << v1[i] << " ";
            }
        }
    }
}

*/ /// Citirea si afisarea unui sir

/*

void adaugLaVector() {
    int N, v[100];
    cout << "\nCate elemente sa aiba vectorul? "; cin >> N;
    
    /// Citire vector initial
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    /// Crestem numarul de casute ale vectorului cu o unitate
    N++;
    int adaugare, pozitie;
    cout << "\nCe numar sa adaug si pe ce pozitie? "; cin >> adaugare >> pozitie;
    
    /// Mutare elemente vector cu o pozitie la dreapta de la final pana la pozitie
    for (int i = N-1; i > pozitie; i--){
        v[i] = v[i-1];
    }
    
    /// Introducem numarul pe pozitia respectiva
    v[pozitie] = adaugare;
    
    /// Afisam vectorul final
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
}

void sirStralucitor() {
    int N, v[100], i;
    cin >> N;
    
    /// Citire vector
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    /// Nr prime consecutive
    bool prim1, prim2;
    int divizor;
    for (i = 0; i < N-1; i++) {
        /// Verific daca v[i] e prim
        prim1 = true;
        divizor = 2;
        if (v[i] == 0 || v[i] == 1) {
            prim1 = false;
        } else {
            while (divizor < v[i] / 2) {
                if (v[i] % divizor == 0) {
                    prim1 = false;
                }
                divizor++;
            }
        }
        
        /// Verific daca v[i+1] e prim
        prim2 = true;
        divizor = 2;
        if (v[i+1] == 0 || v[i+1] == 1) {
            prim2 = false;
        } else {
            while (divizor < v[i+1] / 2) {
                if (v[i+1] % divizor == 0) {
                    prim2 = false;
                }
                divizor++;
            }
        }
        
        /// Verific daca ambele sunt prime si adaug -13 pe pozitia i + 1
        if (prim1 == true && prim2 == true) {
            N++;
            int pozitie = i + 1;
            
            for (i = N-1; i > pozitie; i--) {
                v[i] = v[i-1];
            }
            
            v[pozitie] = -13;
        }
    }
    
    /// Afisare sir stralucitor :)
    for (i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
}

void elementulEsential() {
    int N, v[100], suma = 0, elemEsent = 0;
    cin >> N;
    
    /// Citire sir si calculez suma elementelor
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        suma += v[i];
    }
    
    /// Rotunjire suma la divizor de 10
    while (suma % 10 != 0) {
        suma++;
        elemEsent++;
    }
    
    /// Adaugare elemEsent in mijlocul sirului
    int pozitie = N/2;
    N++;
    for (int i = N-1; i > pozitie; i--) {
        v[i] = v[i-1];
    }
    v[pozitie] = elemEsent;
    
    /// Afisare vector final
    for (int i = 0;  i < N; i++) {
        cout << v[i] << " ";
    }
}

void rest() {
    int n, p;
    cin >> n >> p;
    
    int v[1000], valoare[100];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] % p << " ";
        }
        cout << v[i] << " ";
    }
}

*/ /// Adaugarea unui numar in vector

/*

void stergElemVec() {
    int n;
    cin >> n;
    
    /// Citire vector
    int v[100];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    /// Eliminare numar de pe o pozitie citita de la tastatura
    int pozitie;
    cout << "\nDe pe ce pozitie sa sterg? "; cin >> pozitie;
    
    for (int i = pozitie; i < n -1; i++) {
        v[i] = v[i+1];
    }
    
    n--;
    
    /// Eliminare numar de pe fiecare pozitie pe care se afla
    int element;
    cout << "\nCe element sa sterg? "; cin >> element;
    
    for (int i = 0; i < n; i++) {
        if (v[i] == element) {
            int pozitie = i;
            
            for (int j = pozitie; j < n-1; j++) {
                v[j] = v[j+1];
            }
            
            n--;
        }
    }
    
    /// Afisare vector final
    cout << "\nVectorul final este:\n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

void dubluri() {
    int n;
    cin >> n;
    
    int lei = n;
    
    /// Fiecare valoare este 0 initial in vectorul de aparitii sau pot declara global vectorul 
    int AP[1000];
    for (int i = 1; i < 1001; i++) {
        AP[i] = 0;
    }
    
    /// Incrementez valoarea pozitiilor numarului. EX: nr = {2, 3, 2} -> AP[1] = 0, AP[2] = 2, AP[3] = 1
    int nr;
    for (int i = 0; i < n; i++) {
        cin >> nr;
        
        AP[nr]++;
        
        if (AP[nr] < 2) {
            cout << nr << " ";
            lei--;
        }
    }
    
    cout << "\n" << lei*5 << " lei";
}

void nedorit() {
    int n, v[1000];
    cin >> n;
    
    /// Citire vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    /// Afisare indici (doar pentru cifre)
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    
    /// Eliminarea numerelor nedorite prin atribuirea valorii 0 indicelui respectiv
    int temp = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && v[i] == v[j]) {
                temp = v[i]; /// temp ia valoarea de eliminat si elimina toate elementele cu valoarea dublurii
                
                for (int out = 0; out < n; out ++) {
                    if (v[out] == temp) {
                        v[out] = 0;
                    }
                }
                
                cout << "\ntemp: " << temp << " (i: " << i << ", j: " << j << ")";
            }
        }
    }
    cout << "\n\n";
    /// Afisare vector final sarind peste elementele cu valoarea 0 (cele nedorite)
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            cout << v[i] << " ";
        }
    }

}

void nedorit() {
    int n, v[1000];
    cin >> n;
    
    /// Citire vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    /// Eliminarea numerelor nedorite prin atribuirea valorii 0 indicelui respectiv
    int temp = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (v[i] == v[j]) {
                    temp = v[i];
                    v[i] = 0;
                    v[j] = 0;
                }
                
                if (temp == v[j]) {
                    v[j] = 0;
                }
            }
        }
    }
    
    /// Afisare vector final sarind peste elementele cu valoarea 0 (cele nedorite)
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            cout << v[i] << " ";
        }
    }
} /// attempt 1 cu atribuirea de zero

void nedorit() {
    int n;
    cin >> n;
    
    int v[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int temp = -10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && v[i] == v[j]) {
                temp = v[i];
                
                /// Elimin v[i]
                for (int out = i; out < n; out++) {
                    v[out] = v[out+1];
                }
                n--;
                i--;
            }
            
            /// Elimin temp
            if (temp == v[j]) {
                for (int out = j; out < n; out++) {
                    v[out] = v[out+1];
                }
                n--;
                i--;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

} /// attempt 2 cu eliminarea dublurilor

*/ /// Eliminarea unui element din vector

/*

void munte() {
    int n, k;
    cin >> n >> k;
    
    int v[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    /// Ordonare crescatoare a primelor k elemente
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    /// Ordonare descrescatoare a urmatoarelor n-k elemente
    for (int i = k; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] < v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

void ordonat() {
    int n;
    cin >> n;
    
    int v[1000], copieV[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        copieV[i] = v[i];
    }
    
    unsigned int mutaDesc = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[i] < v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = v[i];
                mutaDesc++;
            }
        }
    }
    
    unsigned int mutaCresc = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (copieV[i] > copieV[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                mutaCresc++;
            }
        }
    }
    
    if (mutaCresc == 0) {
        cout << "Crescator";
    }
    if (mutaDesc == 0) {
        cout << "Descrescator";
    }
    if (mutaDesc != 0 && mutaCresc != 0) {
        cout << "Nu sunt ordonate";
    }
}

void jucarii() {
    int n;
    cin >> n;
    
    int v[15000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

/// O multime de rezolvari a functiei ordonat plus o intrebare

void deCeSeRepetaWhileDePatruOri() {
    int i, sir[] = {2, 3, 10, 213, 2}, sortat = 0, apar = 0;

    while(sortat == 0) {
        sortat = 1;

        for(i = 0; i < 4; i++) {
            if(sir[i] > sir[i + 1]) {
                int aux = sir[i];
                sir[i] = sir[i + 1];
                sir[i + 1] = aux; 
                sortat = 0;
            }
        }
    }
    
    /// Intrebare: De cate ori se repeta while-ul?
    /// De ce se repeta de 4 ori?
}

void ordonat1() {
    int n;
    cin >> n;
    
    int v[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    if (n < 3) {
        if (v[0] < v[1]) {
            cout << "Crescator";
        } else {
            cout << "Descrescator";
        }
    } else {
        bool crescator, descrescator;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] < v[i+1]) {
                crescator = true;
            } else {
                crescator = false;
                i = n;
            }
        }
        
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i+1]) {
                descrescator = true;
            } else {
                descrescator = false;
                i = n;
            }
        }
        
        if (crescator == false && descrescator == false) {
            cout << "Nu sunt ordonate";
        } else if (crescator == true) {
            cout << "Crescator";
        } else {
            cout << "Descrescator";
        }
    }
}

void ordonat4() {
    int n;
    cin >> n;
    
    int v[1000], crescator = 0, descrescator = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        
        if (i > 0 && i < n) {
            if (v[i] > v[i-1]) {
                crescator += 0;
            } else {
                crescator += 10;
            }
            
            if (v[i] < v[i-1]) {
                descrescator += 0;
            } else {
                descrescator += 10;
            }
        }
    }
    
    if (crescator == 0) {
        cout << "Crescator";
    } else if (descrescator == 0) {
        cout << "Descrescator";
    } else {
        cout << "Nu sunt ordonate";
    }
}

void ordonat6() {
    unsigned int n;
    cin >> n;
    
    int v[1000];
    for (unsigned int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    unsigned int mutari = 0;
    /// Daca mutari = 0 atunci vectorul e sortat crescator
    /// Altfel daca mutari = (n*(n-1))/2 atunci e sortat descrescator
    /// Altfel nu este ordonat
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                mutari++;
            }
        }
    }
    
    if (mutari == 0) {
        cout << "Crescator";
    } else if (mutari == (n*(n-1))/2) {
        cout << "Descrescator";
    } else {
        cout << "Nu este ordonat";
    }
}

void ordonat2() {
    int n;
    cin >> n;
    
    int v[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int descresc[100], cresc[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] < v[j]) {
                cresc[i] = v[i];
            } else {
                descresc[i] = v[i];
            }
        }
    }
    
    bool crescator, descrescator;
    for (int i = 0; i < n; i++) {
        if (v[i] == cresc[i]) {
            crescator = true;
        } else {
            crescator = false;
        }
        
        if (v[i] == descresc[i]) {
            descrescator = true;
        } else {
            descrescator = false;
        }
    }
    
    if (crescator == false && descrescator == false) {
        cout << "Nu sunt ordonate";
    } else if (crescator == true) {
        cout << "Crescator";
    } else {
        cout << "Descrescator";
    }
} /// wrong

void ordonat3() {
    int n;
    cin >> n;
    
    int v[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    bool cresc = false, descresc = false;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] < v[i+1]) {
            cresc = true;
        } else {
            cresc = false;
            i = n;
        }
        
        if (v[i] > v[i+1]) {
            descresc = true;
        } else {
            descresc = false;
            i = n;
        }
    }
    
    if (cresc == false && descresc == false) {
        cout << "Nu sunt ordonate";
    } else if (cresc == true) {
        cout << "Crescator";
    } else {
        cout << "Descrescator";
    }
} /// wrong

void ordonat5() {
    int n;
    cin >> n;
    
    int v[1000];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    /// Vectorul crescator
    int copie[1000];
    for (int i = 0; i < n; i++) {
        copie[i] = v[i];
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (copie[i] > copie[j]) {
                int aux = copie[i];
                copie[i] = copie[j];
                copie[j] = aux;
            }
        }
    } 
    
    int crescator[1000];
    for (int i = 0; i < n; i++) {
        crescator[i] = copie[i];
    }
    
    /// Vectorul descrescator
    for (int i = 0; i < n; i++) {
        copie[i] = v[i];
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (copie[i] < copie[j]) {
                int aux = copie[i];
                copie[i] = copie[j];
                copie[j] = aux;
            }
        }
    } 
    
    int descrescator[1000];
    for (int i = 0; i < n; i++) {
        descrescator[i] = copie[i];
    }
    
    /// Compar vectorul cu cel sortat crescator
    bool cresc = false;
    for (int i = 0; i < n; i++) {
        if (v[i] == crescator[i]) {
            cresc == true; 
        } else {
            cresc = false;
            i = n;
        }
    }
    
    /// Compar vectorul cu cel sortat descrescator
    bool descresc = false;
    for (int i = 0; i < n; i++) {
        if (v[i] == descrescator[i]) {
            descresc == true; 
        } else {
            descresc = false;
            i = n;
        }
    }
    
    /// Conditii
    if (cresc == true) {
        cout << "Crescator";
    } else if (descresc == true) {
        cout << "Descrescator";
    } else {
        cout << "Nu sunt ordonate";
    }
    
    /// Afisare vectori sortati
    cout << "\n\nVector crescator:\n";
    for (int i = 0; i < n; i++) {
        cout << crescator[i] << " ";
    }
    
    cout << "\n\nVector descrescator:\n";
    for (int i = 0; i < n; i++) {
        cout << descrescator << " ";
    }
} /// wrong

*/ /// Sortarea unui vector

void sirStralucitor() {
    int N, v[100], i;
    cin >> N;
    
    /// Citire vector
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    /// Nr prime consecutive
    bool prim1, prim2;
    int divizor;
    for (i = 0; i < N-1; i++) {
        /// Verific daca v[i] e prim
        prim1 = true;
        divizor = 2;
        if (v[i] == 0 || v[i] == 1) {
            prim1 = false;
        } else {
            while (divizor < v[i] / 2) {
                if (v[i] % divizor == 0) {
                    prim1 = false;
                }
                divizor++;
            }
        }
        
        /// Verific daca v[i+1] e prim
        prim2 = true;
        divizor = 2;
        if (v[i+1] == 0 || v[i+1] == 1) {
            prim2 = false;
        } else {
            while (divizor < v[i+1] / 2) {
                if (v[i+1] % divizor == 0) {
                    prim2 = false;
                }
                divizor++;
            }
        }
        
        /// Verific daca ambele sunt prime si adaug -13 pe pozitia i + 1
        if (prim1 == true && prim2 == true) {
            N++;
            int pozitie = i + 1;
            
            for (i = N-1; i > pozitie; i--) {
                v[i] = v[i-1];
            }
            
            v[pozitie] = -13;
        }
    }
    
    /// Afisare sir stralucitor :)
    for (i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    sirStralucitor(); /// Lol, i-am gasit o eroare: citesc: 9 7 5 4 7 9 1 si afisez: 9 7 -13 5 -13 4 7 9 1

    return 0;
}




