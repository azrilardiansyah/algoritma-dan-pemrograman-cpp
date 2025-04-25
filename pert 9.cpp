#include <iostream>

using namespace std;

int main (){
	char username[15];
	char password[15];
	
	cout<<" Masukan Username : ";
	cin>>username;
	cout<<endl;
	
	cout<<" Masukan Password : ";
	cin>>password;
	cout<<endl;
	
	if( username == "admin" && password == "admin" ){
		cout<<" Anda adalah Admin"<<endl;
	}
	else {
		cout<<" Anda bukan Admin"<<endl;
	}
	
	return 0;
}
