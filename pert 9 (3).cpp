#include <iostream>
#include <string.h>

using namespace std;

int main (){
	string kata;
	
	cout<<" Masukan kata = HALO : ";
	cin>>kata;
	cout<<endl;
	
	if (kata == "HALO"){
		cout<<" Kata yang dimasukan sesuai"<<endl;
	}
	else {
		cout<<" Kata yang dimasukan tidak sesuai"<<endl;
	}
	
	return 0;
}
