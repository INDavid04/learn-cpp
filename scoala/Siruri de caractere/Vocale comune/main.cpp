#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    char sir1[100], sir2[100];
    int i, n;
    
    cin >> sir1;
    cin >> sir2;
    
    n = strlen (sir1);
    
    for (i=0; i<=n; i++){
        if (strchr("aeiouAEIOU", sir1[i]) && strchr(sir2, sir1[i])){
            cout << sir1[i] << " ";
        }
    }

    return 0;
}

