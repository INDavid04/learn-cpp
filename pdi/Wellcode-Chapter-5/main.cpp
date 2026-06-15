/*
 
 if (condiție)
Așa cum am spus în lecția precedentă, instrucțiunea if ne permite să executăm instrucțiuni doar atunci când o anumită condiție este îndeplinită. Condiția este specificată între parantezele de după if.

Structura unei condiții
Condiția este o expresie care poate lua valoarea adevărat sau fals.

Exemple
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "Numerele introduse sunt egale";
    }
    return 0;
}
Programul de mai sus verifică dacă două numere introduse sunt egale și afișează un mesaj pe ecran în caz afirmativ.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a != b) {
        cout << "Numerele introduse sunt diferite";
    }
    return 0;
}
În acest exemplu programul verifică dacă numere introduse sunt diferite.

Operatori
Pentru a scrie condițiile, limbajul C++ ne pune la dispoziție operatorii din tabelul de mai jos:

Operator	Explicație	Exemplu
==	Verifică dacă expresia din stânga este egală cu cea din dreapta	if ((2+3)*5==25)
!=	Verifică dacă expresia din stânga este diferită de cea din dreapta	if (12+33!=(1+2)/3)
>	Verifică dacă valoarea expresiei din stânga este mai mare decât valoarea expresiei din dreapta	if (3+5>4)
<	Verifică dacă valoarea expresiei din stânga este mai mică decât valoarea expresiei din dreapta	if (3+5<14)
>=	Verifică dacă valoarea expresiei din stânga este mai mare sau egală cu valoarea expresiei din dreapta	if (3+5>=8)
<=	Verifică dacă valoarea expresiei din stânga este mai mică sau egală cu valoarea expresiei din dreapta	if (3+5<=14)
Atenție!
Nu confunda operatorul == care testează dacă două expresii sunt egale cu = care stochează o valoare într-o variabilă.

{ și }
Așa cum acoladele lui int main() conțin în interiorul lor instrucțiunile programului scris de către noi, la fel acoladele unui if conțin în interiorul lor instrucțiunile care trebuie executate doar dacă condiția din interiorul lui if este adevărată.

*/ /// Teoria instructiunii if

/*

#include <iostream>
using namespace std;
// Teorie //
/*
 
 if (condiție)
Așa cum am spus în lecția precedentă, instrucțiunea if ne permite să executăm instrucțiuni doar atunci când o anumită condiție este îndeplinită. Condiția este specificată între parantezele de după if.

Structura unei condiții
Condiția este o expresie care poate lua valoarea adevărat sau fals.

Exemple
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "Numerele introduse sunt egale";
    }
    return 0;
}
Programul de mai sus verifică dacă două numere introduse sunt egale și afișează un mesaj pe ecran în caz afirmativ.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a != b) {
        cout << "Numerele introduse sunt diferite";
    }
    return 0;
}
În acest exemplu programul verifică dacă numere introduse sunt diferite.

Operatori
Pentru a scrie condițiile, limbajul C++ ne pune la dispoziție operatorii din tabelul de mai jos:

Operator	Explicație	Exemplu
==	Verifică dacă expresia din stânga este egală cu cea din dreapta	if ((2+3)*5==25)
!=	Verifică dacă expresia din stânga este diferită de cea din dreapta	if (12+33!=(1+2)/3)
>	Verifică dacă valoarea expresiei din stânga este mai mare decât valoarea expresiei din dreapta	if (3+5>4)
<	Verifică dacă valoarea expresiei din stânga este mai mică decât valoarea expresiei din dreapta	if (3+5<14)
>=	Verifică dacă valoarea expresiei din stânga este mai mare sau egală cu valoarea expresiei din dreapta	if (3+5>=8)
<=	Verifică dacă valoarea expresiei din stânga este mai mică sau egală cu valoarea expresiei din dreapta	if (3+5<=14)
Atenție!
Nu confunda operatorul == care testează dacă două expresii sunt egale cu = care stochează o valoare într-o variabilă.

{ și }
Așa cum acoladele lui int main() conțin în interiorul lor instrucțiunile programului scris de către noi, la fel acoladele unui if conțin în interiorul lor instrucțiunile care trebuie executate doar dacă condiția din interiorul lui if este adevărată.



*/ /// Conditii Compuse

/*

#include <iostream>
using namespace std;

int main(void) {
	/// https://ibb.co/fDXch6h - Poza cu arborele cazurilor
	int A, B, C;
	cout << "Ready to insert the value of A, B and C!" << endl;
	cin >> A >> B >> C;

	if (A < B) {
		if (B < C) {
			cout << A << B << C;
		}
		else
			if (B < C) {
				if (C < A) {
					cout << B << C << A;
				}
			}
			else cout << C << B << A;
	}
	else
		if (A < C) {
			cout << B << A << C;
		}
		else
			if (A < C) {
				if (C < B) {
					cout << A << C << B;
				}
			}
			else cout << C << A << B;
}

*/ /// Crescator 3

#include <iostream>
using namespace std;

int main()
{
	
	return 0;
}