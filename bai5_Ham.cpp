#include<iostream>
using namespace std;


int sum(long long n) {
	int tong = 0;
	while (n) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}
int main() {
	long long n;
	cin >> n;
	cout << sum(n) << endl;

	system("pause");

	return 0;
}