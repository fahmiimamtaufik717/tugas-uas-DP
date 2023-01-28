#include <iostream>
/*
Nama    : Fahmi Imam Taufik
Kelas   : 1A
Tugas   : P6(Latihan)
*/

using namespace std;
jg(int a, int b)
{
    int c=a*b;
    return c;
}
int main()
{
    int alas,tinggi,luas;
    cout << "******MENGHITUNG LUAS JAJAR GENJANG******" << endl;
    cout << "\nMasukan Panjang Alas bidang \t :"; cin >> alas;
    cout << "Masukan Tinggi Bidang \t\t :"; cin >> tinggi;
    luas=jg(alas,tinggi);
    cout << "-------------------------------------\n";
    cout << "\n Luas Jajar Genjang adalah \t : " << luas << endl;
    getchar();
    return 0;
}
