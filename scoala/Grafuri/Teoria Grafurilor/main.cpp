/******************************************************************************

Un graf G este CONEX daca oricare ar fi doua varfuri ale sale exista un lant care le leaga.
    
    ciclu elementar - te intorci de unde ai plecat
    graf partial - stergem doar muchiile
    subgraf - stergand nodul stergem si muchia
    
    Eliminand:
        muchii --- graf partial
        noduri --- sugraf
        
1. Graf plin

2. Graf orientat complet: un graf orientat in care exista (x,y) si (y,x)
n*(n-1)/2 <= m <= n*(n-1)
Numarul de grafuri orientate complete cu n noduri este 3^((n*(n-1))/2)


3. Graf turneu: un graf orientat in care exista un singur  arc intre oricare doua noduri x si y.
Numarul de grafuri turneu cu n noduri este 2^((n*(n-1))/2)

4. Graf orientat tare conex: oricare ar fi doua noduri x si y exista drum dus-intors de la x la y
(exista un circuit, nu neaparat elementar, care trece prin arcele grafului).

5. Componenta tare conexa a unui graf orientat: un subgraf tare conex si maximala in raport cu
aceasta proprietate. Un nod izolat este o componenta tare conexa.

Exemple {
    1. Numarul de grafuri complete cu 10 noduri este: 3^(10*9/2) = 3^45
    2. Numarul de grafuri turneu ce 5 noduri: 2^(5*4/2) = 2^10 = 1024
    3. G este un graf plin cu 20 de noduri (exista arce dus-intors)
       Numarul de arce: 20*19 = 380
}

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    cout<<"Hello World";

    return 0;
}


