#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main () {
	char tambah(int m, int n);
	int a,b;
	a = 5;
	b = 9;
	
	cout << "Nilai Sebelum Fungsi Digunakan ";
	cout << "\nA = "<< a <<" B = " << b;
	
	tambah(a,b);
	
	cout << "\nNilai Setelah Fungsi Digunakan";
	cout <<"\nA = " << a << " B = " << b;
	getch();
}

tambah(int m, int n)
{
	m+=5;
	n+=7;
	
	cout << "\n\nNilai di dalam Fungsi Tambah()";
	cout << "\nM = " << m << " N = " << n << endl;
}
