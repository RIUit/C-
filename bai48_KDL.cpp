#include<iostream>
using namespace std;


int main() {
	int n;
	int tong = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	if (tong % 10 == 2 || tong % 10 == 3 || tong % 10 == 5 || tong % 10 == 7)
		cout << "28tech\n";
	else
		cout << "29tech\n";

	return 0;
}