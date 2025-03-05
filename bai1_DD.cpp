#include<iostream>
using namespace std;


int main() {
	int n;
	long long tong = 0;
	cin >> n;
	long long m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		tong += m;
		tong %= 1000000007;
	}
	cout << tong << endl;
	return 0;
}