#include<iostream>
using namespace std;


int main() {
	long long n, tong = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	if (tong == n)
		cout << "28tech\n";
	else
		cout << "29tech\n";

	return 0;
}