#include<iostream>
using namespace std;

using ll = long long;

int main() {
	ll a, b, k;
	ll left, right;

	cin >> a >> b >> k;

	if (k % 2 == 0)
		left = right = k / 2;
	else {
		right = k / 2 + 1;
		left = k / 2;
	}
	cout << a * right - b * left << endl;

	system("pause");

	return 0;
}