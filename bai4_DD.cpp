#include<iostream>
using namespace std;


int main() {
	int n, m, k;
	cin >> n >> m >> k;

	int mod = pow(10,k);
	long long tich = 1;
	for (int i = 0; i < m; i++) {
		tich *= n % mod;
		tich %= mod;
	}
	cout << tich << endl;
	return 0;
}