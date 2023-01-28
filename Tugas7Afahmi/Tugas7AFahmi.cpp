#include <iostream>

using namespace std;

int main (){
	
	int hargabeli, disc, hargadiskon;
	cout << "-------Total Bayar dan Diskon-------" << endl;
	cout << "Masukkan Harga Barang : Rp. ";
	cin >> hargabeli;
	cout << "Masukkan discount (%) : ";
	cin >> disc;
	cout << "============================" <<endl;
	cout << "Harga Barang : Rp. " << hargabeli << endl;
	cout << "Harga Diskon : Rp. " << hargadiskon/disc <<endl;
	cout << "============================" << endl;
	hargadiskon=hargabeli-(hargabeli/disc);
	cout << "Harga Bersih : Rp. " << hargadiskon << endl;
	return 0;
}
