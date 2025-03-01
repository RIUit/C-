#include<iostream>
using namespace std;

int main() {
	long long a, b, c, dem = 0;
	cin >> a >> b >> c;

	for (int i = 0; i <= c; i++) {
		long long y;
		y = c - a * i;
		if (y >= 0 && y % b == 0) {
			dem++;
		}
	}
	cout << dem << endl;
	return 0;
}