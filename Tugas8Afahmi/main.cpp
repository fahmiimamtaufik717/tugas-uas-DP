#include <iostream>

using namespace std;

int main(){
    int i, a;
    cout << "masukan angka :";
    cin >> a;

    for (i=1;i<=a;i++){
        cout << i << endl;
        if (i==3){
            cout << "*\n";
        }else {
            cout << i << endl;
        }
    }



}
