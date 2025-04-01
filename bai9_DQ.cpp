#include<iostream>
using namespace std;

using ll = long long;
void decToBin(ll n) {
	if (n > 1)
		decToBin(n / 2);
	cout << n % 2;
}

int main() {
	ll n;
	cin >> n;
	decToBin(n);

	return 0;
}