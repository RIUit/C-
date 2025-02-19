#include<iostream>
using namespace std;


int main() {
	long long n;
	long long tong = 0;

	cin >> n;

	if (n < 0) {
		cout << "NEGATIVE\n";
	}
	else {
		while (n) {
			if (n % 2 == 0) {
				tong += n % 10;
			}
			n /= 10;
		}
		cout << tong << endl;
	}
	system("pause");

	return 0;
}