#pragma once
#include <iostream>
using namespace std;

void citire(int v[], int& n) {

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i];
	}
}

bool suma(int v[], int p, int sum) {

	int s = 0;
	for (int i = 0; i < p; i++) {
		s = s + v[i];

	}
	if (s >= sum) {
		return true;
	}
	else {
		return false;
	}

}

long long NrSecvS(int a[], int n, int S) {

	int ct = 0;
	bool s = true;
	for (int i = 0; i < n; i++) {
		s = suma(a, i, S);
		if (s == true) {
			ct++;
		}
	}
	return ct;
}

int sumaNr(int n) {

	int suma = 0;
	while (n != 0) {
		suma = suma + n % 10;
		n = n / 10;
	}
	return suma;

}

int Multiplu(int a[], int n, int k) {
	int ct = 0;
	for (int i = 0; i, n; i++) {
		if (a[i] % k == 0) {
			ct++;
		}
	}
	return k;
}

void stergere(int v[], int& n, int p) {

	for (int i = p; i < n; i++) {
		v[i] = v[i + 1];
	}
	n--;
}

int sumaVector(int v[], int n) {

	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + v[i];
	}
	return suma;
}

int CautaPoz(int v[], int n) {

	int sumaV = sumaVector(v, n);
	int sumaS = 0;
	int sumaD = sumaV;
	int sumaMin = 1000000;
	int j = n - 1, poz = 0;
	
	for (int i = 0; i < n; i++) {
		if (sumaD - sumaS < sumaMin) {
			poz = i;
			sumaMin = sumaD - sumaS;
		}
		sumaS = sumaS + v[i];
		sumaD = sumaD - v[j];
		j--;
	}
	return poz;
}

int sumaJ(int v[], int n, int i, int ai, int p) {

	int ct = 0;
	for (int j = i + 1; j < n; j++) {
		if ((ai + v[j]) % p == 0) {
			ct++;
		}
	}
	return ct;
}

long long PerechiDivP(int a[], int n, int P) {

	int ct = 0;
	for (int i = 0; i < n; i++) {
		int suma = sumaJ(a, n, i, a[i], P);
		ct = ct + suma;
	}
	return ct;
}

int NrZero(int a[], int n) {

	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			ct++;
		}
	}
	return ct;
}

int multiplu(int a[], int n, int k) {
	int ct = 0;
	for (int i = 0; i, n; i++) {
		if (a[i] % k == 0) {
			ct++;
		}
	}
	return k;
}

int count(int a[], int n) {

	int medie = sumaVector(a, n) / n;
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= medie) {
			ct++;
		}
	}
	return ct;
}

int interval(int a[], int n) {

	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= a[0] && a[i] <= a[n - 1]) {
			ct++;
		}

	}
	return ct;
}

int mini(int a[], int n) {

	int min = 99999999;
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int maxi(int a[], int n) {
	
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int sum(int v[], int n) {

	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + v[i];
	}
	return suma;
}

int CreareNumar(int a[], int n) {

	int k = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			k = k * 10 + a[i];
		}
	}
	if (k == 1) {
		return -1;
	}
	else {
		return k;
	}
}

void stergereElemente(int a[], int n, int i1, int i2) {
	for (int i = 0; i < n; i++) {
		if (i >= i1 && i <= i2) {
			stergere(a, n, i);

		}
	}
}

void FSumVec(int a[], int n, int i1, int i2) {

	for (int i = 0; i < n; i++) {
		if (i<i1 || i>i2) {
			cout << "a[" << i << "]=" << a[i];
		}
	}

}

int Count(int a[], int n) {
	int medie = sumaVector(a, n) / n;
	int ct = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] >= medie) {
			ct++;
		}
	}

	return ct;
}

void bubblesort(int v[], int d) {
	bool semn = true;
	do {
		semn = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				semn = false;
			}
		}
	} while (semn == false);
}

int FGreater(int a[], int n, int x) {

	int xMax = 10000000;
	for (int i = 0; i < n; i++) {
		if (a[i] > x && a[i] < xMax) {
			xMax = a[i];
		}
	}
	return xMax;
}

int Kth(int a[], int n, int x, int k) {

	int aparitii = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			aparitii++;
		}
		if (aparitii == k) {
			return i;
		}
	}
	return -1;
}

void inserare(int v[], int& d, int p, int nou) {

	for (int i = d - 1; i >= p; i--) {
		v[i + 1] = v[i];
	}
	d++;
	v[p] = nou;
}

void Insert(int a[], int& n) {

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			inserare(a, n, i + 1, a[i] * 2);
		}
	}
}

int minim(int a[], int n, int nr) {
	int min = 10000000;
	for (int i = 0; i < n; i++) {
		if (a[i]<min && a[i]>nr) {
			min = a[i];
		}
	}
	if (min == 10000000) {
		return -1;
	}
	return min;
}

void FSumVecMin(int a[], int n, int m) {

	for (int i = 0; i < n; i++) {
		cout << minim(a, n, i);
	}
}

void StergereElemente(int a[], int n, int i1, int i2) {
	
	for (int i = 0; i < n; i++) {
		if (i >= i1 && i <= i2) {
			stergere(a, n, i);
		}
	}
}

void citireLong(long long v[], int& n) {

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void bubblesortLong(long long v[], int d) {
	bool semn = true;
	do {
		semn = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				semn = false;
			}
		}
	} while (semn == false);
}

int sub(int a[], int n, int k) {

	int suma = 0;
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			suma = suma + a[i];
			ct++;
		}
		if (ct == k) {
			return suma;
		}
	}
	return -1;
}

bool aparitie(int a[], int n, int k, int j) {
	
	for (int i = j + 1; i < n; i++) {
		
		if (a[i] == k) {
			return true;
		}
	}
	return false;
}

int PermD(int a[], int n) {
	for (int i = 0; i < n; i++) {
		bool ok = aparitie(a, n, a[i], i);
		if (ok == true) {
			return a[i];
		}
	}
	return -1;
}

int fgreater(int a[], int n, int x) {

	int xMax = 10000000;
	for (int i = 0; i < n; i++) {
		if (a[i] > x && a[i] < xMax) {
			xMax = a[i];
		}
	}
	return xMax;
}