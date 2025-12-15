#include<iostream>

using namespace std;

int main() {

	int bilangan;

		cout << "Masukkan bilangan << ";
	cin >> bilangan;

	//cek ganjil atau genap
	if (bilangan % 2 == 0) {
		cout << "genap" << endl;
	}

	//cek diatas atau dibawah 10
	if (bilangan > 10) {
		cout << "Diatas 10";
	}
	else {
		cout << " Dibawah 10";
	}
	return 0;
}