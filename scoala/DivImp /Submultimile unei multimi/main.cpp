/******************************************************************************

Fie n un intreg dat. Sa se genereze toate submultimile multimii 1 2 3 ... n

*******************************************************************************/
#include <iostream>
using namespace std;

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


