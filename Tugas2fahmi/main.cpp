#include <iostream>

using namespace std;

int main()
{

    cout << "Nama       : Fahmi Imam Taufik\n" ;
    cout << "Kelas      : 1A\n" ;
    cout << "Prodi      : Teknik Informatika\n" << endl;
    cout << "\n";


    int a=8,b=3,c=10,d=16,h,r,s=10,t=6,p=4,q=0;
    int hasil;


    cout << "\t ARITMATIKA \n" << endl;

    hasil = a+b;
    cout << "\nhasil a+b :" << hasil << endl;
    //cout << a+b;

    hasil = c-a;
    cout << "\nhasil c-a :" << hasil << endl;
    //cout << c-a;

    hasil = a*b;
    cout << "\nhasil a*b :" << hasil << endl;
    //cout << a*b;

    hasil = c/a;
    cout << "\nhasil c/a :" << hasil << endl;
    //cout << c/a;
    cout << "\n" << endl;


    cout << "\t ASSIGMENT GABUNGAN \n" << endl;


    //cout << penggagbungan tambah
    a += 8;
    cout << "Hasil dari a += 8 berarti a = a+8 :" << a ;
    cout << "\nKarena Variabel dari a itu adalah 8\n" << endl;

    //cout << penggagbungan kurang
    c -= 2;
    cout << "Hasil dari c -= 2 berarti c = c-2 :" << c;
    cout << "\nKarena Variabel dari c itu adalah 10\n" << endl;

    //cout << penggagbungan perkalian
    b *= 3;
    cout << "Hasil dari b *= 3 berarti b = b*3 :" << b;
    cout << "\nKarena Variabel dari b itu adalah 3\n" << endl;

    //cout << penggagbungan pembagian
    d /= 2;
    cout << "Hasil dari d /= 2 berarti d = d/2 :" << d;
    cout << "\nKarena Variabel dari d itu adalah 16\n" << endl;
    cout << "\n";


    cout << "\t INCREMENT & DECREMENT \n" << endl;

    //cout << increment
    r = ++s;
    cout << " r :" << s <<endl;
    cout << " s :" << r << endl;
    cout << "Nilai r ditambahkan sebelum dicopy ke variabel s" << endl;
    cout << "\n";

    //cout << decrement
    r = t++;
    cout << "r :" << r << endl;
    cout << "t :" << t << endl;
    cout << "Nilai r dicopy terlebih dahulu ke variabel t baru kemudian ditambahkan\n" << endl;
    cout << "\n";


    cout << "\t OPERATOR \n" << endl;
    cout << "\n";

    hasil = b==c;
    cout << "hasil b==c adalah : " << hasil << endl;

    hasil = b!=c;
    cout << "hasil b!=c adalah : " << hasil << endl;



    cout << "\tOPERASIONAL KONDISONAL\n" << endl;
    cout << "\n";

    b=3;
    c=10;
    h = (b>c)? b : c;
    cout << "hasil dari b>c adalah : " << h << endl;


    a=8;
    b=3;
    h = (a<b)? a : b;
    cout << "hasil dari a<b adalah : " << h << endl;


    c=10;
    d=16;
    h = (c>d)? c : d;
    cout << "hasil dari c>d adalah : " << h << endl;


    h = (b<=d)? b : d;
    cout << "hasil dari b<= adalah : " << h << endl;



    cout << "\t OPERATOR LOGIKA \n" << endl;
    cout << "\n";

    bool jawaban;


    cout << "hasil dari !p adalah : " << !p << endl;
    jawaban = p && q;
    cout << "hasil dari p && q adalah :" << jawaban << endl;
    jawaban = p || q;
    cout << "hasil dari p || q adalah :" << jawaban << endl;
    cout << "\n";


    return 0;
}
