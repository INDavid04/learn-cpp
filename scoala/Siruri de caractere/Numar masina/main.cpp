#include <iostream>
#include <string.h>

using namespace std;

// V/N/-/1/8/-/D/V/D    B/-/7/4/-/B/R/B
// 0/1/2/3/4/5/6/7/8    0/1/2/3/4/5/6/7

int main()
{
    char s[10];
    int i, n;
    
    cin >> s[10];
    n = strlen (s);
    
    for (i=1; i<n; i++){
        if (s[2] == "-"){
            cout << "\n" << s[0] << s[1];           // VN
            cout << "\n" << s[3] << s[4];           // 18
            cout << "\n" << s[6] << s[7] << s[8];   // DVD
        }
        
        if (s[1] == "-"){
            cout << "\n" << s[0];                   // B
            cout << "\n" << s[2] << s[3];           // 74
            cout << "\n" << s[5] << s[6] << s[7];   // BRB
        }
    }

    return 0;
}

