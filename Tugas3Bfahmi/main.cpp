/*
Mata Kuliah : Dasar Pemograman
Tugas ke    : 3 Part 2
Nama        : Fahmi Imam Taufik
Kelas       : Teknik Informatika 1A
Tanggal     : 20 November 2022

Tugas memperbaiki kesalahan atau error pada kode yang diberikan
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Soal 1  :" << endl;
    int a = 3;/* Pada soal 1 tidak menggunakan type dan titik koma (;) yang membuat line tersebut error*/
    cout <<"a\t:" <<a << endl << endl; /*pada soal 1 tidak menggunakan titik koma (;) yang membuat line tersebut error*/

    cout << "Soal 2  :" << endl;
    int b;
    b = (2+5)*3;
    cout <<"Perhitungan (2+5)*3 adalah " << b << endl << endl;

    cout << "soal 3  :" <<endl;
    float angka ;
    cout <<"Masukan angka :" ;/*Pada soal 3 tidak menggunakan kutip ("") dan titik koma (;) sehingga terjadi error pada line*/
    cin >> angka;/*Pada soal 3 tidak menggunakan titik koma (;) Sehingga terjadi error*/
    cout << "Angka desimal yang anda input :" << angka << endl;




    return 0;
}
