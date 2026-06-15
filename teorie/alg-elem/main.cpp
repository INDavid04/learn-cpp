/******************************************************************************

tipuri de variabile:
    (%d) int            (%u) unsigned int            4 miliarde
    (%hi) short         (%hu) unsigned short         60k
    (%li) long          (%lu) unsigned long          4 miliarde
    (%lli) long long    (%llu) unsigned long long    foarte mult
    
    float (6 zecimale)           double (15 zecimale)

*******************************************************************************/
#include <iostream>

using namespace std;

/*

void prob1() {
    Se considera programul pseudocod alaturat.
    Care este valoarea afisata pentru a=1372?
    Scrie cea mai mica valoare de 3 cifre care se poate citi pentru a, astfel incat valoarea afisata de algoritmul alaturat sa fie maxima;
    Scrie un algoritm echivalent cu algoritmul dat in care structura cat timp…executa sa fie inlocuita cu o structura repetitiva cu test final.
    Scrie programul C++ corespunzator algoritmului dat.
    
    citeste a (numar natural)
    i=0;
    a=a%10;
    cat timp (a>1) si (a<10) executa
    	i=i+1;
    	a=a*a;
    scrie i*a;
    
    Rezolvare:
    Pentru a =1372, se obtine a=16=24, i=2, i*a=32; 
    Cea mai mica valoare de 3 cifre care se poate citi pentru a este a=103, astfel incat valoarea afisata este egala cu 162=2*81=2*34 este maxima.
    Citeste a;
    i=0;
    a=a%10;
    daca (a>1 si a<10) atunci
    	repeta
    		i=i+1;
    		a=a*a;
    	pana cand (a>=10)
    scrie i*a;
    #include <iostream>
    using namespace std;
    int main ()
    {
    	int a,i;
    cin>>a;
    i=0;
    a=a%10;
    while (a>1 && a<10){
    		i++;
    		a=a*a;
    	}
    cout<<i*a;
    return 0;
}
}

void prob2() {
    2. Se considera programul pseudocod alaturat:
    a) Care este valoarea afisata la citirea urmatorului sir de valori 5  37  205  199  30  86?
    b) Scrie un sir de valori distincte de cel mult doua cifre pentru care algoritmul va afisa 9999.
    c) Scrie un algoritm echivalent cu algoritmul dat in care prima structura cat timp…executa sa fie inlocuita cu o structura repetitiva  pentru.
    d) Scrieti programul C++ corespunzator algoritmului dat.
    citeste n (numar natural nenul)
    a=0;
    cat timp n>0 executa
    	citeste x (numar natural nenul)
    	p=1;
    	cat timp p<=x/10 executa
    		p=p*10;
    	a=a*10+x/p;
    	n=n-1;
    scrie a;
     Rezolvare:
    Raspuns 32138. Algoritmul construieste si afiseaza un numar de n cifre, format din prima cifra a fiecarui numar din sirul dat, in ordinea citirii;
    Pentru ca algoritmul sa afiseze 9999 se va citi un sir de 4 numere, fiecare numar poate fi 9 sau un numar din doua cifre dintre care prima sa fie 9. 
    citeste n;
    a=0;
    pentru i=1, n executa
    	citeste x;
    	p=1;
    	cat timp p<=x/10 executa
    		p=p*10;
    	a=a*10+x/p;
    scrie a;
    i++;
    a=a*a;
    
    cout<<i*a;
    return 0; 
    #include <iostream>
    using namespace std;
    int main()
        int p,n,a,x;
        cin>>n;
        a=0;
        while (n>0)
            cin>>x;
            p=1;
            while (p<=x/10) p=p*10;
            a=a*10+x/p;
            n=n-1;
        cout<<a;
    return 0; 
}

void prob3() {
    3. Se considera algoritmul  alaturat:
    a) ce va afisa algoritmul alaturat daca se citesc valorile a=12, b=24?
    b) scrieti toate perechile de valori de cate o cifra care pot fi citite pentru a si b, astfel incat ultima pereche afisata sa fie 6  7.
    c) scrieti un algoritm echivalent cu algoritmul dat in care prima structura repeta…pana cand sa fie inlocuita cu o structura repetitive cu conditie initiala.
    d) Scrieti programul C++ corespunzator algoritmului dat.
    citeste a, b; (numere natural nenule, a<b)     //a=12 b=24
    p=a; u=b;
    cat timp (p<u) executa
    	x=p; y=u;
    	repeta 
    		z=x%y;
    		x=y;
    		y=z;
    	pana cand (y=0);
    	daca (x=1) atunci
    		scrie p, ‘ ‘, u, ‘;’;
    	p=p+1;
    	u=u-1;

    Rezolvari:
    Raspuns: 13  23 si  17  19. Algoritmul afiseaza perechile de numere prime intre ele de forma (p,u), dintre numerele din intervalul [a,b], care sunt simetrice fata de mijlocul intervalului.
    (4,9), (5,8), (6,7);
    Algoritm echivalent:

    citeste a,b (numere natural nenule, a<b)
    p=a; u=b;
    cat timp (p<u) executa
    	x=p; y=u;
    	cat timp (y!=0) executa
    		z=x%y;
    		x=y;
    		y=z;
    	daca (x=1) atunci
    		scrie p, ‘ ‘, ‘u’;
    	p=p+1;
    	u=u-1;
    Programul C++:
    
    #include<iostream>
    using namespace std;
    int main()
        int a, b, p, u, x, y, z;
        cin>>a>>b;
        p=a; u=b;
        while (p<u)
        	x=p; y=u;
        	do
        		z=x%y;
        		x=y;
        		y=z;
        		while (y!=0);
        	if (x==1)
        		cout<<p<<”  “<<u<<”  “;
        	p=p+1; u=u-1;

        return 0;
}

void prob4() {
    4. Se considera programul pseudocod alaturat:
    a) Ce va afisa algoritmul alaturat daca se citesc valorile a=10111 si b=2?
    b) Daca b=8, ce valoare poate fi citita pentru a, astfel incat algoritmul alaturat sa afiseze 559?
    c) Scrie un algoritm echivalent cu cel dat care sa utilizeze o singura structura repetitiva;
    d) Scrieti programul C++ corespunzator algoritmului dat.
    citeste a, b; (numere natural >0 2<=b<=9)
    m=0; x=0;
    cat timp (a>0) executa
    	p=a%10
    	pentru i=1, m executa
    		p=p*b;
    	x=x+p;
    	a=a/10;
    	m=m+1;
    scrie x;

    Rezolvari:
    Raspuns 23. Algoritmul realizeaza conversia numarului a, din baza b in baza 10 si afiseaza rezultatul conversiei efectuate;
    a=1057 si b=8;
    citeste a, b;(numere natural nenule, 2<=b<=9)
    p=1; x=0;
    cat timp (a>0) executa
    	x=x+(a%10)*p;
    	p=p*b;
    	a=a/10;
    scrie x;
    Programul C++:
    
    #include<iostream>
    using namespace std;
    int main()
        int a, b, m, x, p, i;
        cin>>a>>b;
        m=0; x=0;
        while (a>0)
    	    p=a%10;
    	    for (i=1; i<=m; i++)
    		    p=p*b;
    	    x=x+p;
    	    a=a/10;
    	    m++;
    cout<<x;
    return 0;
}

void prob5() {
    5. Se considera programul pseudocod alaturat:
    a) Ce va afisa algoritmul daca se citesc valorile x=2 si y=10?
    b) Scrie o pereche de valori de doua cifre ce pot fi citite pentru x si y, astfel incat algoritmul alatura sa afiseze la sfarsit valoarea 1;
    c) … cat timp…executa sa devina pentru…executa
    d) C++
    citeste x,y (numere natural, 0<x<=y)
    k=0;
    cat timp (y>=x) executa
    	d=2;
    	cat timp (d*d<=y si y%d!=0) executa
    		d=d+1;
    	daca (d*d=y) atunci
    		scrie y, ‘ ‘
    		k=k+1
    	y=y-1
    scrie k
    
    
    Raspunsuri:
    9 4 2
    In intervalul [a,b] trebuie sa existe doar un numar patrat perfect de numar prim.
    De ex.a=40 si b=50
    Citeste x,y;
    K=0;
    Pentru y=y, x, -1 executa
    	d=2;
    		cat timp (d*d<=y si y%d!=0) executa
    			d=d+1;
    		daca (d*d=y) atunci
    			scrie y, ‘ ‘
    			k=k+1
    	scrie k
    	
    #include <iostream>
    using namespace std;
    int x, y, k, d;
    int main() 
    	cin>>x>>y;
    	k=0;
    	while (y>=x)
    		d=2;
    		while (d*d<y && y%d!=0)
    			d++;
    		if (d*d==y)	
    			cout<<y<<' ';
    			k++;
    		y--;

    	cout<<k;
    	return 0;

}

void prob6() {
    6. Fie algoritmul alaturat:
    a) n=120 ce se afiseaza?
    b) Scrie cea mai mica valoare de 3 cifre ce poate fi citita pentru n, astfel incat algoritmul alaturat sa afiseze o singura valoare
    c) Structura cat timp…executa sa fie inlocuita cu o structura repetitive cu o conditie finala
    d) Scrieti programul C++
    citeste n (numar natural nenul n>=2)   // n=120
    cat timp n>0 executa
    	a=1; b=0;
    	cat timp b<=n executa
    		b=a+b;
    		a=b-a;
    	scrie a, ‘ ‘
    	n=n-a;
    
    Raspunsuri:
    89  21  8  2
    Sirul lui Fibonacci are elementele:
    1  1  2  3  5  8  13  21  34  55  89  144  ……………..
    Numarul n trebuie sa fie cel mai mic numar de 3 cifre ce este termen in sirul lui Fibonacci, n=144   (il gaseste pe a=144, si n=n-a, deci n=0)
    Algoritm echivalent:
    
    citeste n (numar natural nenul n>=2)
    k=0;
    cat timp n>0 executa
    	a=1; b=1;
    	daca b<=n atunci
    		repeta
    			b=a+b;
    			a=b-a;
    		pana cand b>=n
    	scrie a, ‘ ‘
    	n=n-a;
    	
    #include <iostream>
    using namespace std;
    int n, k, a, b;
    int main() 
    	cin>>n;
    	k=0;
    	while (n>0)
    		a=1; b=0;
    		while(b<=n)
    			b=a+b;
    			a=b-a;
    		
    		cout<<a<<' ';
    		n=n-a;
    	
    	return 0;

}

*/ /// Probleme de la scoala

int main() {
    MaximMinim();

    return 0;
}

