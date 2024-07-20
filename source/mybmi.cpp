#include <iostream>
using namespace std;
//Single comment
//Alat kira bmi


/*Multiple comment
	Alat ini dibuat oleh
	Daniel Hakim
*/
void calc_bmi(float tinggi, float berat){
	cout << "Berat dan tinggi anda masing masing " << tinggi << ", " << berat << endl;
	float hasil = berat/(tinggi*tinggi);
	cout << "BMI anda ialah " << hasil;
}


int main()
{
	cout << "===[Kira BMI]===" << endl;
	cout << "NOTE:Pastikan nilai tinggi dalam meter dan nilai berat dalam kg." << endl << "    program ini sekali pakai, jalankan semula untuk guna." << endl;
	cout << endl;


	float tinggi, berat;
	cout << "Masukkan tinggi(m): ";
	cin >> tinggi;
	cout << "Masukkan berat(kg): ";
	cin >> berat;
	calc_bmi(tinggi,berat);
	return 0;
}
