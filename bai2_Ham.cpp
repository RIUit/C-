#include<iostream>
using namespace std;

using ll= long long;

void thamSo(ll x, ll y, ll z) {
	cout << y << " " << x << " " << z << endl;
	cout << x + y + z << endl;
	cout << "KET THUC !" << endl;
}
int main() {
	ll a, b, c;

	cin >> a >> b >> c;
	thamSo(a, b, c);

	system("pause");

	return 0;
}