#include<iostream>
using namespace std;


int main() {
	int n;
	long long tich = 1;
	int mod = 1e9 + 7;
	cin >> n;
	long long m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		tich *= m;
		tich %= mod;
	}
	cout << tich << endl;

	return 0;
}