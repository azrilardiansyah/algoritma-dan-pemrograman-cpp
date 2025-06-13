#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main () {
	char tambah(int *c, int *d);
	int a, b;
	a = 4;
	b = 6;
	
	cout << "Nilai Sebelum Pemanggilan Fungsi";
	cout << "\nA = " << a << " B = " << b;
	
	tambah(&a,&b);
	cout << "\nNilai Setelah Pemanggilan Fungsi";
	cout << "\nA = " << a << " B = " << b;
	getch();
}

	tambah(int *c, int *d) {
		*c+=7;
		*d+=5;
		cout << "\nNilai di Akhir Fungsi Tambah()";
		cout << "\nC = " << *c << " D = " << *d;
	}
