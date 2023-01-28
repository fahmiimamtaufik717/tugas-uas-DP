#include <iostream>

using namespace std;
/*
    mata kuliah : dasar pemograman
    tugas ke    : 10
    nama        : Fahmi Imam Taufik
    kelas       : 1A
*/



int main(){
    for (int a=5; a>=1; a--){
        for (int j=1; j<=5; j++){
            if (j<a)
             cout << " ";
        else
            cout << j;
        }
         cout<< endl;
    }
}

int main(){
    for (int a=5; a>=1; a--){
        for (int j=1; j<=5; j++){
            cout << "*";
        }
        cout<< endl;
    }
}
/
int main(){
    for (int a=1; a<=5; a++){
    {
        for (int j=1; j<=5; j++){
            if (a<j)
             cout << " ";
        else
            cout << j;
        }
         cout<< endl;
    }
 }
}

int main(){
    int b;
    for(b=0; b<5; b++){
        cout << "Fahmi Imam Taufik\n";
    }
}

int main(){
    int b;
    b =0;
    while(b<5){
        cout << "Fahmi Imam Taufik\n";
        b++;
    }
}

int main(){
    int i=1;
    do{
        cout << "Fahmi Imam Taufik\n";
        i++;
    }while(i<5);
}

int main(){
    int i=1;
    do{
        if(i%2!=0)
            cout<<i<< endl;
        i++;
    }while(i<=10);
}

