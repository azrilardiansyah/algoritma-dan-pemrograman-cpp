#include <iostream>
#include <string.h>

using namespace std;

int main (){
	int N;
	
	cout<<" Masukan Bilangan : ";cin>>N;
	if( N % 2 == 0){
		cout<<" Adalah Bilangan Genap"<<endl;
	}
	else {
		cout<<" Adalah Bilangan Ganjil"<<endl;
	}
	
	return 0;
}
