#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
dst 213 --- ddsttt
*/

int main()
{
    char sir_lit[100], sir_cif[100], sir[100];
    int n, nRep, i, j;
    
    cin >> sir_lit;
    cin >> sir_cif;
    n = strlen (sir_lit);
    
    for (i=0; i<=n; i++){
        nRep = sir_cif[i] - '0'; // transforma "1" in 1, caracter in cifra
        
        for (j=1; j<=nRep; j++){
            cout << sir_lit[i];
        }
    }

    return 0;
}

