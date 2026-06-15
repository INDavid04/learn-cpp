/******************************************************************************

Fie n un intreg dat si a1 a2 ... an n multimi avand numarul de elemete n1 n2 .. nn.
Scrieti un program C++ care genereaza toate elementele produsului cartezian a1xa2x...an

*******************************************************************************/
#include <iostream>
using namespace std;

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


