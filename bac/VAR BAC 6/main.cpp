/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void s3problema3_v1() {
    unsigned int p1, p2;
    cin >> p1 >> p2;
    int nr = 0;
 
    int v[7];
    for(int i = 9; i > 0; i--) {
        if(p1 % i == 0) {
            int c1 = i;
            int c2 = p1 / i;
            if(c2 < 10) {
                v[0] = c1;
                v[1] = c2;
                for(int k = 9; k >= 0; k--) {
                    for (int j = 9; j > 0; j--) {
                        if (p2 % j == 0) {
                            int c1 = j;
                            int c2 = p2 / j;
                            if (c2 < 10) {
                                v[2] = k;
                                v[3] = k;
                                v[4] = k;
                                v[5] = c1;
                                v[6] = c2;
                                cout << v[0] << v[1] << v[2] << v[3] << v[4] << v[5] << v[6] << "\n";
                            }
                        }
                    }
                }
            }
        }
    }
}

void s3problema3_v2() {
    int p1,p2,i,j,k,nr;
    cin>>p1>>p2;
    nr=0;
    
    for(i=9;i>=1;i--) {
        if(p1%i==0 and p1/i<=9) {
            nr=nr*10+i;
            nr=nr*10+p1/i;
            
            for(j=9;j>=0;j--) {
                nr=nr*10+j;
                nr=nr*10+j;
                nr=nr*10+j;
                
                for(k=9;k>=1;k--) {
                    if(p2%k==0 and p2/k<=9) {
                        nr=nr*10+k;
                        nr=nr*10+p2/k;
                        g<<nr<<endl;
                        nr=nr/100;
                    }
                }
            nr=nr/1000;
            }
        }
    nr=nr/100;
    }
}

int main()
{
    cout<<"Hello World";

    return 0;
}