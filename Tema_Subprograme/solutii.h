#pragma once
#include <iostream>
using namespace std;
#include "functii.h"

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//long long NrSecvS(int a[], int n, int S)
//Subprogramul returnează numărul de secvențe din vector care au suma strict mai mare decât S.
void pb1() {

	int a[1000], n, S, ct = 0;
	citire(a, n);
	cout << "S=";
	cin >> S;

	cout << NrSecvS(a, n, S);
}

//Scrieţi definiția completă a subprogramului C++ multiplu care are 3 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de 
//numere naturale mai mici decât 1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural.
//Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k şi au ultima cifră egală cu k.
void pb2() {
	int a[100], n, k;
	citire(a, n);
	cout << "k=";
	cin >> k;

	cout << Multiplu(a, n, k);
}

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//int CautaPoz(int a[], int n)
//Subprogramul returnează poziția p (0 ≤ p < n - 1) cu proprietatea că sumele a[0]+a[1]+...+a[p] și a[p+1]+...+a[n-1] sunt cât mai apropiate. 
//Dacă există mai multe astfel de poziții, se va returna cea mai din stânga.
void pb3() {
	int a[1000], n, m;
	citire(a, n);
	
	cout << CautaPoz(a, n);
}

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//long long PerechiDivP(int a[], int n, int P)
//Subprogramul returnează numărul de perechi (a[i], a[j]) cu i < j și suma a[i]+a[j] este multiplu de P.
void pb4() {

	int a[1000], n, P;
	citire(a, n);
	cout << "P=";
	cin >> P;

	cout << PerechiDivP(a, n, P);
}

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//int NrZero(int a[], int n)
//Subprogramul returnează numărul de valori egale cu 0 din vectorul a.
void pb5() {

	int a[1000], n;
	citire(a, n);
	cout << NrZero(a, n);
}

//Scrieţi definiția completă a subprogramului C++ multiplu care are 3 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de 
//numere naturale mai mici decât 1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural.
//Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k şi au ultima cifră egală cu k.
void pb6() {
	int a[100], n, k;
	citire(a, n);

	cout << "k=";
	cin >> k;
	cout << multiplu(a, n, k);
}

//Scrieţi definiția completă a subprogramului C++ count care are 2 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de numere 
//reale mai mici decât 1000 și n, numărul efectiv de elemente ale tabloului.
//Subprogramul returnează numărul de elemente din tablou care sunt mai mari sau cel puțin egale cu media aritmetică a tuturor elementelor din tablou.
void pb7() {

	int a[100], n;
	citire(a, n);
	cout << count(a, n);
}


//Scrieţi definiția completă a subprogramului C++ cu antetul:
//int NrZero(int a[], int n)
//Subprogramul returnează numărul de valori egale cu 0 din vectorul a.
void pb8() {

	int a[1000], n;
	citire(a, n);
	cout << NrZero(a, n);
}

//Scrieţi definiția completă a subprogramului C++ interval care are 2 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de 
//numere naturale mai mici decât 1000 și n, numărul efectiv de elemente ale tabloului.
//Subprogramul returnează numărul de elemente din tablou care aparțin intervalului închis determinat de primul și ultimul element al tabloului.
void pb10() {

	int a[100], n;
	citire(a, n);
	cout << interval(a, n);

}

//Scrieți definiția completă a subprogramului P care primeşte prin intermediul parametrului n un număr natural nenul (n≤100), iar prin intermediul 
//parametrului x un tablou unidimensional cu n componente întregi, de maximum opt cifre fiecare.
//Subprogramul furnizează prin intermediul parametrului mini valoarea minimă din tabloul x, prin intermediul parametrului maxi valoarea maximă din x,
//iar prin intermediul parametrului sum suma elementelor din tabloul x.
void pb11() {
	int a[100], n;
	citire(a, n);

	cout << "Valoarea minima=" << mini(a, n);
	cout << "Valoarea maxima=" << maxi(a, n);
	cout << "Suma=" << sum(a, n);

}
//Scrieți definiția completă a subprogramului F, care primește prin intermediul parametrului n un număr natural nenul (1≤n≤9), iar prin intermediul 
//parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre acestea reprezentând câte o cifră a unui număr. Astfel, a0 
//reprezintă prima cifră a numărului, a1 a doua cifră, etc.
//Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din cifrele pare reţinute în tabloul a sau valoarea -1 dacă în tablou nu există nicio cifră pară.
void pb12() {
	int a[10], n;
	citire(a, n);
	cout << CreareNumar(a, n);
}

//Scrieți definiția completă unui subprogram C++ care realizează ștergerea dintr-un tablou unidimensional dat a elementelor cu indici între două valori date.
void pb13() {
	int a[100], n, i1, i2;
	citire(a, n);
	cout << "i1=";
	cin >> i1;
	cout << "i2=";
	cin >> i2;
	stergereElemente(a, n, i1, i2);
	afisare(a, n);
}

//Scrieți definiția completă unui subprogram C++ care returnează suma elementelor unui tablou unidimensional cu indici din afara unui interval dat.
void pb15() {
	int a[100], n, i1, i2;
	citire(a, n);
	cout << "i1=";
	cin >> i1;
	cout << "i2=";
	cin >> i2;
	FSumVec(a, n, i1, i2);
}


