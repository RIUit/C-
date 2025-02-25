
#include<iostream>
using namespace std;


int main() {
	long long n, a, b;
	long long thanhTien;

	cin >> n >> a >> b;

	if (a <= b / 2) {
		thanhTien = a * n;
	}else {
		if (n % 2 == 0)
			thanhTien = b * n / 2;
		else
			thanhTien = (n - 1) / 2 * b +  a;
	}

	cout << thanhTien << endl;

	system("pause");

	return 0;
}