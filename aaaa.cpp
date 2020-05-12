#include <iostream> 
using namespace std; 
  
int main() {
	int n;
	cout << " ========TUGAS BAHASA PEMROGRAMAN========= " << endl;
	cout << " ********Nama : Nadia Amira Putri********* " << endl;
	cout << " ************Nim : ETE10190111************ " << endl;
	
	cout << " masukkan jumlah baris = " << endl;
	cin >> n;
	
	
	for ( int i = 1; i <= n; i++) {
		for ( int j = n; j > i; j--) {
			cout << " ";
		}
		for ( int k = 1; k <= (2*i - 1); k++ ){
			cout << "*";
		}
		cout << endl;
	}
}
