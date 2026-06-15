#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[30], cons[30], voc[30];
    int n, i, kv=0, kc=0;
    
    cin >> s;
    n = strlen(s);
    
    for (i=0; i<n; i++){
        if (strchr("aeiou", s[i])){
            voc[kv] = s[i];
            kv++;
        } else {
            voc[kc] = s[i];
            kc++;
        }
    }
    
    cout << "\nVocale: " << voc;
    cout << "\nConsoane: " << cons;

    return 0;
}

