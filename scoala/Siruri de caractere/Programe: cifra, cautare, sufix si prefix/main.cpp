/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

/*

int cifra(int n){
    int x, min=9;
    while (n){
        x = n%10;
        if (x<min){
            min = x;
        }
        n /= 10;
    }
    x = min;
    
    return x;
}

void cautare (){
    int v[100], n, x, ok=0;
    cin >> n >> x;
    
    for (int i=1; i<=n; i++){
        cout << "\nv[" << i << "] = "; cin >> v[i];
    }
    
    for (int i=1; i<=n; i++){
        if (v[i] == x){
            ok = 1;
        }
    }
    
    if (ok == 1){
        cout << "\nDA";
    } else {
        cout << "\nNU";
    }
}

*/ /// cifra + cautare

/*

void sufix(){
    char s[21];
    int n, i, j;
    
    cin >> s;
    n = strlen (s);
    
    cout << "\nSufixe:\n";
    for (i=n-1; i>=0; i--){     // i=n-1 pt ca (ex: n=3 daca s="apa" si numerotarea sirurui incepe de la 0) 
        cout << "\n";
        for (j=0; j<=i; j++){
            cout << s[j];
        }
    }
}

void prefix(){
    char s[21];
    int n, i, j;
    
    cin >> s;
    n = strlen (s);
    
    cout << "\n\nPrefixe\n";
    for (i=0; i<=n-1; i++){   // i<=n-1 din cauza ca sirul incepe de la 0
        cout << "\n";
        for (j=0; j<=i; j++){
            cout << s[j];
        }
    }
}

*/ /// sufix + prefix

int main()
{
    

    return 0;
}
