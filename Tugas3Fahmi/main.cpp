/*
Mata Kuliah : Dasar pemograman
Tugas ke    : 3 Part 1
Nama        : Fahmi Imam Taufik
Kelas       : Teknik Informatika 1A
Tanggal     : 21 November 2022
*/
/*
Tugas membuat sebuah pemograman tentang syarat mendapatkan kupon belanjaan
*/
#include <iostream>
using namespace std;

int main()
{
    int Total_Belanja ;
    cout << "Masukan Total Pembelanjaan :",cin >> Total_Belanja ;
    if (Total_Belanja>=500000){
        cout << "\n";
        cout << "selamat! Anda Mendapatkan Kupon Belanja Sebesar Rp100.000" << endl;
    }else if(Total_Belanja>=250000){
        cout << "\n";
        cout << "Selamat! Anda mendapatkan kupon belanja sebesar Rp50.000" << endl;
    }else {
        cout << "\n";
        cout << "Maaf, Total Belanja Anda Masih dibawah Rp250.000" << endl;
    }

    return 0;
}
