#include <iostream>

using namespace std;

int main(){
	// Tugas Buatlah program untuk menukar dua angka dengan menggunakan variabel sementara dan tanpa menggunakan variabel sementara

	// Dengan variabel sementara!

	int a, b;

	cout << "Masukkan a: ";
	cin >> a;
	cout << "Masukkan b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Nilai a: " << a << endl;

    return 0;
}