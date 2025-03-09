#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	long long n;
	cin >> n;

	while (n >= 10) {
		long long tong = 0;
		while (n > 0) {
			tong += n % 10;
			n /= 10;
		}
		n = tong;
	}
	
	
	cout << n << endl;
	system("pause");

	return 0;
}