#include<iostream>
#include<cmath>
using namespace std;

bool isNguyenTo(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}
int tongChuSo(int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}
bool isSoDep(int n) {
	int sum = tongChuSo(n);
	int chuSoCuoi = sum % 10;
	return isNguyenTo(chuSoCuoi);
}
int main() {
	int a, b;
	cin >> a >> b;

	bool tim = false;
	for (int i = a; i <= b; i++) {
		if (isSoDep(i)) {
			cout << i << " ";
			tim = true;
		}
	}
	if (!tim)
		cout << "NOT FOUND\n";

	system("pause");
	return 0;
}