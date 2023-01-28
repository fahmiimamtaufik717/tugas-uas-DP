#include<iostream> //struct
using namespace std;

struct mhs{
	unsigned int nim;
	string nm;
	float ipk;
	
	};
	
int main(){
	mhs dt1,dt2;
	dt1.nim=2230511014;
	dt1.nm = "Fahmi";
	dt1.ipk=3.75;
	
	dt2.nim=2230511015;
	dt2.nm = "Taufik";
	dt2.ipk=3.75;
	
	cout << "DATA -1" << endl;
	cout << "NIM \t :" << dt1.nim << endl;
	cout << "NAMA \t :" << dt1.nm << endl;
	cout << "IPK \t :" << dt1.ipk << endl;
	cout << "\n";
	
	cout << "DATA -2" << endl;
	cout << "NIM \t :" << dt2.nim << endl;
	cout << "NAMA \t :" << dt2.nm << endl;
	cout << "IPK \t :" << dt2.ipk << endl;
	cout << "\n";
	
	

	
}
	
