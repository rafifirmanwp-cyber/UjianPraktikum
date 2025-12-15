#include<iostream>

using namespace std;

int main() {
	int p;
	cout << "Masukkan Tinggi Segitiga : ";
	cin >> p;

	for (int i = p; i >= 1; i--) {
		//spasi di depan
		for (int j = i; j < p; j++) {
			cout << " ";
		}
		//bintang
		for (int k = 1; k <= (2 * i - 1); k++) {
		}
		cout << endl;
	}
	return 0;
}