//Scrieţi definiția completă a subprogramului C++ count care are 2 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de numere 
//reale mai mici decât 1000 și n, numărul efectiv de elemente ale tabloului.
//Subprogramul returnează numărul de elemente din tablou care sunt mai mari sau cel puțin egale cu media aritmetică a tuturor elementelor din tablou.
void pb17() {

	int a[100], n;
	citire(a, n);
	cout << Count(a, n);
}

//Scrieți definiția completă a subprogramului C++ ordon123 care are 2 parametri:
//n – prin care primește un număr natural
//a – prin care primește un tablou unidimensional cu n elemente, numere naturale din mulțimea {1,2,3}.
//Subprogramul ordonează crescător tabloul a fără a returna valori.
void pb18() {
	
	int a[100], n;
	citire(a, n);
	bubblesort(a, n);
}

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//int FGreater(int a[], int n, int x)
//Funcția returnează cel mai mic număr din a, strict mai mare decât x. În caz că nu există o asemenea valoare, funcția va returna valoarea -1
void pb19() {
	int a[1000], n, x;
	citire(a, n);
	cout << "x=";
	cin >> x;
	cout << FGreater(a, n, x);
}

//Scrieți funcția Kth care primește ca parametri:
//a – un vector de numere întregi
//n – un număr natural reprezentând numărul elementelor vectorului
//x – un număr întreg
//k – un număr natural
//Funcția va returna poziția din vector unde x apare pentru a k-a oară, sau -1 dacă x nu apare de cel puțin k ori
void pb20() {
	int a[1000], n, x, k;
	citire(a, n);
	cout << "x=";
	cin >> x;
	cout << "k=";
	cin >> k;
	cout << Kth(a, n, x, k);
}

//Să se scrie funcția cu următorul antet:
//void Insert(int a[], int& n)
//Funcția primește ca parametri un vector a de numere naturale și n – numărul elementelor vectorului. Să se insereze după fiecare număr impar dublul său.
void pb21() {
	int a[1000], n;
	citire(a, n);
	Insert(a, n);
	afisare(a, n);
}

//Scrieți definiția completă unui subprogram C++ care returnează suma celor mai mici m elemente ale unui tablou unidimensional dat.
void pb22() {
	int a[1000], n, m;
	citire(a, n);
	cout << "m=";
	cin >> m;
	FSumVecMin(a, n, m);

}

//Scrieți definiția completă unui subprogram C++ care returnează suma elementelor unui tablou unidimensional cu indici din afara unui interval dat.
void pb23() {
	int a[100], n, i1, i2;
	citire(a, n);
	cout << "i1=";
	cin >> i1;
	cout << "i2=";
	cin >> i2;
	FSumVec(a, n, i1, i2);

}

//Scrieți definiția completă unui subprogram C++ care realizează ștergerea dintr-un tablou unidimensional dat a elementelor cu indici între două valori
//date.
void pb25() {
	int a[100], n, i1, i2;
	citire(a, n);
	cout << "i1=";
	cin >> i1;
	cout << "i2=";
	cin >> i2;
	StergereElemente(a, n, i1, i2);
	afisare(a, n);
}

//Scrieţi definiția completă a subprogramului C++ ordonare care are 2 parametri: a, prin care primeşte un tablou unidimensional cu maximum 1000 de
//numere naturale mai mici decât 1.000.000.000 și n, numărul efectiv de elemente ale tabloului.
//Subprogramul ordonează crescător elementele tabloului a, fără a returna valori.
void pb26() {
	long long a[1000];
	int n;
	citireLong(a, n);
	bubblesortLong(a, n);
}

//Scrieţi definiția completă a subprogramului C++ sub care are 3 parametri: n – prin care primește un număr natural, v, prin care primeşte un tablou 
//unidimensional cu n elemente, numere naturale cu cel mult 4 cifre și k, prin care primeşte un număr natural.
//Subprogramul returnează suma primelor k elemente cu valoare impară ale tabloului.Dacă nu există k elemente impare în tablou, subprogramul returnează 
//valoarea - 1.
void pb27() {
	int a[1000], n, k;
	citire(a, n);
	cout << "k=";
	cin >> k;
	cout << sub(a, n, k);
}

//Să se scrie funcția cu următorul antet:
//int PermD(int a[], int n)
//Funcția primește ca parametru un vector a = (a1, a2, ..., an) de lungime n care memorează toate valorile distincte din mulțimea {1, 2,..., n-1}, 
//dar exact una din aceste valori apare în vector de două ori. Funcția trebuie să returneze valoarea care apare de două ori.
void pb28() {
	int a[1000], n;
	citire(a, n);

	cout << PermD(a, n);
}

//Scrieţi definiția completă a subprogramului C++ interval care are 2 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de 
//numere naturale mai mici decât 1000 și n, numărul efectiv de elemente ale tabloului.
//Subprogramul returnează numărul de elemente din tablou care aparțin intervalului închis determinat de primul și ultimul element al tabloului.
void pb29() {
	int a[100], n;
	citire(a, n);
	cout << interval(a, n);
}

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//int FGreater(int a[], int n, int x)
//Funcția returnează cel mai mic număr din a, strict mai mare decât x. În caz că nu există o asemenea valoare, funcția va returna valoarea -1
void pb30() {
	int a[1000], n, x;
	citire(a, n);
	cout << "x=";
	cin >> x;
	cout << fgreater(a, n, x);
}