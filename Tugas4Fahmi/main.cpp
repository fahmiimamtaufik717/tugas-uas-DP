#include <iostream>

using namespace std;
int main()
{
    string judul_buku;
    float harga_buku,jumlah_buku,total,diskon,total_semua;

    cout << "Masukan Judul  :";
    getline (cin,judul_buku);
    cout << "Harga Buku     :" ;
    cin >> harga_buku;
    cout << "Jumlah Buku    :";
    cin >> jumlah_buku ;
/*
Nama : Fahmi Imam Taufik
Kelas : 1A
Tugas : P6(CHALLENGE 3)
*/
    total=harga_buku*jumlah_buku;
    diskon=total*0.1;
    total_semua=total-diskon;

    cout << "-----------------------\n" << endl;
    cout << " Judul     :" << judul_buku << endl;
    cout << " Harga     :" << harga_buku << endl;
    cout << " Jumlah    :" << jumlah_buku << endl;
    cout << " Total     :" << total << endl;
    cout << " Diskon 10%" << endl;
    cout << " Total Semua :" << total_semua << endl;
    return 0;
}
