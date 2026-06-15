/******************************************************************************

Baza 10 in Baza 2
132 = 10000100
132 : 2 -> 66(0) : 2 -> 33(0)  : 2 -> 16(1) : 2 -> 8(0) : 2 -> 4(0) : 2 -> 2(0) : 2 -> 1(0) : 2 -> 0(1)

Baza 2 in Baza 10
10000100 = 132
2*0 + 1 -> 2*1 + 0 -> 2*2 + 0 -> 2*4 + 0 -> 2*8 + 0 -> 2*16 + 1 -> 2*33 + 0 -> 2*66
    1 = n/10000000 %10
    0 = n/1000000 % 10
    0 = n/100000 % 10
    0 = n/10000 % 10
    0 = n/1000 % 10
    1 = n/100 % 10
    0 = n/10 % 10
    0 = n/1 % 10

Baza 10 in litere (ASCII)
char litera = 132;
cout << litera;

232(5) 110011(2) 1D(19) 3I(28) 1201(4) 54(19) 253(6) 112(5) 28(28) 1203(4) 1110101(2) 3P(28)
52(6) 3Q(28) 1311(4) 35(9) 101(10) 100000(2) 58(19) 42(28) 303(4) 73(16) 69(16) 8D(13)

5*0 + 2     5*2 + 3     5*18 + 2    92
2*0 + 1     2*1 + 1     2*3 + 0     2*6 + 0     2*12 + 1    2*25 + 1    51
19*0 + 1    19*1 + 13   32
28*0 + 3    28*3 + 18   102
4*0 + 1     4*1 + 2     4*6 + 0     4*24 + 1    97
19*0 + 54
6*0 + 253
5*0 + 112
28*0 + 28
4*0 + 1203
2*0 + 1110101
28*0 + 3P
6*0 + 52
28*0 + 3Q
4*0 + 1311
9*0 + 35
10*0 + 101
2*0 + 100000
19*0 + 58
28*0 + 42
4*0 + 303
16*0 + 73
16*0 + 69
13*0 + 8D

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

void baza2in10 () {
    int numar, litera, input = 1;
    
    cout << "Introdu coduri binare de 8 caractere si eu voi le voi decoda pe intelesul tau: \n";
    while (input == 1) {
        cin >> numar;
        
        litera = 0;
        for (int i = 10000000; i >= 1; i /= 10) {
            litera = 2 * litera + (numar/i)%10;
        }
        
        char cuvant = litera;
        cout << "\nlitera " << litera << " inseamna: " << cuvant;
        
        cout << "\nApasa 1 pentru a introduce alt cod sau 0 pentru a finaliza programul: ";
        cin >> input;
    }
}

void ConversieAscii() {
    int caracter[100];
    int input = 1, i = 1, n = 1;
    
    while (input == 1) {
        cin >> caracter[i];
        i++;
        n++;
        cout << "Apasa 1 pentru a citi sau 0 pentru a opri programul: ";
        cin >> input;
    }
    
    cout << "\nTextul decodificat este:\n";
    char convertit[100];
    for (int i = 1; i < n; i++) {
        convertit[i] = caracter[i];
        cout << convertit[i];
    }
}

int main () {
    ConversieAscii();

    return 0;
}
