#include <iostream>
#include <string.h>

// A/E/R/I/S/I/S/R/E/A
// 0/1/2/3/4/5/6/7/8/9

using namespace std;

int main()
{
    char s[30];
    int i, n, ok=1;
    
    cin >> s;
    n = strlen (s);
    
    for (i=0; i<n; i++){
        if (s[i] == s[n-i-1]) {
            ok = 1;
        } else {
            ok = 0; 
        }
    }
    
    if(ok != 0){
        cout << "\nCuvantul e palindrom!";
    } else {
        cout << "\nCuvantul nu e palindrom!";
    }

    return 0;
}

