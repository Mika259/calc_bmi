#include <iostream>
using namespace std;

void admin(string nama,string user){
	cout << endl << "Hai, " << nama << endl;
	cout << "Username : " << user << endl;
}

int main(){
	string nama, user;
	cout << "Masukkan nama : ";
	cin >> nama;
	cout << "Masukkan username : ";
	cin >> user;
	
	admin(nama,user);
	return 0;
}
